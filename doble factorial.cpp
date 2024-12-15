//Doble factorial
#include <stdio.h>

int main()
{
	int n,i,fact=1;
	printf("Digite un numero entero y positivo: ");
	scanf("%i",&n);
	
	if(n%2==0)
	{
		for(i=1;i<=n;i++)
		{
			fact= (fact*i)/2;
		}
		
		printf("El doble factorial del numero es: %i",fact);
	}
	
	else
	{
		
	}
}
