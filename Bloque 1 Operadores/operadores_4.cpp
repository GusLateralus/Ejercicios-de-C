//Hacer un Programa que calcule longitudes de Circunferencia.
#include <stdio.h>
#define PI 3.141592654

int main()
{
	float R,L;
	printf("Digite el valor del radio: ");
	scanf("%f",&R);
	
	L=R*(2*PI);
	printf("La longitud de la circunferencia es: %f",L);
	return 0;
}
