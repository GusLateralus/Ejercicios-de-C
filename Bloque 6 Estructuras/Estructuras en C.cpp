//Estructuras en C

#include <stdio.h>

struct persona
{
	char nombre[20];
	int edad;
}persona1,persona2;

int main()
{
	printf("1. Digite su nombre: ");
	gets(persona1.nombre);
	printf("1. Digite su edad: ");
	scanf("%i",&persona1.edad);
	fflush(stdin);
	printf("\n");
	printf("\n2. Digite su nombre: ");
	gets(persona2.nombre);
	printf("2. Digite su edad: ");
	scanf("%i",&persona2.edad);
	
	printf("\n1. Su nombre es: %s",persona1.nombre);
	printf("\n1. Su edad es: %i",persona1.edad);
	printf("\n");
	printf("\n2. Su nombre es: %s",persona2.nombre);
	printf("\n2. Su edad es: %i",persona1.edad);
	return 0;
}
