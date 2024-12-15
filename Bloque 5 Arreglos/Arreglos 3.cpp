/*Hacer 2 arrays de cadena de caracteres, pedir el nombre al usuario guardarlo
dentro de un array y luego, copiar el contenido de ese array a otro.*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20],b[20];
	printf("Ingrese su nombre: ");
	gets(a);
	 
	
	strcpy(b,a);
	printf("Tu nombre es: %s",b);
	
	
	
	return 0;
}
