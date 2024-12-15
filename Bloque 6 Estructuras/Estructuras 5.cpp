/*5.-Hacer 2 estructuras una llamada promedio que tendrá los siguientes miembros: 
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros: 
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, 
luego pedir todos los datos para un alumno, 
luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.*/

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
	
}estudiante;

int main()
{
	float prom=0;
	
	printf("\nIngrese su nombre: ");
	gets(estudiante.nombre);
	printf("\nDigite su edad: ");
	scanf("%i",&estudiante.edad);
	fflush(stdin);
	printf("\nDigite su sexo: ");
	gets(estudiante.sexo);
	printf("Ingrese su primera,segunda y tercera nota respectivamente: ");
	scanf("%f %f %f",&estudiante.average.nota1,&estudiante.average.nota2,&estudiante.average.nota3);
	
	prom=(estudiante.average.nota1+estudiante.average.nota2+estudiante.average.nota3)/3;
	
	printf("\n\n-Datos del alumno-\n\n");
	printf("Nombre: %s",estudiante.nombre);
	printf("\nEdad: %i",estudiante.edad);
	printf("\nSexo: %s",estudiante.sexo);
	printf("\nPrimera nota: %.2f",estudiante.average.nota1);
	printf("\nSegunda nota: %.2f",estudiante.average.nota2);
	printf("\nTercera nota: %.2f",estudiante.average.nota3);
	printf("\nPromedio: %.2f",prom);
	printf("\n\n");
	system("pause");
	return 0;
}
