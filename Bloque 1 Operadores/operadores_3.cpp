//Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los 2 catetos.
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c;
	printf("Digite el valor de los catetos del triangulo: ");
	scanf("%f %f",&a,&b);
	
	a=sqrt(pow(a,2)+pow(b,2));
	printf("El valor de la hipotenusa es: %f",a);
	return 0;
	
}
