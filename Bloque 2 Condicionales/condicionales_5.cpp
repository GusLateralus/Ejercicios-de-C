/*Ingrese un número y calcule e imprima su raíz cuadrada. 
Si el número es negativo imprima el número y un mensaje que diga “tiene raíz imaginaria”.*/
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
