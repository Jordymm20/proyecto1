#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int invertir(int);

    int main() {
    	
	char respuesta=20;
    int num,num_invertido;
    
    do{
       do{
         
		  printf("Ingrese un numero entero con almenos dos digitos y no mas de cinco digitos\n");
          scanf("%i",&num);
       
       }while((num < 0) || (num > 99999));
    
        num_invertido = invertir(num);
        
        printf("\nEl numero invertido de %d es: %d\n",num,num_invertido);
        
        printf("\nSi desea continuar digite s y si desea terminar digite cualquier tecla\n");
        scanf("%s",&respuesta);
    
    }while((respuesta=='s')||(respuesta=='S'));


	return 0;
	    
    }
  
    int invertir (int numero){
	
	int resultado=0;
	
	while(numero>0)
	{
		resultado=resultado*10;
		resultado=resultado+ numero%10;
		numero=numero/10;
	}
	
	
	return resultado;
}
