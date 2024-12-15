/*6.-Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, 
y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.*/

#include <stdio.h>
#include <stdlib.h>

struct promedio
{
	float nota1,nota2,nota3;
};

struct alumno
{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio average;
	
}estudiantes[100];

int main()
{
	int i,n,pos;
	float prom[100],best=0;
	
	printf("Digite el numero de estudiantes: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
	fflush(stdin);
	printf("\n%i. Ingrese su nombre: ",i+1);
	gets(estudiantes[i].nombre);
	printf("\n%i. Digite su edad: ",i+1);
	scanf("%i",&estudiantes[i].edad);
	fflush(stdin);
	printf("\n%i. Digite su sexo: ",i+1);
	gets(estudiantes[i].sexo);
	printf("\n%i. Ingrese su primera,segunda y tercera nota respectivamente: ",i+1);
	scanf("%f %f %f",&estudiantes[i].average.nota1,&estudiantes[i].average.nota2,&estudiantes[i].average.nota3);
	
	prom[i]=(estudiantes[i].average.nota1+estudiantes[i].average.nota2+estudiantes[i].average.nota3)/3;
    }
    
    for(i=0;i<n;i++)
    {
    	if(prom[i]>best)
    	{
    		best=prom[i];
    		pos=i;
		}
    	
	}
	
	
	printf("\n\n-Datos del alumno-\n\n");
	printf("Nombre: %s",estudiantes[pos].nombre);
	printf("\nEdad: %i",estudiantes[pos].edad);
	printf("\nSexo: %s",estudiantes[pos].sexo);
	printf("\nPrimera nota: %.2f",estudiantes[pos].average.nota1);
	printf("\nSegunda nota: %.2f",estudiantes[pos].average.nota2);
	printf("\nTercera nota: %.2f",estudiantes[pos].average.nota3);
	printf("\nPromedio: %.2f",best);
	printf("\n\n");
	system("pause");
	return 0;
}
