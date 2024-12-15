/*8.-Hacer un programa que muestre 3 números ordenados descendentemente, 
utilizar un procedimiento para cada operación.*/
#include <stdio.h>

void descendente(int a,int b,int c);
int a,b,c;
int main()
{
	printf("Digite 3 numeros: ");
	scanf("%i %i %i",&a,&b,&c);
	
	descendente(a,b,c);
	return 0;
	
}

void descendente(int a,int b,int c)
{
	if(a>=b && a>=c)
	{
		if(b>=c)
		{
			printf("%i %i %i",a,b,c);
		}
		else
		{
			printf("%i %i %i",a,c,b);
		}
	}
	
	if(b>=a && b>=c)
	{
		if(a>=c)
		{
			printf("%i %i %i",b,a,c);
		}
		else
		{
			printf("%i %i %i",b,c,a);
		}
	}
	
	if(c>=a && c>=b)
	{
		if(a>=b)
		{
			printf("%i %i %i",c,a,b);
		}
		else
		{
			printf("%i %i %i",c,b,a);
		}
	}
}
