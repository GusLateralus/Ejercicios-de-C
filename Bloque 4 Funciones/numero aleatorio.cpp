#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio();

int main()
{
	aleatorio();
	return 0;
	
}

void aleatorio()
{
	int i,n,li,ls;
	printf("\nDigite el limite inferior: ");
	scanf("%i",&li);
	printf("\nDigite el limite superior: ");
	scanf("%i",&ls);
	srand(time(NULL));
	
	for(i=1;i<=10;i++)
	{
		n=li+rand()%((ls+1)-li);
		printf("%i .\n",n);
	}
	
}
