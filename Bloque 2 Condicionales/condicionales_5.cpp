/*Ingrese un n�mero y calcule e imprima su ra�z cuadrada. 
Si el n�mero es negativo imprima el n�mero y un mensaje que diga �tiene ra�z imaginaria�.*/
#include <stdio.h>
#include <math.h>

int main()
{
	float a=0,raiz=0;
	printf("Digite un numero cualquiera: ");
	scanf("%f",&a);
	
	if(a>=0)
	{
		raiz=sqrt(a);
		printf("La raiz del numero ingresado es: %f",raiz);
	}
	else
	{
		printf("Tiene raiz imaginaria");
	}
	return 0;
	
}
