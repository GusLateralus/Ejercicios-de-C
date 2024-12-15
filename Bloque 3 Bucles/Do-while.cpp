//Saludo con do-while
#include <stdio.h>

int main()
{
	char opc;
	
	do
	{ 
	  
	  printf("Hola");
	  printf("\nTeclee la letra 's' para saludar nuevamente: ");
	  scanf("%c",&opc);
	  fflush(stdin);
	}
	while(opc=='s' || opc=='S');
	return 0;
	
}
