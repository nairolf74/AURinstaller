#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void help()
{
	fprintf(stdout,"[-h] -> aide\n[-f] -> fonctionnement sans passer par 'AUR'\n[-n] -> vide le cache\n[-l] -> liste les paquets installés depuis AUR\n[-lp] -> liste les paquets non installés depuis pacman\n[-u] -> liste les paquets pouvant être mis à jour\n[-ua] -> met à jour les paquets\n[-v] -> version du programme\nAUR [option 1] [nom paquet]\n[-i] -> clonage, création et installation du paquet\n[-c] -> clonage du paquet\n[-m] -> créé le paquet (possibilitée d'ajouter les options de makepkg en troisième option\n[-s] -> fini l'installation avec pacman");
}


int main(int argc,char * argv[])
{
	if(strcmp(argv[1],"--")==0)
	{
	}
	else
	{
		help();
	}
	return EXIT_SUCCESS;
}
