/*4.-Hacer un arreglo de estructura llamada atleta para N atletas que contenga 
los siguientes miembros: nombre, país, numero_medallas. y devuelva los datos
(Nombre, país) del atleta que ha ganado el mayor número de medallas.*/

#include <stdio.h>
#include <stdlib.h>

struct atleta
{
	char nombre[20];
	char pais[20];
	int nmedallas;
	
}atletas[100];

int main()
{
	int n,i,mmedallas=0,pmay;
	
	printf("Digite el numero de atletas de la competencia: ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n%i. Digite su nombre: ",i+1);
		gets(atletas[i].nombre);
		printf("\n%i. Digite el nombre de su pa%cs: ",i+1,161);
		gets(atletas[i].pais);
		printf("\n%i. Digite el numero de medallas que ha ganado: ",i+1);
		scanf("%i",&atletas[i].nmedallas);
	}
	
	for(i=0;i<n;i++)
	{
		if(atletas[i].nmedallas>mmedallas)
		{
			mmedallas=atletas[i].nmedallas;
			pmay=i;
		}
	}
	
	printf("\n-Atleta con m%cs medallas-\n",160);
	printf("\nNombre: %s",atletas[pmay].nombre);
	printf("\nPa%cs: %s",161,atletas[pmay].pais);
	printf("\n");
	
	system("pause");
	return 0;
}

