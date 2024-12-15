//6.-Hacer un programa en C, que cree 2 archivos de texto (.txt), y luego utilizar la función fclose() para cerrarlos.
#include <stdio.h>
#include <stdlib.h>

FILE *fd1,*fd2;

int main()
{
	char d1[50],d2[50];
	
	printf("Ingrese una direcci%cn: ",162);
	gets(d1);
	printf("\nIngrese otra direcci%cn: ",162);
	gets(d2);
	
	fd1=fopen(d1,"w");
	fd2=fopen(d2,"w");
	
	if(fd1==NULL || fd2==NULL)
	{
		printf("No se pudieron comprobar los archivos");
	}
	
	else
	{
		printf("S%c se pudieron comprobar los archivos",161);
    }
    
    fclose(fd1);
    fclose(fd2);
    
    return 0;
}
