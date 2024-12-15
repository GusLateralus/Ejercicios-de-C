/*5.-Dado un vector de 10 elementos = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un 
programa en C (haciendo uso de puntero) que muestre las direcciones 
de memoria de cada elemento del vector.*/

#include <stdio.h>

int main()
{
	int a[]={1,2,3,4,4,7,8,9,5,4};
	int i,*p_a;
	
	p_a=a;
	
	for(i=0;i<10;i++)
	{
		printf("Dato a[%i]: %i",i,p_a);
		printf("\nPosicion: %p",p_a);
		printf("\n\n");
		p_a++;
	}
	
	return 0;
}
