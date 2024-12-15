//10.- Factorial de un numero
#include <stdio.h>

int main()
{
	int n,fact=1,i;
	printf("Ingresa un numero entero: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		fact *= i;
		
	}
	printf("El factorial del numero es: %i",fact);
	return 0;
}
