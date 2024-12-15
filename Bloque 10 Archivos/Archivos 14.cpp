/*14.-Crear un programa en C, que pueda seguir agregando contactos de email, 
hacia el archivo que creamos en el problema 13.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fd;

struct personas
{
	char nombre[30];
	char apellidos[30];
	char email[30];
}datos;

int main()
{
	char direccion[]= "C:\\Users\\Oscar-PC\\Desktop\\emails.txt";
	char rpt;
	
	fd=fopen(direccion,"at");
	
	if(fd==NULL)
	{
		printf("Error al tratar de procesar el archivo");
		return 1;
	}
	
	do{	
		fflush(stdin);
		printf("\nNombre: "); gets(datos.nombre);
		printf("Apellidos: "); gets(datos.apellidos);
		printf("Email: "); gets(datos.email);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nEmail: ");
		fwrite(datos.email,1,strlen(datos.email),fd);
		printf("Pulse la tecla s para continuar agregando");
		scanf("%c",&rpt);
    }while(rpt=='s');
    
    fclose(fd);
    return 0;

}
