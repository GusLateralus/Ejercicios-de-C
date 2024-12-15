/* 10.-Sumar 2 matrices, pidiendo al usuario el número de filas y columnas y
además los elementos de cada matriz, 
luego mostrar el resultado.*/

#include <stdio.h>
#include <conio.h>

int A[50][50],B[50][50],n,m,i,j;
int suma[50][50];
void sumar(int A[50][50],int B[50][50]);
int main()
{
	
	
	printf("Digite el numero de filas y columnas respectivamente para las matrices: ");
	scanf("%i %i",&n,&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Digite un numero para la matriz A en la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i",&A[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Digite un numero para la matriz B en la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i",&B[i][j]);
		}
	}
	
	sumar(A,B);
	getch();
	return 0;
}

void sumar(int A[50][50],int B[50][50])
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			suma[i][j]= A[i][j]+B[i][j];
		}
	}
	printf("Y la matriz resultante de la suma es: ");
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %i ",suma[i][j]);
		}
		printf("\n");
	}
}
