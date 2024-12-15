//3.-Leer un string con getchar() y contabilizar cuantas vocales tiene.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c,vocal=0;
	
	while (EOF != (c=getchar()))
	{
		switch(c)
		{
			case 'a': 
			case 'e': 
			case 'i': 
			case 'o': 
			case 'u': vocal++;
		}
		putchar(c);
	}
	

	printf("El total de vocales en la palabra es de: %i",vocal);
	
	return 0;
}
