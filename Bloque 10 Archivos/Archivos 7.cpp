//7.-Utilizar la función fputc() para introducir caracteres en un archivo de texto (.txt).
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]="D:\\prueba\\hola.txt";
	
	fd=fopen(direccion,"wt");
	
	if(fd==NULL)
	{
		printf("Error al crear el archivo");
	}
	
	while((c=getchar())!=EOF)
	{
		fputc(c,fd);
	}
	return 0;
}
