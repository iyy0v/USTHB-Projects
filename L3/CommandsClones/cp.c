// NAIT MIHOUB Ayoub & MEKKI Feriel
// ACAD C - L3
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fs,fd;
	char buf;

	if(argc != 3) {
		printf("Usage: %s <Source_file> <Destination_file>\n",argv[0]);
		exit(1);
	}

	if(access(argv[1],F_OK)==0) { // Verifier si le fichier source existe
		if(access(argv[1],R_OK)==0) { // Verifier la permission de lecture du fichier source
			fs = open(argv[1],O_RDONLY);
		}
		else{
			printf("ERROR: Unable to read the file %s !\n",argv[1]);
			exit(1);
		}
	}
	else{
		printf("ERROR: The source file %s doesn't exist !\n",argv[1]);
		exit(1);
	}

	if(access(argv[2],F_OK)==0) { // supprimer le fichier destinataire s'il existe deja, puis recreer le
		fd = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC);	
	}
	else{ // creer le fichier destinataire s'il n'existe pas
		fd = open(argv[2],O_WRONLY | O_CREAT);
	}

	while(read(fs,&buf,1) != 0) { write(fd,&buf,1); } // copier le contenu du fichier source vers le fichier destinataire
	
	close(fs);
	close(fd);

	return 0;
}