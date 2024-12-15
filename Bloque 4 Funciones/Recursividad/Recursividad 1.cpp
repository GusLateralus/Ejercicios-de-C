//1.-Factorial de un número (Recursividad)
#include <stdio.h>
long factorial(int n);

int main()
{
	int n;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	printf("\nEl factorial del numero es: %i",factorial(n));
	
	return 0;
}

long factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	
	else
	{
		return(n*factorial(n-1));
	}
}
