/* 2. Crear un programa que tenga un array de 100 numeros aleatorios
entre 1 y 1000. Una vez creado organizarlo de tal manera que almacene
los numeros pares en un array y los impares en otro.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,num[100],li=1,ls=1000,par[100],impar[100];
	srand(time(NULL));
	
	for(i=0;i<100;i++)
	{
		num[i]=li+rand()%((ls+1)-li);
		
	}
	
	printf("\nPares: ");
	for(i=0;i<100;i++)
	{
		if(num[i]%2==0)
		{
			par[i]=num[i];
			printf("\n%i",par[i]);
		}
	}
	
	printf("\nImpares: ");
	for(i=0;i<100;i++)
	{
		if(num[i]%2!=0)
		{
			impar[i]=num[i];
			printf("\n%i",impar[i]);
		}
	}
	return 0;
}
