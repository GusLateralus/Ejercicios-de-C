/*3.-Realizar un programa en C que lea 
un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos
del empleado con mayor y menor salario*/
#include <stdio.h>
#include <stdlib.h>

struct empleado
{
	char nombre[20];
	char sexo[20];
	int salario;
	
}empleados[100];


int main()
{
	int n,i,pmay,pmen,mayor=0,menor=999999;
	
	printf("Digite el total de empleados: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n%i. Digite su nombre: ",i+1);
		gets(empleados[i].nombre);
		printf("\n%i. Digite su sexo: ",i+1);
		gets(empleados[i].sexo);
		printf("\n%i. Digite su salario: ",i+1);
		scanf("%i",&empleados[i].salario);
	}
	
	for(i=0;i<n;i++)
	{
		if(empleados[i].salario>mayor)
		{
			mayor=empleados[i].salario;
			pmay=i;
		}
		
		if(empleados[i].salario<menor)
		{
			menor=empleados[i].salario;
			pmen=i;
		}
	}
	
	printf("\n-Empleado con mayor salario-\n");
	printf("Nombre: %s",empleados[pmay].nombre);
	printf("\nSexo: %s",empleados[pmay].sexo);
	printf("\nSalario: %i",mayor);
	printf("\n\n");
	
	printf("\n-Empleado con menor salario-\n");
	printf("Nombre: %s",empleados[pmen].nombre);
	printf("\nSexo: %s",empleados[pmen].sexo);
	printf("\nSalario: %i",menor);
	printf("\n");
	
	system("pause");
	return 0;
}
