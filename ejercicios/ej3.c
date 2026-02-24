Estan juntos en memoria?: No necesariamente. Aunque los elementos dentro de un mismo arreglo si son estrictamente contiguos, la separacion entre el final del arreglo "a" y el inicio del arreglo "b" puede variar.


De que depende?: Depende enteramente del compilador, el nivel de optimizacion y el sistema operativo. El compilador asigna las variables en la memoria y a veces inserta espacio adicional por cuestiones de alineacion o seguridad.

    // Ejercicio 3
#include <stdio.h>

int main() {
    int a[3];
    int b[3];
    int c[3];

    printf("--- Ejercicio 3 ---\n");
    
    printf("Direcciones del arreglo 'a':\n");
    for(int i = 0; i < 3; i++) {
        printf("&a[%d] = %p\n", i, (void*)&a[i]);
    }

    printf("\nDirecciones del arreglo 'b':\n");
    for(int i = 0; i < 3; i++) {
        printf("&b[%d] = %p\n", i, (void*)&b[i]);
    }

    printf("\nDirecciones del arreglo 'c':\n");
    for(int i = 0; i < 3; i++) {
        printf("&c[%d] = %p\n", i, (void*)&c[i]);
    }

    printf("\n--- Respuestas a las preguntas ---\n");
    printf("2. Estan juntos en memoria?: No necesariamente. Los elementos dentro de 'a' estan juntos, pero el salto entre el final de 'a' y el inicio de 'b' puede variar.\n");
    printf("3. De que depende?: Depende totalmente del compilador, la arquitectura del sistema y el alineamiento de memoria (padding) que asigne la pila (stack) por seguridad.\n");

    return 0;
}
