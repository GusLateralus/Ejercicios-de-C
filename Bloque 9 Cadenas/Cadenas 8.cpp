/*8.-Pedir una cadena al usuario, posteriormente utilizar la funci�n strcat() 
para a�adir la frase "Que tengas un buen d�a", al final de la cadena.*/
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
