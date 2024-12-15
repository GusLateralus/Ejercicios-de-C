/* 12.-Hacer un array pidiendo al usuario el número de elementos, 
y rellenar el array con números digitados por el teclado, luego pedir al usuario un número,
 y hacer una búsqueda secuencial para indicar si ese elemento existe o no, 
también entregar posición.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[50];
	int n,i,dato;
	char flag='F';
	
	printf("Digite el numero de elementos del arreglo: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nDigite un numero para llenar el arreglo: ");
		scanf("%i",&a[i]);
	}
	
	printf("Arreglo lleno. Ahora digite un numero a buscar en el mismo: ");
	scanf("%i",&dato);
	
	i=0;
	
	while((flag=='F')&&(i<n))
	{
		if(a[i]==dato)
		{
			flag='V';
		}
		i++;
	}
	
	if(flag=='V')
	{
		printf("\nEl numero se encuentra en la lista. Esta en la posicion: %i",i-1);
	}
	
	else if(flag=='F')
	{
		printf("\nEl numero no se encuentra en la lista.");
	}
	
	getch();
	return 0;
}
