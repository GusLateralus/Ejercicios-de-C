/*1.-Hacer una variable de tipo int, otra de tipo float y por ultimo una de tipo char, 
almacenar datos en cada una de las variables, posteriormente indicar 
la posición de memoria donde se encuentran guardados los datos de cada variable. Con punteros.*/

#include <stdio.h>

int main()
{
	int *pos_a,a=5;
	float *pos_b,b=9.8;
	char *pos_c,c='d';
	
	pos_a=&a;
	pos_b=&b;
	pos_c=&c;
	
	printf("\nPosici%cn para variable a: %p",162,pos_a);
	printf("\nPosici%cn para variable b: %p",162,pos_b);
	printf("\nPosici%cn para variable c: %p",162,pos_c);
	
	return 0;
	
}
