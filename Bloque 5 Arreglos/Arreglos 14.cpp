/*14.-Hacer un array de 10 números desordenados, luego ordenarlos con el ordenamiento por selección, 
posteriormente pedir un dato a buscar y utilizar la búsqueda binaria para determinar si existe o no.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10]={1,3,2,4,5,7,6,8,10,9};
	int i,j,aux,min,inf,sup,med,n;
	char flag='F';
	
	for(i=0;i<10;i++)
	{
		min=i;
		for(j=i+1;j<=10;j++)
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
	
	printf("Digite un numero: ");
	scanf("%i",&n);
	
	inf=0;
	sup=10;
	
	while(inf<=sup)
	{
		med=(inf+sup)/2;
		if(a[med]==n)
		{
			flag='V';
			break;
		}
		
		if(a[med]<n)
		{
			inf=med;
			med=(inf+sup)/2;
		}
		
		if(a[med]>n)
		{
			sup=med;
			med=(inf+sup)/2;
		}
	}
	
	if(flag=='V')
	{
		printf("El numero esta en la lista. Su posicion es: %i",med);
		
	}
	
	else if(flag=='F')
	{
		printf("El numero no esta en la lista.");
	}
	
	getch();
	return 0;
	
}
