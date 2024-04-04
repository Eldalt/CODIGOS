#include "point.h"
struct poitn suma(struct poitn z1,struct poitn z2)
{
	struct poitn z3;
	z3.x=z1.x +z2.x;
	z3.y=z1.y +z2.y;
	return z3 ;
}