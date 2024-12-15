//3.- Imprimir el alfabeto en mayúsculas con punteros.

#include <stdio.h>

int main()
{
	char letra;
	char *p_letra=&letra;
	
	for(letra='A';letra<='Z';letra++)
	{
		printf(" %c ",*p_letra);
	}
	return 0;
}
