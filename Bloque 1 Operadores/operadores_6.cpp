//Calcule la media aritmetica de tres números cualesquiera
#include <stdio.h>

int main()
{
	float a,b,c,med;
	printf("Digite tres numeros cualesquiera: ");
	scanf("%f %f %f",&a,&b,&c);
	
	med=(a+b+c)/3;
	printf("La media aritmetica es: %f",med);
	return 0;
}
