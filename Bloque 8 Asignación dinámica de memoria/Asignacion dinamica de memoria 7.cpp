/*Reservar memoria dinámica para una cadena de caracteres de 10 espacios, 
luego utilizar realloc para ampliar la memoria dinámica a 30 espacios.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *nstring,*pstring;
	
	pstring=(char*)malloc(10*sizeof(char));
	strcpy(pstring,"Gustavo");
	
	printf("Nombre: %s",pstring);
	
	nstring=(char*)realloc(pstring,30*sizeof(char));
	
	strcat(nstring," Alonso Lopez Marroquin");
	
	printf("\n\nNombre: %s",nstring);
	
	return 0;
	
}
