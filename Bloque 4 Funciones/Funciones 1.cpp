//1.- Determinar si un número es par o no 
#include <stdio.h>

void num();
int a=0;

int main()
{
	
	printf("Ingrese un numero: ");
	scanf("%i",&a);
	
	num();
	return 0;
}

void num()
{
	if(a%2==0)
	{
		printf("\nEl numero es par");
	}
	else
	{
		printf("\nEl numero es impar");
	}
}

