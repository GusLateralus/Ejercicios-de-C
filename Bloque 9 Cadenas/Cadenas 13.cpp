//13.-Invertir una cadena con la función strrev().
#include <stdio.h>
#include <string.h>

int main()
{
	char name[]="Gustavo";
	
	strrev(name);
	
	printf("Palabra invertida: %s",name);
	
	return 0;
}
