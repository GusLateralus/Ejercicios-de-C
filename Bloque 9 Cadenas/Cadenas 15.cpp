//15.-Convertir dos cadena de minúsculas a MAYUSCULAS con la función strupr(). Compararlas, y decir si son iguales.
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[]="hola";
	char word2[]="hola";
	
	strupr(word1);
	strupr(word2);
	
	if(strcmp(word1,word2)==0)
	{
		printf("Las palabras son iguales");
	}
	
	else
	{
		printf("Palabras diferentes");
	}
	
	return 0;
}
