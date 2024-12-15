//7.-Utilizar la función strcat() para añadir un texto a un string.
#include <stdio.h>
#include <string.h>

int main()
{
	char cad[]= "Hola que tal?";
	strcat(cad," Mi nombre es Gustavo");
	
	printf("%s",cad);
	return 0;
}
