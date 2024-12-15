/*22.-Pedir dos cadenas numéricas al usuario. 
Luego convertirlas a números enteros. Sumar los valores y entregar el resultado.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[5];
	char b[5];
	int valor1,valor2,sum;
	
	printf("Digite dos cadenas de numeros: ");
	gets(a);
	fflush(stdin);
	gets(b);
	
	valor1=atoi(a);
	valor2=atoi(b);
	
	sum=valor1+valor2;
	
	printf("\nEl resultado de la suma es: %i",sum);
	
	return 0;
}
