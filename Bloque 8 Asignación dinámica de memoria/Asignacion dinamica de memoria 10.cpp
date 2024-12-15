/*10.-Hacer un puntero array de tipo float, pedir el usuario el n�mero de elementos, luego 
reservar memoria din�mica con calloc, luego llenar el array, imprimir todos los elementos, 
y por ultimo liberar el espacio de memoria din�mica utilizado.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *p_array;
	int i,n;
	
	printf("Digite el total de elementos para el arreglo: ");
	scanf("%i",&n);
	
	p_array=(float*)calloc(n,sizeof(float));
	
	for(i=0;i<n;i++)
	{
		printf("\n%i. Digite un n%cmero para el arreglo a[%i]: ",i+1,163,i);
		scanf("%f",&p_array[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		printf(" %.2f ",p_array[i]);
	}
	
	free(p_array);
	
	return 0;
	
	}
