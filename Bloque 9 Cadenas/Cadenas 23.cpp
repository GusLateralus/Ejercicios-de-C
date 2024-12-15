//23.-Utilizar la función atof() para pasar una cadena (por ejemplo: "123.45"), a número flotante.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[]="123.45";
	float valor;
	
	valor=atof(a);
	
	printf("Valor flotante: %f",valor);
	
	return 0;
}
