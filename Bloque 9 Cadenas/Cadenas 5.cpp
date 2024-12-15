/*5.-Copiar la cadena de caracteres "Hola mundo" de un array a otro. 
Luego cambiar la palabra "mundo" por "y bienvenido al lenguaje C".*/

#include <stdio.h>
#include <string.h>

int main()
{
	char a[30],b[30];
	
	printf("Ingrese la palabra 'Hola mundo': ");
	gets(a);
	
	strcpy(b,a);
	strcpy(b+5,"y bienvenido al lenguaje C");
	
	printf("%s",b);
	
	
	return 0;
	
	
}
