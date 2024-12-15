/*6.-Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres. 
Y por ultimo modificar su mensaje poniendo a partir de la posición 10 "Buena broma"*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[30];
	char b[30];
	
	printf("Digite alguna palabra: ");
	gets(a);
	
	strcpy(b,a);
	strcpy(b+10,"Buena broma");
	
	printf("%s",b);
	
	return 0;
}
