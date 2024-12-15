/*15.-Hacer un programa en C. Para guardar direcciones de correo que muestre un menú con las siguientes opciones:
1. Crear (nombre, apellidos, email)
2. Agregar más contactos (nombre, apellidos, email)
3. Visualizar contactos existentes*/
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

void crear()
{
	char direccion[]="C:\\Users\\Oscar-PC\\Desktop\\emails.txt";
	char ans;
	
	fd=fopen(direccion,"wt");
	
	if(fd==NULL)
	{
		printf("Error al tratar de crear el archivo");
		exit(-1);
	}
	
	printf("\t.:EMAIL DE AMIGOS:.");
	fprintf(fd,"\t.:EMAIL DE AMIGOS:.");
	
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
		printf("Pulse (s) si desea guardar mas datos: ");
		scanf("%c",&ans);
	} while(ans=='s');
	
	fclose(fd);
	
}

void agregar()
{
	char direccion[]= "C:\\Users\\Oscar-PC\\Desktop\\emails.txt";
	char ans;
	
	fd=fopen(direccion,"at");
	
	if(fd==NULL)
	{
		printf("Error al tratar de procesar el archivo");
		exit (-1);
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
		scanf("%c",&ans);
    }while(ans=='s');
    
    fclose(fd);	
}

void visualizar()
{
	int c;
	char direccion[]= "C:\\Users\\Oscar-PC\\Desktop\\emails.txt";
	
	fd=fopen(direccion,"rt");
	
	if(fd==NULL)
	{
		printf("Error al tratar de leer el archivo");
		exit(-1);
	}
	
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			printf("\n");
		}
		
		else
		{
			putchar(c);
		}
			
	}
	
	fclose(fd);
}

int main()
{
	int opc;
	
	do{
		printf("\t-B I E N V E N I D O-");
		printf("\n1.-Crear");
		printf("\n2.-Agregar m%cs contactos",160);
		printf("\n3.-Visualizar contactos existentes");
		
		switch(opc)
		{
			case 1: crear();break;
			case 2: agregar();break;
			case 3: visualizar();break;
		}
	}while(opc!=4);
	
	fclose(fd);
	return 0;
}


