/* 11.- Hacer una lista de 10 números, luego pedirle al usuario que digite un número, 
y a través de una búsqueda secuencial determinar si el número existe en la lista o no, 
y además indicar en qué posición se encuentra.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10]={3,44,5,6,10,8,9,1,72,81};
	char flag='F';
	int i,dato;
	
	printf("Digite un numero: ");
	scanf("%i",&dato);
	i=0;
	
	while((flag=='F')&&(i<10))
	{
		if(a[i]==dato)
		{
			flag='V';
		}
		i++;
	}
	
	if(flag=='F')
	{
		printf("El numero que digito, no existe");
	}
	
	else if(flag=='V')
	{
		printf("El numero que digito, si existe. Se encuentra en la posicion: %i",i-1);
	}
	getch();
	return 0;
}
