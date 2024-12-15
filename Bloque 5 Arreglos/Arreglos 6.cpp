/*6.-Realice un programa que permita leer una cadena de caracteres 
y que devuelva el número de caracteres que tiene dicha cadena e imprimir dicha cadena al revés.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	char a[50];
	int i=0;
	
	printf("Ingrese una palabra: ");
	gets(a);
	
	while(a[i] !='\0')
	{
		i++;
	}
	
	printf("\n La palabra tiene %i letras",i);
	
	printf("\n La palabra escrita al reves seria: ");
	while(i>=0)
	{
		printf("%c",a[i--]);
		
	}
	
	return 0;
	getch();
}
