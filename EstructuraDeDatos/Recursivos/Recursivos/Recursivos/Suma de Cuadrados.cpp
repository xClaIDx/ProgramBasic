
#include <stdio.h>
// Función recursiva para calcular la suma de los cuadrados
int sumaCuadrados(int n) {
    if (n == 1)
        return 1;
    else
        return n * n + sumaCuadrados(n - 1);
}

int main() {
    int n;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("El numero debe ser mayor que cero.\n");
    } else {
        int resultado = sumaCuadrados(n);
        printf("La suma de los cuadrados de los primeros %d numeros es: %d\n", n, resultado);
    }
    return 0;
}

