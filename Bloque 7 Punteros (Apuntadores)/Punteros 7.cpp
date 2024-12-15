//7.-Pedir su nombre al usuario y devolver el número de vocales que hay.

#include <stdio.h>

int vocales(char *);

int main()
{
	char name[20];
	
	printf("Digite su nombre: ");
	gets(name);
	
	printf("El numero de vocales es: %i",vocales(name));
	
	
	return 0;
}

//G
int vocales(char *s)
{
	int cont=0;
	
	while(*s) //Mientras que s no sea nulo
	{
		switch(*s)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': 
			cont++;
			
		}
		s++;
	}
	
	return cont;
	
}
