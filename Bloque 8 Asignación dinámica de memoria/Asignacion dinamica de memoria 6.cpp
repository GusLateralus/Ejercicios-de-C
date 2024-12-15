/*6.-Pedir al usuario una cadena de caracteres, reservar memoria con malloc(), almacenarlo en la memoria dinámica, 
posteriormente utilizar free() para liberar el espacio de memoria dinámica utilizado.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char word[20],*p_word;
	int longitud;
	
	printf("Digite una palabra: ");
	gets(word);
	
	longitud=strlen(word);
	p_word=(char*)malloc((longitud+1)*sizeof(char));
	
	strcpy(p_word,word);
	printf("La palabra digitada fue: %s",p_word);
	
	free(p_word);
	
	printf("\nY con la memoria liberada: %s",p_word);
	
	return 0;
}
