#include <stdio.h>

int main()
{
	int primo[100];
	int z,x,count=0,n,dato=1;
	
	printf("Digite el total de numeros primos a mostrar: ");
	scanf("%i",&n);
	
	for(x=0;x<n;x++)
	{
		primo[x]=dato++;
	}
	
	for(x=0;x<n;x++)
	{
		for(z=1;z<=x;z++)
		{
			if(x%z==0)
			{
				dato++;
			}
			
			if(dato==2)
			{
				
			}
		}
	}
	

	
	
}
