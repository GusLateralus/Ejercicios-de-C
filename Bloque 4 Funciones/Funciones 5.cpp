/*5. Hacer un programa que pida por pantalla una temperatura en grados Celsius, 
muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por pantalla, 
utilizar funciones.
Celsius a Fahrenheit:
F = (9*C)/5 + 32;
Celsius a Kelvin:
K = C + 273.15;*/
#include <stdio.h>

float C,F=0,K=0;
int n;
float fahrenheit(float C);
float kelvin(float C);
int main()
{
	do{
		printf("\n1.-Celsius a Fahrenheit");
		printf("\n2.-Celsius a Kelvin");
		printf("\n3.-Salir");
		printf("\nDigite el numero de alguna opcion: ");
		scanf("%i",&n);
		
		switch(n)
		{
			case 1:
				printf("Digite la temperatura en grados Celsius: ");
				scanf("%f",&C);
				fahrenheit(C);
				printf("\nLa temperatura en Fahrenheit es: %f",fahrenheit(C));
				break;
			case 2:
				printf("Digite la temperatura en grados Celsius: ");
				scanf("%f",&C);
				kelvin(C);
				printf("\nLa temperatura en Kelvin es: %f",kelvin(C));
				break;
			case 3:
				printf("\nHasta luego");
				break;
		}
		
	}while(n!=3);
	
	return 0;
}

float fahrenheit(float C)
{
	F = (9*C)/5 + 32;
	return F;
}

float kelvin(float C)
{
	K = C + 273.15;
	return K;
	
}
