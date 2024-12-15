//Ordenamiento por inserci�n

#include <stdio.h>
#include <conio.h>

int main()
{
	int a[5]= {5,3,4,1,2}; //Declaramos un arreglo con estos elementos
	int pos,aux,i;//Ocuparemos estas variables
	
	for(i=0;i<5;i++)//Entramos a un bucle, que ir� desde la posici�n 0 hasta la posici�n 4 (inicio y fin)
	{
		pos=i; //A la posici�n se le asigna el valor del iterador, o sea 0
		aux= a[i]; //Y en la variable auxiliar, guardaremos el valor exacto de esa posici�n
		while((pos>0)&&(aux < a[pos-1])) //Si se cumple que el n�mero es diferente de la posici�n inicial y que adem�s, el n�mero actual es menor que el de la izquierda, entonces se ejecuta
		{
			a[pos]=a[pos-1]; //se hace el intercambio 
			pos--; //y la posici�n decrementa
		}
		a[pos]=aux; //Se le asigna el valor de la variable auxiliar
	}
	
	printf("\nAscendente:\n ");
	
	for(i=0;i<5;i++)
	{
		printf(" %i ",a[i]);
	}
	
	printf("\nDescendente:\n ");
	
	for(i=4;i>=0;i--)
	{
		printf(" %i ",a[i]);
	}
	
	getch();
	return 0;
}
