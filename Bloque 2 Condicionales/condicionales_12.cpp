/*12. Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
1 - turismo, peaje = $500.
2 - autobús, peaje = $3000.
3 - motocicleta, peaje = $300.
Caso contrario - Vehículo no autorizado.*/
#include <stdio.h>

int main()
{
	int n,peaje;
	printf("B I E N V E N I D O");
	printf("\n1.-Turismo");
	printf("\n2.-Autobus");
	printf("\n3.-Motocicleta");
	printf("\n4.-Ninguno de los anteriores");
	
	printf("\nDigite un numero de las opciones segun el vehiculo que tenga: ");
	scanf("%i",&n);
	
	while(n<1 || n>4)
	{
		printf("Digite una opcion valida: ");
		scanf("%i",n);
	}
	
	switch(n)
	{
		case 1:
			peaje=500;
			printf("El peaje a pagar es de: %i",peaje);
		break;
		case 2:
			peaje=3000;
			printf("El peaje a pagar es de: %i",peaje);
		break;
		case 3:
			peaje=300;
			printf("El peaje a pagar es de: %i",peaje);
		break;
		case 4:
			printf("Vehiculo no autorizado. Favor de ir a chingar a su madre.");
		break;
		
	} 
	return 0;
		
}

