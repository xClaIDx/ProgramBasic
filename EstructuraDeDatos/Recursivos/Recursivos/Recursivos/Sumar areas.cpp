#include <stdio.h>
#include <math.h>
// Función recursiva para sumar las áreas
double sumarAreas(double area, int n) {
    if (n == 1)
        return area;
    else
        return area + sumarAreas(area / 2.0, n - 1);
}

int main() {
    double lado;
    int n;
    printf("Ingrese el lado del cuadrado inicial: ");
    scanf("%lf", &lado);
    printf("Ingrese el numero de cuadrados a sumar: ");
    scanf("%d", &n);
    if (lado <= 0 || n <= 0) {
        printf("El lado y el número de cuadrados deben ser mayores que cero.\n");
    } else {
        double areaInicial = lado * lado;
        double suma = sumarAreas(areaInicial, n);
        printf("La suma de las áreas de los %d cuadrados es: %.6f\n", n, suma);
    }
    return 0;
}

