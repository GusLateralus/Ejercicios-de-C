/*13.- Hacer un programa que imprima la suma de todos los números
pares que hay desde 1 hasta n, y diga cuantos números hay.*/
#include <stdio.h>

int main()
{
	int i,n,sum=0,total=0;
	printf("Digite el total de elementos a sumar: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum += i;
			total++;
		}
	}
	printf("El resultado de la suma es: %i",sum);
	printf("\nEl total de elementos pares es: %i",total);
	
	return 0;
}
