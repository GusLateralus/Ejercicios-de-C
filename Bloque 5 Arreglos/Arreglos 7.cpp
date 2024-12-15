/* 7.-Hacer una matriz de tipo entera preguntándole al usuario el número de filas 
y el número de columnas, 
rellenar la matriz y luego mostrarla en pantalla.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int n,m,i,j,matriz[50][50];
	printf("\nDigite el numero de filas y columnas de la matriz respectivamente: ");
	scanf("%i %i",&n,&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nIngrese un elemento para la matriz en la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %i ",matriz[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
