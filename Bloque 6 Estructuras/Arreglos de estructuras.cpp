//Arreglos de estructuras

#include <stdio.h>

struct persona
{
	char nombre[20];
	int edad;
}personas[5];

int main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		printf("\n%i. Digite su nombre: ",i+1);
		gets(personas[i].nombre);
		printf("%i. Digite su edad: ",i+1);
		scanf("%i",&personas[i].edad);
		printf("\n");
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n%i. Su nombre es: %s",i+1,personas[i].nombre);
		printf("\n%i. Su edad: %i",i+1,personas[i].edad);
		printf("\n");	
	}
	
	return 0;
}
