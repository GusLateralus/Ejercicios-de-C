//1.-Copiar el contenido de un Array1 de 5 elementos hacia otro Array2.
#include <stdio.h>
#include <conio.h>

void copiar(int a[],int b[], int size);
int main()
{
	int a[]= {2,4,6,8,10};
	int b[5];
	
	printf("Copiando arreglos...");
	copiar(a,b,5);
	
	getch();
	return 0;
}

void copiar(int a[],int b[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		 b[i] =  a[i];
	}
	
	for(i=0;i<size;i++)
	{
		printf("%i",b[i]);
	}
}


