/*4.-Determinar si un número es primo o no; 
con puteros y además indicar en que posición de memoria se guardó el número.*/
#include <stdio.h>

int main()
{
	int i,num,*p_num,cont=0;
	
	printf("Digite un numero: ");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			p_num=&num;
			cont++;
		}
	}
	
	if(cont>2)
	{
		printf("El numero no es primo. Su posicion es: %p",p_num);
	}
	
	else
	{
		printf("El numero es primo. Su posicion es: %p",p_num);
	}
	
	return 0;
}
