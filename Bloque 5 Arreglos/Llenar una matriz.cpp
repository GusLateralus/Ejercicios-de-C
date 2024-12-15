// Llenado de una matriz...
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,matriz[3][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite un numero para la matriz en la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %i ",matriz[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
