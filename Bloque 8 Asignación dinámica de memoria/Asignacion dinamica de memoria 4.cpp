/*4.-Pedir al usuario el n�mero de elementos para un array de n�meros enteros, posteriormente 
comprobar con malloc si hay memoria suficiente (si el puntero es v�lido, es decir diferente de NULL),
si la hay es entonces rellenar ese array con n�meros aleatorios, 
si no la hay decir que hay un error en la asignaci�n de memoria.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int *p_array,n,i;
	
	printf("Digite el numero de elementos del arreglo: ");
	scanf("%i",&n);
	
	p_array=(int*)malloc(n*sizeof(int));
	
	if(p_array==NULL)
	{
		printf("No hay suficiente memoria");
		return -1;
	}
	
	else
	{
		srand(time(NULL));
		
		for(i=0;i<n;i++)
		{
			p_array[i]=1+rand()%((n+1)-1);
			printf("%i. %i\n",i+1,p_array[i]);
		}
		
	}

	return 0;
}
