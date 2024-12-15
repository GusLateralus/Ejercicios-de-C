//Operadores y expresiones
//Pedir 2 números al usuario, sumarlos, restarlos, multiplicarlos y dividirlos
#include <stdio.h>

int main()
{
	float a,b,sum,rest,mult,div;
	printf("Digite dos numeros enteros: ");
	scanf("%f %f",&a,&b);
	
	sum=a+b;
	rest=a-b;
	mult=a*b;
	div=a/b;
	
	printf("\nLa suma total es: %.2f",sum);
	printf("\nLa resta total es: %.2f",rest);
	printf("\nEl producto es: %.2f",mult);
	printf("\nEl cociente es: %.2f",div);
	
	return 0;
	
}
