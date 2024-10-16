#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
int num,num_mayor,posicion_num,cant_num_pri=0,sum_num_pri=0,pro_num_pri,cant_num_no_pri=0,sum_num_no_pri=0,pro_num_no_pri;
int i=0,max=0;
char respuesta=20;

 do{
 	
	 int resultado=0;
 	
      printf("Digite un numero:\n");
      scanf("%d",&num);

      for(i=1;i<=num;i=i+1){
           if(num%i==0){
           resultado=resultado+1;
           }
      }
	  if (resultado==2){
	    printf("El numero %d es un numero primo\n",num);
	    cant_num_pri=cant_num_pri+1;
	    sum_num_pri=num+sum_num_pri;
	  }
	  else {
	    printf("El numero %d no es un numero primo\n",num);
	    cant_num_no_pri++;
	    sum_num_no_pri=num+sum_num_no_pri;
      }
      
      if (num>max){
          max=num;
          
      }
	  else {
	  	max=max;
	  }      
           
      printf("\nSi desea continuar digite s y si desea terminar digite cualquier tecla\n");
      scanf("%s",&respuesta);
	  
}while((respuesta=='s')||(respuesta=='S'));

      pro_num_pri=sum_num_pri/3;
      pro_num_no_pri=sum_num_no_pri/3;
      
      printf("\nEl numero mayor ingresado es %d en la posicion\n",max);

      printf("La cantidad total de numeros primos es de: %d\n",cant_num_pri);
      printf("La sumatoria total de los numeros primos es de: %d\n",sum_num_pri);
      printf("El promedio de los numeros primos es de: %d\n",pro_num_pri);

      printf("La cantidad total de numeros no primos es de %d\n",cant_num_no_pri);
      printf("La sumatoria total de los numeros no primos es de: %d\n",sum_num_no_pri);
      printf("El promedio de los numeros no primos es de: %d\n",pro_num_no_pri);


	return 0;
}
