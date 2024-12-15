//6.- Suma de pares, desde n hasta m
#include <stdio.h>

int main()
{
	int n,m,sum=0;
	printf("Digite desde donde empezaremos la suma de pares: ");
	scanf("%i",&n);
	printf("Digite hasta donde terminaremos la suma de pares: ");
	scanf("%i",&m);
	
	while(n<=m)
	{
		if(n%2==0)
		{
			sum += n;
		}
		n++;
	}
	printf("El resultado de la suma de pares es: %i",sum);
	return 0;
}

