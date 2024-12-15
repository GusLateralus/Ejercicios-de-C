/*Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario e imprimirlo.*/
#include <stdio.h>

int main()
{
	float horas_val,horas,salario;
	printf("Digite el numero de horas trabajadas: ");
	scanf("%f",&horas);
	printf("Digite el salario por hora: ");
	scanf("%f",&horas_val);
	
	salario=horas*horas_val;
	printf("Su salario es de: %f",salario);
	return 0;
	
}
