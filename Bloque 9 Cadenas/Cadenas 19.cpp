//19.-Determinar si una palabra es capicúa (palíndroma) o no.
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[]="reconocer";
	char word2[30];
	
	strcpy(word2,word1);
	
	if(strcmp(word1,word2)==0)
	{
		printf("La palabra es capic%ca",163);
	}
	
	else
	{
		printf("La palabra no es capic%a",163);
	}
	
	return 0;

}
