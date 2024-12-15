//9.-Reservar memoria con calloc paara una cadena de caracteres
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *pnombre,palabra[50];
	
	printf("Digite una palabra: ");
	gets(palabra);
	
	pnombre=(char*)calloc(strlen(palabra)+1,sizeof(char));
	strcpy(pnombre,palabra);
	
	printf("\n\n");
	printf("%s",pnombre);
	
	free(pnombre);
	
	return 0;
}
