//10.-Tomar el archivo de texto creado en el problema 8. y leer todo su contenido.
#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main()
{
	int c;
	char direccion[]="C:\\Users\\Oscar-PC\\Desktop\\hola mundo.txt";
	
	fd=fopen(direccion,"rt");
	
	if(fd==NULL)
	{
		printf("Error al tratar de leer el archivo");
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
