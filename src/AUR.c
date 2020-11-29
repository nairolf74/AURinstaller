#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>


#define VERSION "2.0.0"

void help()
{
	fprintf(stdout,"[-h] -> aide\n");
	fprintf(stdout,"[] -> vide le cache\n");
	fprintf(stdout,"[] -> liste les paquets installés depuis AUR\n");
	fprintf(stdout,"[-Qm] -> List installed packages not found in pacman\n");
	fprintf(stdout,"[] -> liste les paquets pouvant être mis à jour\n");
	fprintf(stdout,"[] -> met à jour les paquets\n");
	fprintf(stdout,"[-V] -> version\n");
	fprintf(stdout,"AUR [option 1] [nom paquet]\n");
	fprintf(stdout,"[] -> clonage, création et installation du paquet\n");
	fprintf(stdout,"[] -> clonage du paquet\n");
	fprintf(stdout,"[] -> créé le paquet (possibilitée d'ajouter les options de makepkg en troisième option\n");
	fprintf(stdout,"[] -> fini l'installation avec pacman");
}

void version()
{
	fprintf(stdout,"%s\n",VERSION);
}

void noFromPacman()
{
	int p=fork();
	if(p==0)
	{
		execl("/bin/pacman","/bin/pacman","-Qm",(char*)NULL);
	}
}

int main(int argc,char * argv[])
{
	if(argc>1)
 	{
		if(strcmp(argv[1],"-V")==0)
		{
			version();
	 	}
		else if(strcmp(argv[1],"-Qm")==0)
		{
			noFromPacman();
		}
		else
	 	{
			help();
		}
	}
	else
	{
		help();
	}
	wait(NULL);
	return EXIT_SUCCESS;
}
