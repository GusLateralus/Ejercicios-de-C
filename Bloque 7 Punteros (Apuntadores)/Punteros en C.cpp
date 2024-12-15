//Punteros en C

#include <stdio.h>

int main()
{
	int n=50;
	int *p_n;
	
	p_n=&n;
	
	printf("Valor de la variable: \n");
	printf("Dato: %i",n);
	printf("\nDato: %i",*p_n);
	
	printf("\n\nPosici%cn de memoria: \n",162);
	printf("Posici%cn: %p",162,&n);
	printf("\nPosici%cn: %p",162,p_n);
	
	return 0;
	
}
