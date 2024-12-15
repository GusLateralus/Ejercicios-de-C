/*24.-Pedir dos cadenas(con numero flotante) al usuario, 
posteriormente multiplicar dichos números y mostrar su resultado.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[10];
	char b[10];
	float v1,v2,mult;
	
	printf("Digite dos cadenas de numeros (formato flotante): ");
	gets(a);
	fflush(stdin);
	gets(b);
	
	v1=atof(a);
	v2=atof(b);
	mult=v1*v2;
	
	printf("El producto resultante es: %.2f",mult);
	
	return 0;
}
