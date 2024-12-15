/*Calcular el nuevo salario de un obrero, si obtuvo un incremento del 25% sobre su salario anterior.*/
#include <stdio.h>

int main()
{
	float salario,incremento,nuevo; 
	printf("Digite su salario: ");
	scanf("%f",&salario);
	
	incremento=salario*0.25;
	nuevo=salario+incremento;
	printf("Su nuevo salario es de: %f",nuevo);
	return 0;
}
