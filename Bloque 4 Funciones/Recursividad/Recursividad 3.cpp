/*2. Consideremos una función que recibe un numero
n e imprime los numeros del n al 1. Con recursividad*/

#include <stdio.h>

int desc(int n);

int main()
{
	int n,i;
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	for(i=n;i>0;i--)
	{
		printf("\n%i",desc(i));
	}
	
	return 0;
}

int desc(int n)
{
	if(n>=0)
	{
		return n;
	}
	
	else
	{
		return (desc(n)-desc(n-1));
	}
}
