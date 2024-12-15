//15. Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.
#include <stdio.h>


int main()
{
	int opc;
	float saldo=1000,retiro,deposito;
	
	printf("\tBienvenido");
	printf("\n1.-Depositar");
	printf("\n2.-Retirar");
	printf("\n3.-Salir");
	printf("\nDigite alguna de las opciones: ");
	scanf("%i",&opc);
	
	switch(opc)
	{
		case 1: printf("Digite el monto a depositar: ");
		        scanf("%f",&deposito);
		        saldo +=deposito;
		        printf("Deposito realizado. Ahora su saldo es de :%.2f",saldo);
		break;
		case 2: printf("Digite la cantidad a retirar: ");
		        scanf("%f",&retiro);
		        if(retiro>saldo)
		        {
		        	while(1)
		        	{
		        		printf("La cantidad solicitada es mayor al saldo actual. Intente de nuevo: ");
		        		scanf("%f",&retiro);
		        		break;
					}
					saldo -=retiro;
					printf("Retiro realizado con exito. El saldo actual es de: %.2f",saldo);	
				}
				else
				{
					saldo -=retiro;
					printf("Retiro realizado con exito. El saldo actual es de: %.2f",saldo);
				}
		break;
		case 3: 
		        printf("Hasta luego");
		break;
	}
	return 0;
}
