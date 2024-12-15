//14. Hacer un bucle do...while para imprimir las letras minúsculas del alfabeto.
#include <stdio.h>

int main()
{
	char letra= 'a';
	
	do
	{
		printf("\n%c",letra);
		letra++;
	}
	while(letra<='z');
	return 0;
}
