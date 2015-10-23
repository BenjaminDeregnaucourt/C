#include <stdio.h>
#include "tp6.h"


int verifier_entete(entete_bmp *entete){
    if (entete->bitmap.profondeur == 24){
      return 1;
    }
    return 0; 
}
