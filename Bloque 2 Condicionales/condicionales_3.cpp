/*Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
Para un gasto menor de 1.000Kwxh la tarifa es 1.2, 
entre 1.OOOy 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.*/
#include <stdio.h>

int main()
{  float tar1,tar2,tar3,gasto;
   printf("Digite el valor del gasto: ");
   scanf("%f",&gasto);
   
   if(gasto<1.000)
   {
   	tar1=1.2;
   	printf("La tarifa es de: %f",tar1);
   }
   
   if(gasto>=1.000 && gasto<=1.850)
   {
   	tar2=1.0;
   	printf("La tarifa es de: %f",tar2);
   }
   else if(gasto>1.850)
   {
   	tar3=0.9;
   	printf("La tarifa es de: %f",tar3);
   }

  	return 0;
}
