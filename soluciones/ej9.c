#include <stdio.h>

int main() {
    int a[5];

    printf("--- Ejercicio 9 ---\n");
    printf("&a[-1]: %p\n", (void*)&a[-1]);
    printf("&a[5]:  %p\n", (void*)&a[5]);

    printf("\nExplicacion:\n");
    printf("1. Compila porque C no tiene 'Bounds Checking' (verificacion de limites).\n");
    printf("2. Es peligroso porque accedes a memoria ajena (Stack Corruption).\n");
    printf("3. Revela que el arreglo es solo un puntero a un bloque de memoria sin proteccion.\n");

    return 0;
}
