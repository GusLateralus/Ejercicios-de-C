//Hacer un programa que calcule áreas de trapecios
#include <stdio.h>

int main()
{
	float A,B,b,h;
	printf("Digite el valor de la base mayor: ");
	scanf("%f",&B);
	printf("Digite el valor de la base menor: ");
	scanf("%f",&b);
	printf("Digite el valor de la altura: ");
	scanf("%f",&h);
	
	A=((B+b)*h)/2;
	printf("El area del trapecio es: %f",A);
	return 0;
}
