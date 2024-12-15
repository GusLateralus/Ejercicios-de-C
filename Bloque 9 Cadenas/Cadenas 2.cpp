//2.-Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios ocupa.

#include <stdio.h>

int main()
{
	int c;
	int i=0;
	
	while(EOF != (c=getchar()))
	{
		i++;
	}
	
	printf("El numero de espacios que ocupa la palabra es: %i",i-1);
	
	return 0;
}
