/*4.-Hacer un programa que pida por pantalla un número del 1 al 10 
y mediante un procedimiento muestre por pantalla el número escrito en letras.*/
#include <stdio.h>

void num();
int n;

int main()
{
	
	do{
		printf("\nB I E N V E N I D O");
		printf("\nDigite un numero del 1 al 10 o presione 11 para salir: ");
		scanf("%i",&n);
		
		num(); 	
	}while(n != 11);
	 printf("\nHasta luego");
	return 0;
}

void num()
{
	switch(n)
	{
		case 1: printf("\nUno"); break;
	    case 2: printf("\nDos"); break;
	    case 3: printf("\nTres"); break;
	    case 4: printf("\nCuatro"); break;
	    case 5: printf("\nCinco"); break;
	    case 6: printf("\nSeis"); break;
	    case 7: printf("\nSiete"); break;
	    case 8: printf("\nOcho"); break;
	    case 9: printf("\nNueve"); break;
	    case 10: printf("\nDiez"); break;
	}
}
