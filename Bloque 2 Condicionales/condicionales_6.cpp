/*6. Ingrese un número y calcule e imprima su raíz cuadrada. 
Si el número es negativo imprima el número y un mensaje que diga “tiene raíz imaginaria”.*/
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
