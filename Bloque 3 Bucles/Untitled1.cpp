#include <stdio.h>

int main()
{
	int i,x=1,y=1,z=0,n=0;
	
	printf("Digite el total de terminos para la serie: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf(" %i ",z);
	}
	
	return 0;
}
