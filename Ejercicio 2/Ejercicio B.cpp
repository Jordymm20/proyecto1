#include <stdio.h>
#include <string.h>

int main() {
    int numeroFactura = 1;
    int cantidadGaleria = 0, cantidadPalco = 0;
    double acumuladoGaleria = 0, acumuladoPalco = 0, totalGeneral = 0;
    int continuar;

    do {
        char cedula[20], nombre[100];
        int tipoCliente, tipoTiquete, cantidadTiquetes;

        printf("Ingrese la cedula del cliente: ");
        scanf("%s", cedula);
        printf("Ingrese el nombre del cliente: ");
        scanf(" %[^\n]", nombre);
        printf("Tipo de cliente (1=Nino o adulto mayor, 2=Adulto): ");
        scanf("%d", &tipoCliente);
        printf("Tipo de tiquete (1=Tiquete Galeria, 2=Tiquete Palco): ");
        scanf("%d", &tipoTiquete);
        printf("Cantidad de tiquetes a comprar: ");
        scanf("%d", &cantidadTiquetes);

        if (tipoCliente < 1 || tipoCliente > 2 || tipoTiquete < 1 || tipoTiquete > 2 || cantidadTiquetes <= 0) {
            printf("Datos ingresados no validos. Intente nuevamente.\n");
            continue;
        }

        double montoPorTiquete = (tipoTiquete == 1) ? 6000 : 12000;
        double montoVenta = cantidadTiquetes * montoPorTiquete;
        double descuento = (tipoCliente == 1) ? (montoVenta * 0.3) : 0;
        double subtotal = montoVenta - descuento;
        double impuesto = subtotal * 0.13;
        double totalAPagar = subtotal + impuesto;
        if (tipoTiquete == 1) {
            cantidadGaleria += cantidadTiquetes;
            acumuladoGaleria += totalAPagar;
        } else {
            cantidadPalco += cantidadTiquetes;
            acumuladoPalco += totalAPagar;
        }
        totalGeneral += totalAPagar;

        printf("\n--- Detalles de la venta ---\n");
        printf("Numero de factura: %d\n", numeroFactura++);
        printf("Cedula: %s\n", cedula);
        printf("Nombre: %s\n", nombre);
        printf("Tipo de cliente: %s\n", (tipoCliente == 1 ? "Nino o adulto mayor" : "Adulto"));
        printf("Tipo de tiquete: %s\n", (tipoTiquete == 1 ? "Galeria" : "Palco"));
        printf("Cantidad de tiquetes: %d\n", cantidadTiquetes);
        printf("Monto unitario: %.2f\n", montoPorTiquete);
        printf("Monto de venta: %.2f\n", montoVenta);
        printf("Descuento: %.2f\n", descuento);
        printf("Subtotal: %.2f\n", subtotal);
        printf("Impuesto: %.2f\n", impuesto);
        printf("Total a pagar: %.2f\n", totalAPagar);
        printf("\nDesea realizar otra compra? (1=Si, 0=No): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nEstadisticas finales\n");
    printf("Cantidad de entradas Tiquetes Galeria: %d\n", cantidadGaleria);
    printf("Acumulado Dinero por Tiquetes Galeria: %.2f\n", acumuladoGaleria);
    printf("Cantidad de entradas Tiquetes Palco: %d\n", cantidadPalco);
    printf("Acumulado Dinero por Tiquetes Palco: %.2f\n", acumuladoPalco);
    printf("Cantidad General de Entradas: %d\n", (cantidadGaleria + cantidadPalco));
    printf("Acumulado General Dinero por Entradas: %.2f\n", totalGeneral);

    if (numeroFactura > 1) {
        printf("Promedio General por Ventas: %.2f\n", (totalGeneral / (numeroFactura - 1)));
    } else {
        printf("No se realizaron ventas.\n");
    }

    return 0;
}

