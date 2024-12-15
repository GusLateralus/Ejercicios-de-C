/*4.-Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro
de su respectiva variable, y luego intercambiar el contenido de los arrays.*/
#include <stdio.h>
#include <string.h>

int main()
{
	char usuario1[20],usuario2[20],usuario[20];
	printf("Primer usuario, digite su nombre: ");
	gets(usuario1);
	printf("Segundo usuario, digite su nombre: ");
	gets(usuario2);
	
	strcpy(usuario,usuario2);
	strcpy(usuario2,usuario1);
	strcpy(usuario1,usuario);
	
	
	printf("Ahora tu te llamas: %s",usuario1);
	printf("\nY tu eres: %s",usuario2);
	
	return 0;
}
