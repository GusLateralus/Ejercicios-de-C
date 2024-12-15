/*6.-Rellenar un array de 10 números, 
posteriormente utilizando punteros indicar cuales son números pares y su posición en memoria.*/

#include <stdio.h>

int main()
{
	int i,n[10];
	int *p_n;
	
	//p_n=n;
	
	for(i=0;i<10;i++)
	{
		printf("%i. Ingrese un numero: ",i+1);
		scanf("%i",&n[i]);
	}
	
	p_n=n;
	
	for(i=0;i<10;i++)
	{
		if(*p_n%2==0)
		{
			printf("\n\nEl numero %i es par y su posicion en memoria es: %p",*p_n,p_n);
		}
		p_n++;
	}
	
	return 0;
}
