//20.-Pedir al usuario que digite una palabra. Luego mostrar la palabra invertida y comprobar si es capicúa.
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[30];
	char word2[30];
	
	printf("Digite una palabra: ");
	gets(word1);
	
	strcpy(word2,word1);
	
	strrev(word2);
	
	if(strcmp(word1,word2)==0)
	{
		printf("La palabra es capic%ca",163);
	}
	
	else
	{
		printf("La palabra no es capic%ca",163);
	}
	
	return 0;
}
