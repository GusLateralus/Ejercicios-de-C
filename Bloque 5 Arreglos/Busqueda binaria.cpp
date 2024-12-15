//Búsqueda binaria o dicotómica 

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int inf,sup,med,dato;
	char flag='F';
	
	dato=3;
	
	inf=0;
	sup=5;
	
	while(inf<=sup)
	{
		med=(inf+sup)/2;
		
		if(a[med]==dato)
		{
			flag='V';
			break;
		}
		
		if(a[med]>dato)
		{
			sup=med;
			med=(inf+sup)/2;
		}
		
		if(a[med]<dato)
		{
			inf=med;
			med=(inf+sup)/2;
		}
		
	}
	
	if(flag=='V')
	{
		printf("El numero se encuentra en la lista. Su posicion es: %i",med);
	}
	
	else if(flag=='F')
	{
		printf("El numero no se encuentra en la lista. ");
	}
	getch();
	return 0;
}
