// NAIT MIHOUB Ayoub & MEKKI Feriel
// ACAD C - L3
#include <stdio.h>
#include <dirent.h> // pour utiliser DIR, opendir(), readdir() et closedir()
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	struct dirent *d; 
	DIR *dir;
	int opt;

	if(argc == 3) { // Cas où le répertoire et l'option sont entrés en parametre
		dir = opendir(argv[1]); // récuperer le pointeur de type DIR
		if(dir == NULL) { // Erreur d'ouverture du répertoire
			perror(argv[1]); // afficher l'erreur
			closedir(dir);
			return -1;
		}
	}
	else if(argc == 2) { 
		if(argv[1][0] != '-') // Cas où le répertoire est entrée mais pas l'option
			dir = opendir(argv[1]); // récuperer le pointeur de type DIR
			if(dir == NULL) { // Erreur d'ouverture du répertoire
	    			perror(argv[1]); // afficher l'erreur
	    			closedir(dir);
	    			return -1;
	 		}
		else // Cas où l'option est entrée mais pas le répertoire
			dir = opendir("."); // récuperer le pointeur de type DIR
	}
	else if(argc == 1) { // Cas par défaut: le dossier courant et sans option
		dir = opendir("."); // récuperer le pointeur de type DIR
	}
	else{ 
		printf(" Extra arguments !\n");
		printf(" Usage: %s <dir>[optional] <option>[optional]\n",argv[0]);
		printf(" Options: -r Show directories only\n\t  -f Show files only\n"); 
	}
	

	opt = getopt(argc, argv, "rf"); // récuperer les options
    switch(opt) 
    { 
        case 'r': // afficher seulment les répertoires
            while((d = readdir(dir)) != NULL){
            	if((*d).d_type == DT_DIR) // tester le type du fichier pointu
            		printf("%s\n", (*d).d_name); // affciher si un répertoire
            }
            break; 
        case 'f': // afficher seulment les fichiers
            while((d = readdir(dir)) != NULL){
            	if((*d).d_type == DT_REG) // tester le type du fichier pointu
            		printf("%s\n", (*d).d_name); // afficher si un fichier régulier
            }
            break; 
        case '?': 
            printf(" Unknown option: %c\n", optopt);
            printf(" Options: -r Show directories only\n\t  -f Show files only\n"); 
            break; 
    	default: // afficher tous le contenu du répertoires (aucune option entrée)
    		while((d = readdir(dir)) != NULL){
            	printf("%s\n", (*d).d_name); // affciher tous
            }
    		break;

    } 

	closedir(dir); // fermer le répertoire

	return 0;
}
