/*11. Dada una nota de un examen mediante un código escribir el literal que le corresponde a la nota:
A - Excelente
B - Notable
C - Aprobado
D y F – Reprobado.*/
#include <stdio.h>

int main()
{
	char letra;
	printf("B I E N V E N I D O");
	printf("\n1.-A");
	printf("\n2.-B");
	printf("\n3.-C");
	printf("\n4.- D y F");
	printf("\nDigite una de las letras de las opciones: ");
	scanf("%c",&letra);
	
	switch(letra)
	{
		case 'A': printf("Excelente"); break;
		case 'B': printf("Notable"); break;
		case 'C': printf("Aprobado"); break;
		case 'D': 
		case 'F': printf("Reprobado"); break;
		default: printf("Se equivoco. Intente de nuevo."); break;
	}
	return 0;
}

