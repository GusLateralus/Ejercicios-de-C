/*Un alumno desea saber cu�l ser� su calificaci�n final en la materia de Algoritmos. Dicha calificaci�n se compone de los siguientes porcentajes:
� 55% del promedio de sus tres calificaciones parciales.
� 30% de la calificaci�n del examen final.
� 15% de la calificaci�n de un trabajo final.*/
#include <stdio.h>

int main()
{
	float a,b,c,prom,exam,exam_prom,work,final,final_prom,calificacion; 
	printf("Digite sus tres calificaciones parciales: ");
	scanf("%f %f %f",&a,&b,&c);
	prom=(((a+b+c)/3)*0.55);
	printf("Digite su calificacion del examen final: ");
	scanf("%f",&exam);
	exam_prom=exam*0.3;
	printf("Digite la calificacion que obtuvo en su trabajo final: ");
	scanf("%f",&final);
	final_prom=final*0.15;
	
	calificacion=prom+exam_prom+final_prom;
	printf("Su promedio en la materia de algoritmos es: %f",calificacion);
	return 0;
	
	
	
}
