/*4.-Hacer un programa en C que cree un archivo de texto 
(.txt) llamado "hola mundo", crear el archivo en la carpeta que elija.*/
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	char direccion[50];
	printf("Ingrese la ubicaci%cn del archivo a crear: ",162);
	gets(direccion);
	
	fd=fopen(direccion,"w");
	
	if(fd==NULL)
	{
		printf("No se pudo crear el archivo.");
	}
	
	else
	{
		printf("Archivo creado exitosamente");
		printf("\nUbicaci%cn: %s",162,direccion);
	}
	
	return 0;
}
