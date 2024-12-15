/*12.-Crear un archivo de texto, ponerle el texto que deseas, 
y luego crear un programa en C para agregarle más texto al archivo.*/
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]="C:\\Users\\Oscar-PC\\Desktop\\hola.txt";
	
	fd=fopen(direccion,"at");
	
	if(fd==NULL)
	{
		printf("Error en el archivo");
		return 1;
	}
	
	while((c=getchar())!=EOF)
	{
		fputc(c,fd);
	}
	
	fclose(fd);
	return 0;
}
