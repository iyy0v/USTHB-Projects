#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 973


typedef struct element{
    int state;
    char name[100];
    char code[20];
    char type[20];
    char val[100];
    char parent[100];
    int size;
} element;


typedef struct node{
    element elt;
    struct node * nxt;
    
} node;

typedef struct elt{
    int state;
    char name[100];
    char type[20];
} elt;

element tabi[1000];
node* tab[TABLE_SIZE];
elt tabs[40], tabm[40];
extern char sav[20];
char chaine[] = "";



int hash_key(char *entite){

    char* id;
    id = strdup(entite);

    if(id[0] >= 97 && id[0] <= 122) id[0] = id[0] - 32;

    if(id[0] == '('){
        return TABLE_SIZE - 1;
    }
    if(id[0] >= 48 && id[0]<=57){
        return id[0] - 48 + 962;
    }
    if(strlen(id)<2 || id[1] == '/'){
        return (id[0] - 65) * 37;
    }
    else{
        if(id[1] >= 48 && id[1]<=57){
            return (id[0] - 65) * 37 + id[1] - 48 + 1;
        }
        else{
            return (id[0] - 65) * 37 + 10 + (id[1] - 97) + 1;
        }
    }
}



int find(char* id){
    int key = hash_key(id);
    if(tab[key] == NULL){
        return 0;
    }
    else{
        node* t = tab[key];
        while(t != NULL && strcmp(t->elt.name, id) != 0){
            t = t->nxt;
        }
        if(t == NULL) return 0;
        else return 1;
    }
}


void add(char entite[], char code[], char type[], float val){
    if(find(entite)) return;
    
    int key = hash_key(entite);
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    strcpy(temp->elt.name, entite);
    strcpy(temp->elt.code, code);
    strcpy(temp->elt.type, type);
    sprintf(temp->elt.val, "/NULL/");
    sprintf(temp->elt.parent, "/NONE/");
    temp->elt.state = 1;
    temp->elt.size = 0;
    temp->nxt = NULL;

    if(tab[key] == NULL){
        tab[key] = temp;
    }
    else{
        node* t = tab[key];
        while(t->nxt != NULL) t = t->nxt;
        t->nxt = temp;
    }
}


void print(){
    for(int i=0; i<TABLE_SIZE; i++){
        if(tab[i] != NULL){
            node* t = tab[i];
            while(t != NULL){
                if(strcmp(t->elt.type, "") != 0){
                    //const char *temp = (strcmp(t->elt.val, "/NULL/") == 0) ? "" : t->elt.val;
                    printf("\t| %-15s | %-15s | %-15s\n", t->elt.name, t->elt.code, t->elt.type);
                }
                t = t->nxt;
            }
        }
    }
}


void init()
{
    int i;
    for(i =0; i<TABLE_SIZE; i++){
        tab[i] = NULL;
    }
    for (i = 0; i < 40; i++)
    {
        tabs[i].state = 0;
        tabm[i].state = 0;
    }
}

void inserer(char entite[], char code[], char type[], float val, int i, int y)
{
    switch (y)
    {
    case 0:
        add(entite, code, type, val);
        break;

    case 1:
        tabm[i].state = 1;
        strcpy(tabm[i].name, entite);
        strcpy(tabm[i].type, code);
        break;

    case 2:
        tabs[i].state = 1;
        strcpy(tabs[i].name, entite);
        strcpy(tabs[i].type, code);
        break;
    }
}

void lookup(char entite[], char code[], char type[], float val, int y)
{
    int i;
    if(type != NULL && strcmp(type, "FLOAT") == 0) y = 0;
    switch (y)
    {
    case 0:
        if(!find(entite)) inserer(entite, code, type, val, i, 0);
        break;
    case 1:
        for (i = 0; ((i < 40) && (tabm[i].state == 1)) && (strcmp(entite, tabm[i].name) != 0); i++)
            ;
        if (i < 40 && (strcmp(entite, tabm[i].name) != 0))
            inserer(entite, code, type, val, i, 1);
        break;
    case 2:
        for (i = 0; ((i < 40) && (tabs[i].state == 1)) && (strcmp(entite, tabs[i].name) != 0); i++)
            ;
        if (i < 40 && (strcmp(entite, tabs[i].name) != 0))
            inserer(entite, code, type, val, i, 2);
        break;
    }
}

void afficher()
{
    int i = 0;

    printf("\n\n\n\t\tTable des symboles IDF\n");
    printf("--------------------------------------------------------------------\n");
    printf("\t| %-15s | %-15s | %-15s\n", "Nom", "Code", "Type");
    printf("--------------------------------------------------------------------\n");
    print();

    printf("\n\n\n\tTable des symboles mots cles\n");
    printf("--------------------------------------\n");
    printf("\t|       Nom        \n");
    printf("--------------------------------------\n");
    
    for (i = 0; i < 40; i++)
        if (tabm[i].state == 1)
        {
            printf("\t|   %s \n", tabm[i].name);
        }

    printf("\n\n\n\tTable des symboles separateurs\n");
    printf("--------------------------------------\n");
    printf("  \t  | %-15s | %-15s  \n", "Nom", "Code");
    printf("--------------------------------------\n");

    for (i = 0; i < 40; i++)
        if (tabs[i].state == 1)
        {
            printf("  \t  | %-15s | %-15s \n", tabs[i].name, tabs[i].type);
        }
}

node * getElement(char entite[])
{
    int key = hash_key(entite);
    if(tab[key] == NULL){
        return NULL;
    }
    else{
        node* t = tab[key];
        while(t != NULL && strcmp(t->elt.name, entite) != 0){
            t = t->nxt;
        }
        if(t == NULL) return NULL;
        else return t;
    }
}

node * getPreviousElement(char entite[])
{
    int key = hash_key(entite);
    if(tab[key] == NULL){
        return NULL;
    }
    else{
        node* t = tab[key];
        while(t != NULL && strcmp(t->nxt->elt.name, entite) != 0){
            t = t->nxt;
        }
        if(t == NULL) return NULL;
        else return t;
    }
}

void insererTYPE(char entite[], char type[])
{

    node* t = getElement(entite);

    if (t != NULL)
        strcpy(t->elt.type, type);
}

int doubleDeclaration(char entite[]){
    node* t = getElement(entite);
    if (strcmp(t->elt.type, "") == 0)
        return 0;
    else
        return -1;
}

char *getType(char *entite){
    node* t = getElement(entite);
    return t->elt.type;
}

int cmpType(char *entite, char *type){
    return (strcmp(type, getType(entite)));
}

void updateValue(char *entite, char *val){
    node* t = getElement(entite);
    char *type = t->elt.type;

    if (strcmp(type, "STRING") == 0)
    {
        int i, j = 0;
        for (i = 1; i < strlen(val) - 1; i++)
        {
            t->elt.val[j] = val[i];
            j++;
        }
        t->elt.val[j] = '\0';
    }
    else
    {
        sprintf(t->elt.val, "%s", val);
    }
}

char *getValue(char *entite){
    node* t = getElement(entite);
    return t->elt.val;
}

void setConst(char *entite, char* value){
    node* t = getElement(entite);
    sprintf(t->elt.code, "CST");
    sprintf(t->elt.val, "%s", value);
}

void setParent(char *entite, char *parent){
    node* t = getElement(entite);
    sprintf(t->elt.parent, parent);
}


int isConst(char *entite){
    node* t = getElement(entite);
    return (strcmp(t->elt.code, "CST") == 0) ? 1 : 0;
}

int isInitialized(char *entite){
    node* t = getElement(entite);
    return (strcmp(t->elt.val, "/NULL/") == 0) ? 0 : 1;
}


// void removeNode(char* entite){
//     int key = hash_key(entite);
//     node* t = getElement(entite);

//     if(t==NULL) return;
//     printf("not null\n");
//     if(tab[key] == t){
//         printf("first elt\n");
//         tab[key] = t->nxt;
//         return;
//     }

//     node* p = getPreviousElement(entite);
//     p->nxt = t->nxt;
// }

int hasType(char* entite){
    node* t = getElement(entite);
    if(t == NULL) return 0;
    return (t->elt.type != NULL);
}


int isStruct(char* entite){
    node* t = getElement(entite);
    if(!hasType(entite)) return 0;
    return (strcmp(t->elt.type, "STRUCT") == 0);
}


int exists(char* entite){
    node* t = getElement(entite);
    return t != NULL;
}

int isCompatible(char* type1, char* type2){
    if(strcmp(type1, type2) == 0){
        return 1;
    } 
    else if(strcmp(type1, "INTEGER") == 0 && strcmp(type2, "FLOAT") == 0){
        return 1;
    } 
    else if(strcmp(type2, "INTEGER") == 0 && strcmp(type1, "FLOAT") == 0){
        return 1;
    }
    else return 0;
}

void setArraySize(char* entite, int size){
    node* t = getElement(entite);
    t->elt.size = size;
}

int isArray(char* entite){
    node* t = getElement(entite);
    return (t->elt.size > 0);
}

int isOutOfRange(char* entite, int index){
    node* t = getElement(entite);
    return index >= t->elt.size;
}

char* arrayElementType(char* entite){
    node* t = getElement(entite);
    return t->elt.type + 9;
}

void insertStruct(char* entite, char* structName){
    char childAttributes[50][50];
    char childAttributesTypes[50][50];
    int i=0;
    node* t = getElement(structName);
    t = t->nxt;

    while(t != NULL && strcmp(t->elt.parent, structName) == 0){
        sprintf(childAttributes[i], "%s.%s", entite, t->elt.name + strlen(structName) + 1);
        lookup (childAttributes[i],"IDF",t->elt.type,0, 0); 
        setArraySize(childAttributes[i], t->elt.size);
        t = t->nxt;
        i++;
    }
}
