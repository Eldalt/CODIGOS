
#include "point.h"
#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[])
{
	struct poitn x1, x2,x3;
  printf("\n ingresar valores para sumar los puntos [x]\n");
  scanf("%d",&x1.x);
  scanf("%d",&x2.x);
  printf("\n ingresar valores para sumar los puntos [y]\n");
  scanf("%d",&x1.y);
  scanf("%d",&x2.y);
  
  x3=suma(x1,x2);
  printf("la suma quedo asi %d %d",x3.x,x3.y);
	
	return 0;
}