#include <stdio.h>

int main() {
    int m[2][4];

    printf("--- Ejercicio 6 ---\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<4; j++) {
            printf("Direccion m[%d][%d]: %p\n", i, j, (void*)&m[i][j]);
        }
    }


    printf("\nConclusion: El almacenamiento es por FILAS.\n");
    printf("Las direcciones son contiguas: m[0][3] esta justo antes de m[1][0].\n");
    
    printf("Formula deducida: Base + ((fila * num_cols) + col) * sizeof(int)\n");

    return 0;
}
