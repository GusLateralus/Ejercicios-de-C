/*16.-Pedir al usuario su nombre, apellido, y ciudad en la que vive, 
posteriormente convertir todo a MAYUSCULAS e imprimir los datos.(Utilizar una estructura).*/
#include <stdio.h>
#include <string.h>

struct usuario
{
	char name[30];
	char apellido[30];
	char ciudad[30];
}usuario1;

int main()
{
	printf("Ingrese su nombre: ");
	gets(usuario1.name);
	printf("\nIngrese su apellido: ");
	gets(usuario1.apellido);
	printf("\nIngrese el nombre de la ciudad donde proviene: ");
	gets(usuario1.ciudad);
	
	strupr(usuario1.name);
	strupr(usuario1.apellido);
	strupr(usuario1.ciudad);
	
	printf("\n\n-Datos-\n\n");
	printf("Nombre: %s",usuario1.name);
	printf("\nApellido: %s",usuario1.apellido);
	printf("\nCiudad: %s",usuario1.ciudad);
	
	return 0;
}
