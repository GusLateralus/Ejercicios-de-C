//9.-Tomar el archivo de texto (.txt) creado en el problema 7, y con la función fgetc() leer todo su contenido.
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]="D:\\prueba\\hola.txt";
	
	fd=fopen(direccion,"rt");
	
	if(fd==NULL)
	{
		printf("Error al trata de leer el archivo");
		return 1;
	}
	
	while((c=fgetc(fd))!=EOF)
	{
		if(c=='\n')
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
	
	fclose(fd);
	return 0;
	
}
