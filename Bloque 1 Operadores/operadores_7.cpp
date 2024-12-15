/*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
desea saber cuánto deberá pagar finalmente por su compra.*/
#include <stdio.h>

int main()
{
	float a,desc,total;
	printf("Digite el total de su compra: ");
	scanf("%f",&a);
	desc=a*0.15;
	
	total=a-desc;
	printf("El total a pagar es: %f",total);
	return 0;
}
