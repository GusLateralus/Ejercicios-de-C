//5. Sumar 1-2+3-4...n
#include <stdio.h>

int main()
{
	int n,i=1,sum_pares=0,sum_impares=0,sum=0,ne;
	printf("Digite el numero de elementos a sumar: ");
	scanf("%i",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			ne=i*(-1);
			sum_pares += ne;
		}
		else
		{
			sum_impares += i;
			
		}
		i++;
	}
	sum=sum_impares+sum_pares;
	printf("El resultado es: %i",sum);
	return 0;
}
