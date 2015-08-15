#include <stdio.h>
#include "calculadora.h"

int main(void)
{
	int x;
	int y;
	int a;
	int b;
	printf ("que operacion desea hacer?\n 1.suma\n 2.resta\n 3.division\n 4.multiplicacion\");
	scanf ("%d",&a);
	printf (" Ingrese numero 1\n");
	scanf ("%d",&x);
	printf (" Ingrese numero 2\n");
	scanf ("%d",&y);
	switch (a)
	{
		case 1:
			b=suma(x,y);
		case 2
			b=resta(x,y);
		case 3:
			b=division(x,y);
		case 4:
			b=multiplicacion(x,y);
	}
	printf ("El resultado es\n%d",b);
	return 0;
}