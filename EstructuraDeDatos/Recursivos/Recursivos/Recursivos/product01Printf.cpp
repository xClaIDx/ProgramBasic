/* programa: product01_final.cpp */
/* calcula el producto de dos numeros enteros recursivamente */

#include <stdio.h>

unsigned long int producto(int a, int b);

int main() {
    int a, b;

    printf("\nIngrese <a>: ");
    scanf("%d", &a);
    printf("Ingrese <b>: ");
    scanf("%d", &b);

    printf("El producto es: %lu\n", producto(a, b));

    printf("Programa finalizado.\n");
    return 0;
}

unsigned long int producto(int a, int b) {
    if (b == 0) return 0;
    if (b > 0) return a + producto(a, b - 1);
    if (b < 0) return -producto(a, -b); // Manejo de b negativo
}

