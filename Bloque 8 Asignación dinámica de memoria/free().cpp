//free(puntero);
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1;
	 p1=(int*)malloc(sizeof(int));
	 
	 if(p1==NULL)
	 {
	 	printf("No hay espacio en memoria.");
	 	return -1;
	 }
	 
	 else
	 {
	 	printf("Hay espacio en memoria.");
	 	*p1=15;
	 	printf("\n%i",*p1);
	 }
	
	free(p1);
	printf("\n%i",*p1);
	
	return 0;
}
