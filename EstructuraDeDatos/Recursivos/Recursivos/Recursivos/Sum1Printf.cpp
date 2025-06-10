/* programa: sum1_printf.cpp */
/* calcula la suma de n primeros numeros naturales recursivamente */

#include <stdio.h>

unsigned long int suma(int n);

int main() {
    int n;
    char opcion;
    do {
        printf("Ingresar numero de terminos <n>: ");
        scanf("%d", &n);

        printf("La suma es: %lu\n", suma(n));

        printf("¿Deseas ingresar otro número? (Y/n): ");
        scanf(" %c", &opcion); 
    
    } while (opcion == 'y' || opcion == 'Y');

    printf("Programa finalizado.\n");
    return 0;
}

unsigned long int suma(int n) {
    if (n == 1) return 1;
    return suma(n - 1) + n;
}

