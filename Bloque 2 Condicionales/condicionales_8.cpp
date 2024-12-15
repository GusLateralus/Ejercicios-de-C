/*8. Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, 
solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.*/
#include <stdio.h>

int main()
{
    int edad;
    char name[50];
    char genre[50];

    printf("Ingresa tu nombre: ");
    gets(name);
    fflush(stdin);
    printf("Ingresa tu edad: ");
    scanf("%i",&edad);
    printf("De que sexo eres?: ");
    gets(genre);
    fflush(stdin);

    if(((genre=="MASCULINO")||(genre=="masculino"))&& edad>=18)
    {
        puts(name);
        printf("Acceso autorizado");
    }
    else
    {
        printf("No cumples con las condiciones");
    }
    return 0;
}

