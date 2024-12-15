#include <stdio.h>

int main()
{
	int n,r,fila,sp,ncr;
	printf("Ingrese el numero de filas: ");
	scanf("%i",&fila);
	
	printf("\n");
	
	for(n=0;n<fila;n++)
	{
		for(sp=1;sp<fila-n;sp++)
		{
			printf(" ");
			
			//if(sp==5)
			
		}
		
		for(r=0;r<=n;r++)
		{
			if(n==0||r==0)
			{
				ncr=1;
				printf("%i ",ncr);
			}
			else
			{
				ncr=ncr*(n-r+1)/r;
				printf("%i ",ncr);
			}
		}
		printf("\n");
	}
	
	return 0;
}
