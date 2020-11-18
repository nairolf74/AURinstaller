#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void help()
{
	fprintf(stdout,"[] -> aide\n");
	fprintf(stdout,"[] -> fonctionnement sans passer par 'AUR'\n");
	fprintf(stdout,"[] -> vide le cache\n");
	fprintf(stdout,"[] -> liste les paquets installés depuis AUR\n");
	fprintf(stdout,"[] -> liste les paquets non installés depuis pacman\n");
	fprintf(stdout,"[] -> liste les paquets pouvant être mis à jour\n");
	fprintf(stdout,"[] -> met à jour les paquets\n");
	fprintf(stdout,"[] -> version du programme\n");
	fprintf(stdout,"AUR [option 1] [nom paquet]\n");
	fprintf(stdout,"[] -> clonage, création et installation du paquet\n");
	fprintf(stdout,"[] -> clonage du paquet\n");
	fprintf(stdout,"[] -> créé le paquet (possibilitée d'ajouter les options de makepkg en troisième option\n");
	fprintf(stdout,"[] -> fini l'installation avec pacman");
}


int main(int argc,char * argv[])
{
if(argc>1)
{
	if(strcmp(argv[1],"--")==0)
	{
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
	return EXIT_SUCCESS;
}
