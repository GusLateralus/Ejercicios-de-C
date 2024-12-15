/*Calcular la cantidad
 de segundos que están incluidos en el número de horas, minutos y segundos ingresados por el usuario.*/
#include <stdio.h>

int main()
{
	float seg_total,horas,minutos,segundos,hor_seg,min_seg;
	printf("Digite el total de horas: ");
	scanf("%f",&horas);
	printf("Digite el total de minutos: ");
	scanf("%f",&minutos);
	printf("Digite el total de segundos: ");
	scanf("%f",&segundos);
	
	hor_seg=horas*3600;
	min_seg=minutos*60;
	seg_total=hor_seg+min_seg+segundos;
	printf("La cantidad de segundos contenida es de: %f",seg_total);
	return 0;

}
