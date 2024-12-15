/*8.-Pedir una cadena de caracteres (string) al usuario, 
e indicar cuantas veces aparece la vocal a, e, i, o, u; en la cadena de caracteres.*/
#include <stdio.h>

int conta(char *);
int conte(char *);
int conti(char *);
int conto(char *);
int contu(char *);

int main()
{
	char word[20];
	
	printf("Digite una palabra: ");
	gets(word);
	
	printf("\nTotal de veces que aparece 'a': %i",conta(word));
	printf("\nTotal de veces que aparece 'e': %i",conte(word));
	printf("\nTotal de veces que aparece 'i': %i",conti(word));
	printf("\nTotal de veces que aparece 'o': %i",conto(word));
	printf("\nTotal de veces que aparece 'u': %i",contu(word));
	
	return 0;
}

int conta(char *s)
{
	int a=0;
	
	while(*s)
	{
		switch(*s)
		{
			case 'a': a++;
		}
		s++;
	}
	
	return a;
}

int conte(char *s)
{
	int e=0;
	
	while(*s)
	{
		switch(*s)
		{
			case 'e': e++;
			
		}
		s++;
	}
	
	return e;
}

int conti(char *s)
{
	int i=0;
	
	while(*s)
	{
		switch(*s)
		{
			case 'i': i++;
		}
		s++;
	}
	
	return i;
}

int conto(char *s)
{
	int o=0;
	
	while(*s)
	{
		switch(*s)
		{
			case 'o': o++;
		}
		s++;
	}
	
	return o;
}

int contu(char *s)
{
	int u=0;
	
	while(*s)
	{
		switch(*s)
		{
			case 'u': u++;
		}
		s++;
	}
	
	return u;
}
