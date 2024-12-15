//11.- Suma de factoriales: 1!+2!+3!+...+n!
/*
1.- Pedir al usuario digitar un número entero para saber hasta dónde se hará la suma
2.- Guardarlo
3.-  




*/
#include <stdio.h>

int main()
{
	int i,n,fact=1,sum=0;
	printf("Digite hasta que elemento quiere realizar la suma de factoriales: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		fact *=i;
		sum +=fact;
	}
	printf("La suma de factoriales es igual a: %i",sum);
	return 0;
}
