//1.-Utilizar malloc para reservar memoria para un nombre (string)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[20], *p_name;
	int longitud;
	
	strcpy(name,"Gustavo"); //Todo nombre tiene final de cadena (\0), y equivale a una posición más de memoria
	
	longitud=strlen(name);
	
	p_name= (char*)malloc((longitud+1)*sizeof(char));
	
	strcpy(p_name,name);
	
	printf("Nombre: %s",p_name);
	
	return 0;
}
