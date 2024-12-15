/*2.-Crear un archivo de texto (.txt) en la ubicación que elijas, 
posteriormente crear un programa en C, que localice tu archivo de texto creado.*/
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	char direccion[50];
	
	printf("Ingrese la direcci%cn del archivo: ",162);
	gets(direccion);
	
	fd= fopen(direccion,"r");
	
	if(fd==NULL)
	{
		printf("El archivo no existe.");
	}
	
	else
	{
		printf("Se encontr%c el archivo",162);
		printf("\nUbicaci%cn: %s",162,direccion);
	}
	
	return 0;
	
}
