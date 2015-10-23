#include <stdio.h>
#include "tp6.h"
unsigned char* allouer_pixels(entete bmp *entete){
    unsigned char* c;
    c = (unsigned char *) malloc(sizeof(char) *entete ->bitmap.resolution_horizontale*entete->bitmap.resolution_verticale);
    return c;

}
