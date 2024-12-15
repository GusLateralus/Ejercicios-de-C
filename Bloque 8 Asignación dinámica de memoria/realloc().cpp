//Función realloc ()
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *vector,*vector_convertido;
	int i;
	
	vector=(int*)malloc(3*sizeof(int));
	
	vector[0]=1;
	vector[1]=2;
	vector[2]=3;
	
	for(i=0;i<3;i++)
	{
		printf(" %i ",vector[i]);
	}
	
	vector_convertido=(int*)realloc(vector,5*sizeof(int));
	
	vector[3]=4;
	vector[4]=5;
	
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf(" %i ",vector_convertido[i]);
	}
	
	free(vector_convertido);
	
	return 0;
}
