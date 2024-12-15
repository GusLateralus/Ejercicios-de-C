//7.- Suma de los 10 primeros numeros pares
#include <stdio.h>

int main()
{
	int i,sum=0;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			sum += i;
		}
	}
	printf("La suma total de los 10 primeros numeros pares es: %i",sum);
	return 0;
}
