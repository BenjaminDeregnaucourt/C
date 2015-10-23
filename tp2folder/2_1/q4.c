#include <stdio.h>
void ajoute_apres (int dest[],int taille_dest,int src[],int taille_src){

	for(int i = 0 ; i<taille_src;i=i+1){
		dest[taille_dest+i]=src[i];
	}
}

