Datos base: Matriz m[3][5], C = 5 columnas, tamano entero = 4 bytes, base = 4000. Formula: Dir(m[i][j]) = 4000 + ((i * 5 + j) * 4).

1. Direccion de m[2][4]: Dir = 4000 + ((2 * 5 + 4) * 4) = 4000 + (14 * 4) = 4000 + 56 = 4056.

2. Direccion de m[1][3]: Dir = 4000 + ((1 * 5 + 3) * 4) = 4000 + (8 * 4) = 4000 + 32 = 4032.

3. Diferencia entre ambas: 4056 - 4032 = 24 bytes.

    // Ejercicio 12
#include <stdio.h>

int main() {
    int m[3][5];
    
    printf("--- Ejercicio 12 ---\n");
    printf("Direccion de m[1][3]: %p\n", (void*)&m[1][3]);
    printf("Direccion de m[2][4]: %p\n", (void*)&m[2][4]);
    
    long diferencia = (char*)&m[2][4] - (char*)&m[1][3];
    
    printf("\nDiferencia medida en bytes: %ld bytes\n", diferencia);
    printf("Esto confirma nuestro calculo teorico de 24 bytes de separacion.\n");
    
    return 0;
}
