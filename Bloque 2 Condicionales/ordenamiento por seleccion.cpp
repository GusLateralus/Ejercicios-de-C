//Ordenamiento por selección (corregir)

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5]= {4,3,1,5,2};
	int i,j,aux,min;
	
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i+1;j<=5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		aux=a[i];
		a[i]=a[min];
		a[min]=aux;
	}
	
	printf("Ascendente:\n");
	
	for(i=0;i<5;i++)
	{
		printf(" %i ",a[i]);
	}
	
	printf("\nDescendente:\n");
	
	for(i=4;i>=0;i--)
	{
		printf(" %i ",a[i]);
	}
	
	getch();
	return 0;
}
