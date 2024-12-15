/*Ingresar por teclado el nombre y el signo de cualquier persona e imprima, 
el nombre solo si la persona es signo Aries, 
caso contrario imprima no es signo Aries.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char nombre[20],signo[20];
	
	printf("Escriba su nombre: ");
	gets(nombre);
	fflush(stdin);
	printf("Escriba su signo: ");
	gets(signo);
	fflush(stdin);
	
	if(((signo=="Aries")||(signo=="ARIES")||(signo=="aries"))==0)
	{
		printf("Usted es signo aries. Su nombre es: %s",nombre);
	}
	else
	{
		printf("No es signo aries");
	}
	return 0;
}
