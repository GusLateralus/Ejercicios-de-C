// Crea un arreglo de 6 elementos con números aleatorios que vayan del 1 al 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int li=1,ls=1000,i,numero[6];
	srand(time(NULL));
	
	for(i=0;i<6;i++)
	{
		numero[i] =li+rand()%((ls+1)-li);
	}
	
	for(i=0;i<6;i++)
	{
		printf("\n%i",numero[i]);
	}
}


