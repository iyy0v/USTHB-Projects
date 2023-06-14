; PROJECT TP ARCHI : PGCD
; NAIT MIHOUB Ayoub
; 191931047451
; ACAD C - L2
; (Monome)


data segment
    ancien_ip   dw  ?                     ;pour sauvergarder l'ip de la It 0
    ancien_cs   dw  ?                     ;pour sauvergarder le cs de la It 0
    valWord1    dw  ?
    valWord2    dw  ?
    const10     dd  10
    msg_fin1    dw  "Fin du calcul du PGCD de $"
    msg_fin2    dw  " et $"
    TabW        dw  1568, 37000, 28822
    TabEnd      db  ?                     ;pour calculer la Taille du tableau
    N           db  0                     ;pour sauvegarder la Taille du tableau
    Message     db  20 dup(?)             ;pour afficher la date et l'heure
    JourSemaine db  7 dup('Dimanche$','Lundi$','Mardi$','Mercredi$','Jeudi$','Vendredi$','Samedi$')
    msgV        db  ", $"
    msgN        db  "N = $"
    msgTab      db  "Tab = $"
    msgPGCD     db  "PGCD = $"
ends

MaPile segment stack
    dw   128  dup(0)
    tos label word
MaPile ends

code segment
    assume ds:data, cs:code, ss:MaPile
;-----------------------------------------------
    afficherS proc                  ;pour afficher des chaines de caracteres
        mov ah, 9
        INT 21h
        
        RET
    afficherS endp
;-----------------------------------------------
    afficherC proc                  ;pour afficher un caractere
        mov ah, 2
        INT 21h
        
        RET
    afficherC endp
;-----------------------------------------------        
    afficherNumero proc             ;pour afficher avec 2 chiffres ou plus (>9)
        push ax
        push dx
        
        xor dx,dx                   ; AX = 0
        div [const10]               ; DX = quotient, DX = reste
        test ax,ax                  ; Si quotient == 0
        je afficherChiffre          
        call afficherNumero         ; Utilisation de la recursivite pour l'affichage des chiffres de gauche a droite
        
        afficherChiffre:
        add dx, 30h
        mov ax, dx
        
        call afficherC              ; Afficher le reste
                                     
        pop dx
        pop ax

        RET
    afficherNumero endp
;----------------------------------------------- 
    Routine:                        ;routine de la question 2
        push ax
        
        ;positioner le curseur
        mov dh, 6
        mov dl, 20
        call posCurseur
        
        ;afficher le message
        mov dx, OFFSET msg_fin1        
        mov ax, SEG msg_fin1
        mov ds, ax
        call afficherS
        
        mov ax, valWord1
        call afficherNumero
        
        mov dx, OFFSET msg_fin2        
        mov ax, SEG msg_fin2
        mov ds, ax
        call afficherS
        
        mov ax, valWord2
        call afficherNumero
        
        ;effacer l'ecran
        mov ax, 3             
        INT 10h
        
        mov bx, 0                  ;BX = 0 pour indiquer a la proc PGCD_I l'arrete du calcul du PGCD
        
        pop ax 
    IRET
;-----------------------------------------------
    sauvegarderIt proc             ;pour sauvegarder l'adresse d'une routine - question 2
        mov al, 0
        mov ah, 35h
        INT 21h
        mov ancien_ip, bx
        mov ancien_cs, es
        
        RET
    sauvegarderIt endp
;-----------------------------------------------
    derouterIt proc                ;pour changer l'adresse routine d'une interruption - question 2
        mov dx, OFFSET Routine
        mov ax, SEG Routine
        mov ds, ax
        mov al, 0
        mov ah, 25h
        INT 21h
        
        ;Restaurer l'@ de DS
        mov ax, data
        mov ds, ax
        
        RET
    derouterIt endp
;-----------------------------------------------
    restaurerIt proc               ;pour restaurer l'adresse d'une interruption qui a ete sauvegarde - question 2
        mov dx, ancien_ip
        mov ax, ancien_cs
        mov ds, ax
        mov al, 0
        mov ah, 25h
        INT 21h
        
        ;Restaurer l'@ de DS
        mov ax, data
        mov ds, ax
        
        RET
    restaurerIt endp
;------------------------------------------------
    PGCD_I proc                    ;Calcule le PGCD de 2 nombre - question 1
        
        ;utilise dans l'affichage du Routine
        mov valWord1, ax
        mov valWord2, cx
        
        
        
        cmp ax, cx
        jge  divisionPGCD_I        ; AX >= CX
        xchg ax, cx                ; pour permuter entre AX et CX (CX>AX) 
        
    divisionPGCD_I:    
        mov bx, 1h                 ; initialiser BX a 1 (utiliser BX comme un booleen)
    bouclePGCD_I:
        mov dx, 0    
        DIV cx
        cmp bx, 0                  ; Si BX == 0
        je finPGCD_I
        mov ax, cx
        mov cx, dx
        jmp bouclePGCD_I
    
    finPGCD_I: 
           
        RET
    PGCD_I endp
;-----------------------------------------------
    PGCD_IN proc                   ;parcourir TabW et calculer le PGCD - question 3
        ;calculer le nombre d'element de TabW
        mov bx, 2
        mov ax, OFFSET TabEnd
        sub ax, OFFSET TabW
        div bl
        mov N, al
        
        ;initialiser l'index utilise dans la boucle
        mov bx, 2
        mov al, N
        mov ah, 0
        mul bx
        mov dx, ax
        
        mov ax, TabW[0]
    booclePGCD_IN:
        cmp bx, dx            ;comparer l'index avec le nombre d'element du TabW
        jge  finPGCD_IN       ;bx >= N (index > nbrElement)
        mov cx, TabW[bx]
        
        push bx
        push dx
        call PGCD_I           ;AX = PGCD(PGCD(Elements precedents),TabW[bx])
        pop dx
        pop bx
        
        add bx, 2
        jmp booclePGCD_IN
            
    finPGCD_IN:
                
        RET    
    PGCD_IN endp
;-----------------------------------------------                
    afficherMinute proc
        mov ah, 2ch
        INT 21h
        
        mov ax, 0
        mov al, cl
        mov bx, 10
        lea si, Message[19]
        mov [si], '$'
    decomposer0:
            dec si
            xor dx, dx
            div bx
            add dl, 48
            mov [si], dl
            cmp ax, 0
            jne decomposer0
        cmp cl, 10
        jae afficher0
        dec si
        mov [si], '0'
        afficher0:
            mov ah, 9h
            mov dx, si
            INT 21h
        
        RET
    afficherMinute endp
;-----------------------------------------------
    afficherHeure proc
        mov ah, 2ch
        INT 21h
        
        mov ax, 0
        mov al, ch
        mov bx, 10
        lea si, Message[19]
        mov [si], '$'
    decomposer1:
            dec si
            xor dx, dx
            div bx
            add dl, 48
            mov [si], dl
            cmp ax, 0
            jne decomposer1
        cmp ch, 10
        jae afficher1
        dec si
        mov [si], '0'
        afficher1:
            mov dx, si
            call afficherS
        
        RET
    afficherHeure endp
;-----------------------------------------------
    afficherHoraire proc        
        call afficherHeure
        
        mov dx, 68h
        call afficherC
        
        call afficherMinute
        
        RET
    afficherHoraire endp
;-----------------------------------------------
    afficherJourSemaine proc
        mov ah, 2ah
        INT 21h
        
        mov bl, al
        mov dx, OFFSET JourSemaine[bl]
        mov ax, SEG JourSemaine[bl]
                                                
        call afficherS
        
        RET
    afficherJourSemaine endp
;-----------------------------------------------
    afficherJour proc
        mov ah, 2ah
        INT 21h
        
        xchg dl, ch
        
        mov ax, 0
        mov al, ch
        mov bx, 10
        lea si, Message[19]
        mov [si], '$'
    decomposer3:
            dec si
            xor dx, dx
            div bx
            add dl, 48
            mov [si], dl
            cmp ax, 0
            jne decomposer3
        cmp ch, 10
        jae afficher3
        dec si
        mov [si], '0'
        afficher3:
            mov ah, 9h
            mov dx, si
            INT 21h
        
        RET
    afficherJour endp
;-----------------------------------------------
    afficherMois proc
        mov ah, 2ah
        INT 21h
        
        xchg dh, ch
        
        mov ax, 0
        mov al, ch
        mov bx, 10
        lea si, Message[19]
        mov [si], '$'
    decomposer4:
            dec si
            xor dx, dx
            div bx
            add dl, 48
            mov [si], dl
            cmp ax, 0
            jne decomposer4
        cmp ch, 10
        jae afficher4
        dec si
        mov [si], '0'
        afficher4:
            mov ah, 9h
            mov dx, si
            INT 21h
        
        RET
    afficherMois endp
;-----------------------------------------------
    afficherAnnee proc
        mov ah, 2ah
        INT 21h
        
        mov ax, 0
        mov ax, cx
        mov bx, 10
        lea si, Message[19]
        mov [si], '$'
    decomposer5:
            dec si
            xor dx, dx
            div bx
            add dl, 48
            mov [si], dl
            cmp ax, 0
            jne decomposer5
        cmp cx, 10
        jae afficher5
        dec si
        mov [si], '0'
        afficher5:
            mov ah, 9h
            mov dx, si
            INT 21h
        
        RET
    afficherAnnee endp
;-----------------------------------------------
    afficherDate proc
       
        call afficherJourSemaine
        
        mov dx, OFFSET msgV
        call afficherS
        
        call afficherJour
        
        mov dx, 2fh
        call afficherC
        
        call afficherMois
        
        mov dx, 2fh
        call afficherC
        
        call afficherAnnee
        
        
        RET
    afficherDate endp
;-----------------------------------------------
    afficherN proc
        mov dx, OFFSET msgN
        call afficherS
        
        mov cl, N
        mov ch, 0
        
        mov dx, cx
        add dx, 30h
        call afficherC
        
        RET
    afficherN endp
;-----------------------------------------------
    afficherTab proc
        mov dx, OFFSET msgTab
        call afficherS
        
        mov bx, 0
        mov cl, N
        mov ch, 0
        cmp cx, 0         ; pour traiter le cas ou Taille = 0
        jle finAT2
        cmp cx, 1         ; pour traiter le cas ou Taille = 1
        je  finAT
        dec cx
    boocleAT:
        mov ax, TabW[bx]
        call afficherNumero
        
        mov dx, OFFSET msgV
        call afficherS
        
        add bx, 2
        loop boocleAT
        
    finAT:    
        mov ax, TabW[bx]
        call afficherNumero
        
    finAT2:    
        RET
    afficherTab endp
;-----------------------------------------------        
    afficherPGCD proc

        mov dx, OFFSET msgPGCD
        call afficherS
        
        pop dx
        pop ax
        push dx
        
        call afficherNumero
        
        RET
    afficherPGCD endp
;-----------------------------------------------
    affichage proc
        push ax                     ;empiler la valeur du PGCD
        
        ;afficher la date        
        mov dh, 1
        mov dl, 59
        call posCurseur
        
        call afficherDate
        
        ;afficher l'heure:minute
        mov dh, 2
        mov dl, 74
        call posCurseur
        
        call afficherHoraire
        
        ;afficher N (Taille du Tab)
        mov dh, 4
        mov dl, 1
        call posCurseur
        
        call afficherN
        
        ;afficher Tab
        mov dh, 4
        mov dl, 25
        call posCurseur        
        
        call afficherTab
        
        ;afficher PGCD
        mov dh, 5
        mov dl, 30
        call posCurseur
                        
        call afficherPGCD
        
        RET
    affichage endp
;-----------------------------------------------
    posCurseur proc                   ;pour positionner le curseur
        mov ah, 2
        mov bh, 0

        INT 10h
        
        RET
    posCurseur endp
;-----------------------------------------------



;Programme principale :
start:
    
    mov ax, data
    mov ds, ax
    mov ax, MaPile
    mov ss, ax
    mov sp, OFFSET tos
    
    
 
    
    call sauvegarderIt
    
    call derouterIt
    
    call PGCD_IN
    
    call affichage
    
    call restaurerIt


          
          
    mov ax, 4c00h ; exit to operating system.
    int 21h    
    ends

end start 
