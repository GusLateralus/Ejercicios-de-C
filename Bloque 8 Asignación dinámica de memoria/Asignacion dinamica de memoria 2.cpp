/*2.-Pedir una cadena de caracteres al usuario, 
posteriormente utilizar malloc para reservar memoria para esa cadena de caracteres (string).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char word[20], *p_word;
	int longitud;
	
	printf("Digite una palabra: ");
	gets(word);
	
	longitud=strlen(word);
	
	p_word=(char*)malloc((longitud+1)*sizeof(char));
	strcpy(p_word,word);
	
	printf("La palabra escrita fue: %s",p_word);
	 
	return 0;
}
