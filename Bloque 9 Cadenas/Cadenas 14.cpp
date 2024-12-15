//14.-Pedir una cadena al usuario y luego invertirla. diciendo además cuantos caracteres tiene.
#include <stdio.h>
#include <string.h>

int main()
{
	char word[30];
	
	printf("Digite una palabra: ");
	gets(word);
	strrev(word);
	
	printf("\nPalabra invertida: %s",word);
	printf("\nNo. de caracteres: %i",strlen(word));
	
	return 0;
}
