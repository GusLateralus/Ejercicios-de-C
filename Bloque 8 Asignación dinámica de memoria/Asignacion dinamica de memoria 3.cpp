/*3.-Reservar memoria con malloc para un array de tipo double para 1000 números, 
y comprobar si el puntero es válido 
(si el puntero devuelve NULL, significa que no hay suficiente memoria).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOPE 1000

int main()
{
	double *p_array;
	int i;
	p_array=(double *)malloc(TOPE*sizeof(double));
	
	if(p_array==NULL)
	{
		printf("Error en la asignacion de memoria");
		return -1;
	 } 
	 
	 else
	 {
	 	srand(time(NULL));
	 	
	 	for(i=0;i<TOPE;i++)
	 	{
	 		p_array[i]=1+rand()%((TOPE+1)-1);
	 		printf("\n%.2lf",p_array[i]);
		 }
	 }
	 
	return 0;
}
