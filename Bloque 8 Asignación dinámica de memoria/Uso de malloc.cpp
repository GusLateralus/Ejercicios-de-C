//1.-Utilizar malloc para reservar memoria para un nombre (string)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[20], *p_name;
	int longitud;
	
	strcpy(name,"Gustavo"); 
	
	longitud=strlen(name);
	printf("%s",name);
	
	return 0;
}
