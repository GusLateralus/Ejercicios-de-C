/*6. Ingrese un n�mero y calcule e imprima su ra�z cuadrada. 
Si el n�mero es negativo imprima el n�mero y un mensaje que diga �tiene ra�z imaginaria�.*/
#include <stdio.h>
#include <math.h>

int main()
{
	float n,raiz;
	printf("Digite un numero: ");
	scanf("%f",&n);
	raiz=sqrt(n);
	
	if(n>=0)
	{
		printf("La raiz es: %f",raiz);
	}
	else
	{
		printf("Raiz imaginaria");
	}
	return 0;
}
