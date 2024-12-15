/* 8. Hacer un arbol con '*' del tipo:
	ejemplo:
	
	Digite el numero de filas : 5
		
		*
		**
		***
		****
		*****
*/
#include <stdio.h>

int main()
{
	int nfilas,i,j;
	printf("Digite el numero de filas: ");
	scanf("%i",&nfilas);
	
	for(i=0;i<=nfilas;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
