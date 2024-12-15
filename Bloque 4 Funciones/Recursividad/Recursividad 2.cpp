//2.- Serie fibonacci (Recursividad)
#include <stdio.h>

long fibonacci(int n);

int main()
{
	int n,i;
	
	printf("Digite el total de elementos para la serie: ");
	scanf("%i",&n);
	printf("\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%li ",fibonacci(i));
	}
	
	return 0;
}

long fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
