/*8.-Reservar memoria para un arreglo de 5 números, rellenarlo con números que digite el usuario,
luego utilizar realloc para ampliar ese arreglo a 10 números y agregar 5 números más, 
por ultimo imprimir el arreglo resultante de 10 números.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a1,*a2;
	int i;
	
	a1=(int*)malloc(5*sizeof(int));
	
	for(i=0;i<5;i++)
	{
		printf("\n%i. Digite un n%cmero para la posici%cn a1[%i]: ",i+1,163,162,i);
		scanf("%i",&a1[i]);
	}
	
	printf("\n\n");
	
	a2=(int*)realloc(a1,10*sizeof(int));
	
	for(i=0;i<5;i++)
	{
		a1[i]=a2[i];
	}
	
	for(i=5;i<10;i++)
	{
		printf("\n%i. Digite otros numeros para el arreglo a2[%i]: ",i+1,i);
		scanf("%i",&a2[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<10;i++)
	{
		printf(" %i ",a2[i]);
	}
	
	return 0;
}
