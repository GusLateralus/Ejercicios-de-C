/*2.-Comprobar si un n�mero es par o impar, 
y se�alar la posici�n de memoria donde se est� guardando el n�mero. Con punteros.*/

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
