#include "struct.h"

struct rat rat_plus_petit(struct rat list[]){

	struct rat rep;
	int i=0;
	rep.num=list[0].num;
	rep.den=list[0].den
	double test;
	double tmp=(double)rep.num/(double)rep.den;
	while((double)list[i].den){
		test=(double)list[i].num/(double)list[i].den;
		if(test < tmp){
			rep.num=list[i].num;
			rep.den=list[i].den;
			tmp=test;
		}
		i++;
	}
	return rep;
}
