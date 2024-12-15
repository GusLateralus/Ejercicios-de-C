//Convertir grados Celsius a Fahrenheit
#include <stdio.h>

int main()
{
	float celsius,fahr;
	printf("Digite la temperatura en grados Celsius: ");
	scanf("%f",&celsius);
	
	fahr=(celsius*9/5)+32;
	printf("La temperatura en grados Fahrenheit es: %f",fahr);
	return 0;
}
