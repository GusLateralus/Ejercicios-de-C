/*6.-Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un número cualquiera 
por pantalla, 
el número se pedirá en el programa principal. 
Usar procedimiento.*/
#include <stdio.h>

int i=1,n,mult=0;
void tabla();

int main()
{
	printf("Digite un numero entero: ");
	scanf("%i",&n);
	tabla();
	
	return 0;
}

void tabla()
{
	while(i<=20)
	{
		mult=n*i;
		printf("\n%i*%i=%i",n,i,mult);
		i++;
	}
}
