//9.- Determinar si un número es primo o no
#include <stdio.h>

int main()
{
	int n,i,cont=0;
	printf("Digite un numero a evaluar: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cont++;
		}
	}
	
	(cont>2) ? printf("El numero es compuesto"): printf("El numero es primo");
	return 0;
}
