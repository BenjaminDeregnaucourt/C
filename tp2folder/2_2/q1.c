#include <stdio.h>
#include "struct.h"

struct rat rat_somme{struct rat n1, struct rat n2){
	struct rat rep;
	rep.den=n1.den*n2.den;
	rep.num=n1.nul*n2.num;
}
