#include "complex.h"
void suma (complejo  a ,complejo b,complejo *resultado)
{
	resultado->rr=a.rr+b.rr;
	resultado->im=a.im+b.im;
}
void resta (complejo a ,complejo b,complejo *resultado)
{
	resultado->rr=a.rr-b.rr;
	resultado->im=a.im-b.im;
	
}
complejo multiplicacion(complejo a,complejo  b)
{
	complejo resultado;
	resultado.rr=(a.rr*b.rr)-(a.im*b.im);
	resultado.im=(a.rr*b.im)+(a.im+b.rr);
	return resultado;
	
}
complejo conjugado(complejo a)
{   complejo resultado;
resultado.rr=a.rr;
resultado.im=(a.im * -1);
return resultado;
}