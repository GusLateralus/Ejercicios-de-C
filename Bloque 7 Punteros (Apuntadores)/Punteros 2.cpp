/*2.-Comprobar si un número es par o impar, 
y señalar la posición de memoria donde se está guardando el número. Con punteros.*/

#include <stdio.h>

int main()
{
	int n,*pos_n;
	
	printf("Digite un n%cmero: ",163);
	scanf("%i",&n);
	
	if(n%2==0)
	{
		pos_n=&n;
		printf("\nEl n%cmero es par y su posici%cn es: %p",163,162,pos_n);
	}
	
	else
	{
		pos_n=&n;
		printf("\nEl n%cmero es impar y su posici%cn es: %p",163,162,pos_n);
	}
	
	return 0;
}
