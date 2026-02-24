
#include <stdio.h>

int main() {
    int a[6];

    printf("--- EJERCICIO 1 ---\n");
    for (int i = 0; i < 6; i++) {
        printf("Direccion de a[%d]: %p\n", i, (void*)&a[i]);
    }
