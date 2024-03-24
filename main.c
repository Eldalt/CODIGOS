#include "swap.h"
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{
	printf("\n INTERCAMBIO DE VECTORES \n");
	struct v x;
	int i;
	
	printf("Ingrese los elementos del primer vector:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &x.z1[i]);
	}
	
	printf("Ingrese los elementos del segundo vector:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &x.z2[i]);
	}
	
	printf("PRIMER VECTOR = ");
	for (i = 0; i < 5; i++) {
		printf("%d, ", x.z1[i]);
	}
	printf("\n");
	
	printf("SEGUNDO VECTOR = ");
	for (i = 0; i < 5; i++) {
		printf("%d, ", x.z2[i]);
	}
	printf("\n");
	
	intercambio(&x);//pongo & por es un puntero para acceder a la direccion de memoria 
	
	printf("Después del intercambio:\n");
	printf("PRIMER VECTOR = ");
	for (i = 0; i < 5; i++) {
		printf("%d, ", x.z1[i]);
	}
	printf("\n");
	
	printf("SEGUNDO VECTOR = ");
	for (i = 0; i < 5; i++) {
		printf("%d, ", x.z2[i]);
	}
	printf("\n");
	
	return 0;
}



