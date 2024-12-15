//18.-Pedir el nombre de 3 familiares al usuario (en MAYUSCULAS), y posteriormente convertir los datos a minúsculas.
#include <stdio.h>
#include <string.h>

struct usuario
{
	char name[30];
}usuarios[3];

int main()
{
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\n%i. Ingrese su nombre (en MAYUSCULAS): ",i+1);
		gets(usuarios[i].name);
		strlwr(usuarios[i].name);
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n%i. Nombre: %s",i+1,usuarios[i].name);
		
	}
	
	return 0;
}
