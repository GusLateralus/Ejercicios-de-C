/*Determinar si un número es par o impar*/
#include <stdio.h>

int main()
{
	int n;
	printf("Digite un numero entero: ");
	scanf("%i",&n);
	
	if(n%2==0)
	{
		printf("El numero es par");
	}
	else
	{
		printf("El numero es impar");
	}
	return 0;
}
