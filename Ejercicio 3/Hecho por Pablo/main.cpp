#include <stdio.h>

int main() {
    int numero, inverso;
    char continuar;

    do {
        printf("Ingrese un numero entero (maximo 5 digitos): ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 99999) {
            printf("Numero fuera de rango. Intente nuevamente.\n");
            continue;
        }
        inverso = 0;
        int numeroTemporal = numero;
        while (numeroTemporal > 0) {
            int digito = numeroTemporal % 10;
            inverso = inverso * 10 + digito;
            numeroTemporal /= 10;
        }
        printf("Numero ingresado: %d\n", numero);
        printf("Numero inverso: %d\n", inverso);
        printf("Desea ingresar otro numero? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    return 0;
}


