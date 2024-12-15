/*8.-Pedir una cadena al usuario, posteriormente utilizar la función strcat() 
para añadir la frase "Que tengas un buen día", al final de la cadena.*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[30];
	
	printf("Digite una palabra: ");
	gets(a);
	
	strcat(a," que tengas buen dia");
	
	printf("%s",a);
	
	return 0;
}
