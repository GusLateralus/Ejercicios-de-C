//11.-Agregar texto a un archivo txt.
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]="D:\\prueba\\hola.txt";
	
	fd=fopen(direccion,"at");
	
	if(fd==NULL)
	{
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	
	else
	{
		while((c=getchar())!=EOF)
		{
			fputc(c,fd);
		}
	}
	
	fclose(fd);
	return 0;
}
