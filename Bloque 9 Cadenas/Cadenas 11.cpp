//11.-Pedir 2 palabras al usuario y ordenarlas alfabéticamente.
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[20],word2[20];
	
	printf("Digite 2 palabras por aparte: ");
	gets(word1);
	gets(word2);
	
	printf("\n\n");
	
	if(strcmp(word1,word2)>0)
	{
		printf("%s\n%s",word2,word1);
	}
	
	else
	{
		printf("%s\n%s",word1,word2);
	}
	
	return 0;
}
