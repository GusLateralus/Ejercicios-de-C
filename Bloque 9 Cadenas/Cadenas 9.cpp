//9.-Utilizar la función strcmp() para comparar dos palabras
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[]= "Hola";
	char word2[]= "hola";
	
	if (strcmp(word1,word2)==0)
	{
		printf("Ambas cadenas son iguales");
	}
	else
	{
		printf("Las cadenas son distintas");
	}
	
	return 0;
}
