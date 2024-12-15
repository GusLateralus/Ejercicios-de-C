//1.-Utilizar las funciones getchar() y putchar() para para leer e imprimir un string.

#include <stdio.h>

int main()
{
	int c;
	
	while(EOF != (c=getchar()))
	{
		putchar(c);
	}
	
	return 0;
}
