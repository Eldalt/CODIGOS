#include "swap.h"
void intercambio(struct v *a) {
	int i, aux;
	for (i = 0; i < 5; i++) {
		aux = a->z1[i];
		a->z1[i] = a->z2[i];
		a->z2[i] = aux;
	}
}