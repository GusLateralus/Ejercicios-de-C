/*12.-Pedir n palabras al usuario y posteriormente ordenarlas alfab�ticamente. 
Utilizar m�todo de ordenamiento (Burbuja, inserci�n, selecci�n).*/
#include <stdio.h>
#include <string.h>

int main()
{
	int n,i;
	char a[30];
	
	printf("Digite el total de palabras a ordenar: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n%i. Digite una palabra: ");
		fflush(stdin);
		scanf("%s",a[i]);
	}
	
	
}
