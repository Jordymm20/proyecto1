#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int n; 

int main() {
int num_mayor,posicion_num,cant_num_pri=0,sum_num_pri=0,pro_num_pri,cant_num_no_pri=0,sum_num_no_pri=0,pro_num_no_pri;
int i=0,max,posicion,num[n];

printf("Digite la cantidad de veces que ocupa saber si el numero es primo o no primo:\n");
scanf("%d",&n);
 	  
for(int x=0;x<n;x++)
{
	  int resultado=0;
      printf("\nDigite un numero:\n");
      scanf("%d",&num[x]);

      for(i=1;i<=num[x];i=i+1){
           if(num[x]%i==0){
           resultado=resultado+1;
           }
      }
	  if (resultado==2){
	    printf("El numero %d es un numero primo\n",num[x]);
	    cant_num_pri=cant_num_pri+1;
	    sum_num_pri=num[x]+sum_num_pri;
	  }
	  else {
	    printf("El numero %d no es un numero primo\n",num[x]);
	    cant_num_no_pri++;
	    sum_num_no_pri=num[x]+sum_num_no_pri;
      }
      
}	     
      max=num[0];
      posicion=0;
	  
	  for(int x=1;x<n;x++){
	        if(num[x]>max){
	      	max=num[x];
	      	posicion=x;
	      } 
      }
      posicion++;
      pro_num_pri=sum_num_pri/3;
      pro_num_no_pri=sum_num_no_pri/3;
      
      printf("\nEl numero mayor ingresado es %d en la posicion: %i\n",max,posicion);

      printf("La cantidad total de numeros primos es de: %d\n",cant_num_pri);
      printf("La sumatoria total de los numeros primos es de: %d\n",sum_num_pri);
      printf("El promedio de los numeros primos es de: %d\n",pro_num_pri);

      printf("La cantidad total de numeros no primos es de %d\n",cant_num_no_pri);
      printf("La sumatoria total de los numeros no primos es de: %d\n",sum_num_no_pri);
      printf("El promedio de los numeros no primos es de: %d\n",pro_num_no_pri);


	return 0;
}
