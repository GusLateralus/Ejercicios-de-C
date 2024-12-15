/*5.-Realice un programa que lea en un array el sexo de los N estudiantes del curso de Algoritmos 
y que determine cuantos hombres y cuantas mujeres se encuentran en el grupo, 
suponiendo que los datos son extraídos alumno por alumno.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int i,n,hombre,mujer;
	char alumno[30];
	
	printf("Digite el total de estudiantes en la clase: ");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		fflush(stdin);
		printf("\n%i. Digite su genero, si es hombre debe teclear h, si es mujer debe teclear m: ",i);
		gets(alumno);
		
		
		if(strcmp(alumno,"h")==0)
		{
			hombre++;
		}
		else if(strcmp(alumno,"m")==0)
		{
			mujer++;
		}
	}
	printf("\nTotal de mujeres: %i",mujer);
	printf("\nTotal de hombres: %i",hombre);
	
	return 0;
}
