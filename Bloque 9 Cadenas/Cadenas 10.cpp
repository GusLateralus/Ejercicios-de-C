//10.-Pedir 2 nombres al usuario y comparar si son iguales o no.
#include <stdio.h>
#include <string.h>

int main()
{
	char name1[30],name2[30];
	
	printf("Digite 2 nombres: ");
	gets(name1);
	gets(name2);
	
	if(strcmp(name1,name2)==0)
	{
		printf("Los nombres son iguales");
	}
	
	else
	{
		printf("Los nombres son distintos");
	}
	
	return 0;
}
