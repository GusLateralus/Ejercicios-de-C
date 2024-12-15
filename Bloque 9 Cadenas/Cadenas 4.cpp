/*4. Leer un string con getchar() y contabilizar cuantas veces aparece la vocal a,e,i,o,
u, e imprimir el contador de cada una.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c,a=0,e=0,i=0,o=0,u=0;
	
	while(EOF != (c=getchar()))
	{
		switch(c)
		{
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
		putchar(c);
	}
	
	printf("La letra a aparece %i veces",a);
	printf("\nLa letra e aparece %i veces",e);
	printf("\nLa letra i aparece %i veces",i);
	printf("\nLa letra o aparece %i veces",o);
	printf("\nLa letra u aparece %i veces",u);
	
	return 0;
}
