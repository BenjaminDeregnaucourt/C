#include <stdio.h>
#include "tp2.h"

int main(){
	int tab[4]={5,10,15,20};
	int tab2[4];
	int tab3[8];
	afficher(tab,4);
	somme(tab,4);
	copie_dans(tab2,tab,4);
	copie_apres(tab3,8,tab,4);
	return 0;
}
