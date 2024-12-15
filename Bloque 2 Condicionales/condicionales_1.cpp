//Comprobar si un número digitado por el usuario es positivo o negativo.
#include <stdio.h>

int main()
{
	float num;
	printf("Digite un numero cualquiera: ");
	scanf("%f",&num);
	
	if(num>0)
	{
		printf("El numero es positivo");
	}
	else if(num==0)
	{
		printf("El numero es cero");
		
	}
	if(num<0)
	{
		printf("El numero es negativo");
	}
	return 0;
}
