/*Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Case 3: salir.*/
#include <stdio.h>
#include <math.h>

int main()
{
	
	int num=0,cube=0,opc=0;
	printf("<<BIENVENIDO!>>");
	printf("\n1.-Cubo de un numero.");
	printf("\n2.-Numero par o impar.");
	printf("\n3.-Salir.");
	printf("\nDigite una de las opciones: ");
	scanf("%i",&opc);
	
	switch(opc)
	{
		case 1: 
		     printf("Digite un numero: ");
		     scanf("%i",&num);
		     cube=pow(num,3);
		     printf("El cubo del numero es: %i",cube);
		break;
		case 2: 
		     printf("Digite un numero: ");
		     scanf("%i",&num);
		     if(num%2==0)
		     {
		     	printf("El numero es par");
			 }
			 else
			 {
			 	printf("El numero es impar");
			 }
		break;
		case 3:
			break;
	}
	return 0;
	
}
