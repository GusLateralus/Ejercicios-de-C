//2.-Hacer un programa que realice la media aritm�tica de 2 n�meros (con funciones).
#include <stdio.h>

float media(float a,float b);
float a,b,med=0;

int main()
{
	printf("Ingrese 2 numeros: ");
	scanf("%f %f",&a,&b);
	
	printf("\nLa media aritmetica es: %f",media(a,b));
	return 0;
}

float media(float a,float b)
{
	med=(a+b)/2;
	return med;
}
