/*8.-Crear un archivo de texto (.txt) con el nombre de "hola mundo" en la carpeta que elijas, 
y dentro del archivo copiar "Hola y Bienvenidos al Lenguaje de Programación C".*/
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]= "C:\\Users\\Oscar-PC\\Desktop\\hola mundo.txt";
	
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
