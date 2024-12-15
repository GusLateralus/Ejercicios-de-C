//5.-Abrir 2 archivos de texto (.txt), después cerrar cada uno de ellos con fclose().

#include <stdio.h>
#include <stdlib.h>
FILE *fd1,*fd2;

int main()
{
	fd1=fopen("D:\\prueba\\archivo1.txt","a+");
	fd2=fopen("D:\\prueba\\archivo2.txt","a+");
	
	if(fd1==NULL || fd2==NULL)
	{
		printf("No se ha podido comprobar los archivos");
	}
	else
	{
		printf("Si se pudieron comprobar los archivos");
	}
	
	fclose(fd1);
	fclose(fd2);
	
	return 0;
	
}
