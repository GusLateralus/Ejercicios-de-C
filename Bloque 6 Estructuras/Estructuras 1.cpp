/*1.-Hacer una estructura llamada corredor, en la cual se tendr�n 
los siguientes miembros: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle
 una categor�a de competici�n:
- Juvenil <= 18 a�os
- Se�or <= 40 a�os
- Veterano > 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct corredor
{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}persona;

int main()
{
	char categoria[20];
	
	printf("Digite su nombre: ");
	gets(persona.nombre);
	printf("\nDigite su edad: ");
	scanf("%i",&persona.edad);	
	fflush(stdin);
	printf("\nDigite su sexo: ");
	gets(persona.sexo);
	printf("\nDigite el nombre de su club: ");
	gets(persona.club);
	
	if(persona.edad <= 18)
	{
		strcpy(categoria,"Juvenil");
	}
	
	else if(persona.edad <= 40)
	{
		strcpy(categoria,"Adulto");
	}
	
	else if(persona.edad > 40)
	{
		strcpy(categoria,"Veterano");
	}
	
	printf("\n-Datos del corredor-\n");
	printf("Nombre: %s",persona.nombre);
	printf("\nEdad: %i",persona.edad);
	printf("\nSexo: %s",persona.sexo);
	printf("\nCategoria: %s",categoria);
	printf("\nClub: %s",persona.club);
	printf("\n");
	
    system("pause");
	return 0;
	
}
