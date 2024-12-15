//9.- Sumar 2 matrices

#include <stdio.h>
#include <conio.h>

void sumar(int A[2][2],int B[2][2]);
int main()
{
	int A[2][2]= {{1,2},{3,4}};
	int B[2][2]= {{5,6},{7,8}};
	
	sumar(A,B);
	getch();
	return 0;
}

void sumar(int A[2][2],int B[2][2])
{
	int i,j,suma[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			suma[i][j]= A[i][j]+B[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %i ",suma[i][j]);
		}
		printf("\n");
	}
}
