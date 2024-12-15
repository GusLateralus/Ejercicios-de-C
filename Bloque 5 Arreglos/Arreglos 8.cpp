/* 8.-Hacer una matriz de tipo entera de 2 * 2, 
llenarla de números y luego copiar todo su contenido hacia otra matriz.*/
#include <stdio.h>
#include <conio.h>

int i,j,A[2][2],B[2][2];
void copiar();
int main()
{
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nDigite un numero para la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i",&A[i][j]);
		}
	}
	
	copiar();
	getch();
	return 0;
}

void copiar()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			B[i][j]= A[i][j];
		}
	}
	
	printf("\nLa matriz B es: ");
	printf("\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %i ",B[i][j]);
		}
		printf("\n");
	}
	
}
