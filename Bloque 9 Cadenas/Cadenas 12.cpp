/*12.-Pedir n palabras al usuario y posteriormente ordenarlas alfabéticamente. 
Utilizar método de ordenamiento (Burbuja, inserción, selección).*/
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
