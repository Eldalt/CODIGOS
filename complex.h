#pragma once 
#include <stdio.h>
typedef struct comple
{
	float rr;//parte real
	float im;//parte imaginaria
}complejo;//defini un nuevo nombre para que quede cheto
void suma (complejo  a ,complejo b,complejo *resultado);
void resta (complejo a ,complejo b,complejo *resultado);
complejo multiplicacion(complejo a,complejo  b);
complejo conjugado(complejo a);