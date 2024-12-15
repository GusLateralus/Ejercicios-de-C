//Búsqueda secuencial

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5]={3,2,1,4,5};
	char flag='F';
	int i,dato;
	
	i=0;
	dato=4;
	
	while((flag=='F')&&(i<5))
	{
		if(a[i]==dato)
		{
			flag='V';
		}
		i++;
	}
	
	if(flag=='F')
	{
		printf("El numero no pertenece al arreglo");
	}
	
	else if(flag=='V')
	{
		printf("El numero pertenece al arreglo. Esta en la posicion: %i",i-1);
	}
	
	getch();
	return 0;
}
