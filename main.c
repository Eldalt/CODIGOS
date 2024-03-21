#include "complex.h"
#include <stdio.h>
int main()
{    
	complejo a ,b ,result;
	printf("BIENVENIDOS A LA CALCULADORA DE NUMEROS COMPLEJOS\n");
	printf("\n \n");
	printf("ingresar parte real del primer numero complejo\t");
	scanf("%f",&a.rr);
	printf("ingresar parte imaginaria  del primer numero complejo\t");
	scanf("%f",&a.im);
	printf("El numero complejo que ingresaste es [%f+j%f]",a.rr,a.im);
	printf("\n \n");
	printf("\n INGRESAR EL SEGUNDO NUMERO COMPLEJO\n");
	printf("\n \n");
	printf("ingresar parte real del segundo numero complejo\t");
	scanf("%f",&b.rr);
	printf("ingresar parte imaginaria del segundo numero complejo\t");
	scanf("%f",&b.im);
	printf("El numero complejo que ingresaste es [%f+j%f]",b.rr,b.im);
	suma(a,b,&result);
	printf("\n la suma de los complejos ==> [%f+j%f]\n",result.rr,result.im);
	resta(a,b,&result);
	printf("\n --------------------\n");
	printf("\n la resta de los complejos ==> [%f+j%f]\n",result.rr,result.im);
	result=multiplicacion(a,b);
	printf("la multiplicacion de los complejos esta quedando ====>[%f+j%f]",result.rr,result.im);
	printf("\n \n");
	printf("\n El conjugado del numero complejo esta quedando \n");
	result=conjugado(a);
	printf("[%f+j%f]",result.rr,result.im);
	
}