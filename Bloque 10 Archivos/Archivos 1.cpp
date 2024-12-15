//1.-Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt) o no.

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	char direccion[]= "D:\\prueba\\hola.txt";
	
	fd= fopen(direccion,"r");
	
	if(fd==NULL)
	{
		printf("El archivo no existe");
	}
	else
	{
		printf("Se encontro el archivo");
		printf("Ubicacion: %s",direccion);
	}
	
	return 0;
}
