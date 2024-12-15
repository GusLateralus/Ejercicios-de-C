#include<stdio.h>

int main(){
	int numero,suma, mult,i;
	
	printf("Digite un numero: ");scanf("%i",&numero);
		
	i = 1;
	if(numero>10){
		while(i<=10){
			mult=mult*i;
			i++;
		}
		printf("\n La multiplicacion es: %i",mult);
	}
	else{
		while(i<=10){
			suma=suma+i;
			i++;
		}
		printf("\n La suma es: %i",suma);
	}
	
	return 0;
}


