/*2.-Hacer una estructura llamada alumno, en la cual se tendrán 
los siguientes miembros: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include <stdio.h>
#include <stdlib.h>

struct alumno
{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main()
{
	int i,pos;
	float best=0.0;
	
	for(i=0;i<3;i++)
	{
		fflush(stdin);
		printf("\n%i. Digite su nombre: ",i+1);
		gets(alumnos[i].nombre);
		printf("\n%i. Digite su edad: ",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("\n%i. Digite su promedio: ",i+1);
		scanf("%f",&alumnos[i].promedio);
	}
	
	for(i=0;i<3;i++)
	{
		if(alumnos[i].promedio>best)
		{
			best=alumnos[i].promedio;
			pos=i;
		}
	}
	
	printf("\n-Cuadro de Honor-\n");
	printf("\nNombre: %s",alumnos[pos].nombre);
	printf("\nEdad: %i",alumnos[pos].edad);
	printf("\nPromedio: %f",best);
	printf("\n");
	
	system("pause");
	return 0;
}
