/*17.-Pedir su nombre y apellidos al usuario (en mayúscula), 
posteriormente utilizar la función strlwr() para convertir las MAYUSCULAS en minúsculas e imprimir los datos.*/
#include <stdio.h>
#include <string.h>

struct usuario
{
	char name[30];
	char apellidos[30];
}usuario1;

int main()
{
	printf("Digite sus nombres (en MAYUSCULAS): ");
	gets(usuario1.name);
	printf("Digite sus apellidos (en MAYUSCULAS): ");
	gets(usuario1.apellidos);
	
	strlwr(usuario1.name);
	strlwr(usuario1.apellidos);
	
	printf("\nNombre: %s",usuario1.name);
	printf("\nApellidos: %s",usuario1.apellidos);
	
	return 0;
}
