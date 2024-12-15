//1.-Suma de los n primeros números
#include <stdio.h>

int main()
{
	int n,i,suma=0;
	printf("Digite el total de numeros a sumar: ");
	scanf("%i",&n);
	
	while(i<=n)
	{
		suma+=i;
		i++;
	}
	printf("El resultado es: %i",suma);
	return 0;
}
