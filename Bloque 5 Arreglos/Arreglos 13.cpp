/*13.-Hacer un array de 10 números desordenados, luego ordenarlos con el método burbuja, 
posteriormente pedir un dato a buscar y utilizar 
la búsqueda binaria para determinar si existe o no.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10]={3,2,4,5,1,6,8,7,9,10};
	int i,j,aux,inf,sup,med,n;
	char flag='F';
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
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
		
		if(a[med]>n)
		{
			sup=med;
			med=(inf+sup)/2;
		}
		
		if(a[med]<n)
		{
			inf=med;
			med=(inf+sup)/2;
		}
	}
	
	if(flag=='V')
	{
		printf("El numero esta en la lista. Se encuentra en la posicion: %i",med);
	}
	
	if(flag=='F')
	{
		printf("El numero no se encuentra en la lista.");
	}
	
	getch();
	return 0;
}
