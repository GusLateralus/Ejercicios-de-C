//1.-Crea una lista simplemente enlazada de 3 números flotantes, pidiéndole al usuario dichos números.
#include<stdio.h>
#include<stdlib.h>
 
typedef struct{
    char dato;
    struct Nodo *siguiente;
} Nodo;
 
Nodo *primer = NULL;
Nodo *ultimo = NULL;
 
void Agregar(Nodo *nodo);
 
int main(){
    char c1,c2,c3;
 
    printf("Digite 3 caracteres: ");
    scanf("%c %c %c",&c1,&c2,&c3);
 
    Nodo *primerNodo = malloc(sizeof(Nodo));
    primerNodo -> dato = c1;
 
    Nodo *segundoNodo = malloc(sizeof(Nodo));
    segundoNodo -> dato = c2;
 
    Nodo *tercerNodo = malloc(sizeof(Nodo));
    tercerNodo -> dato = c3;
 
    Agregar(primerNodo);
    Agregar(segundoNodo);
    Agregar(tercerNodo);
 
 
    //Recorriendo Nodos
    Nodo *i = primerNodo;
 
    while (i != NULL){
        printf("%c\n",i->dato);
        i = i -> siguiente;
    }
 
    return 0;
}
 
void Agregar(Nodo *nodo){
    nodo -> siguiente = NULL;
 
    if (primer == NULL){
        primer = nodo;
        ultimo = nodo;
    }
    else {
        ultimo -> siguiente = nodo;
        ultimo = nodo;
    }
}
