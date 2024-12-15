//12. Serie Fibonacci: 1 1 2 3 5 8 13...
#include <stdio.h>

int main()
{
	int i,n,x=1,y=0,z=1;
	printf("Digite el total de elementos de la serie: ");
	scanf("%i",&n);
	
	printf("1 ");
	for(i=1;i<n;i++)
	{
		x=y+z;
		y=z;
		z=x;
		printf("%i ",x);
	}
	return 0;
}
