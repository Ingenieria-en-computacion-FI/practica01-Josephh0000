Tamano del tipo: La diferencia entre las direcciones 1008 y 1000 es de 8 bytes.



Tipo posible: Tipos de datos en C que usualmente ocupan 8 bytes son double o long long int.


Formula usada: Dir(a[i]) = 1000 + (i * 8).

#include <stdio.h>

int main() {
    double a[3]; 
    
    printf("--- Ejercicio 11 ---\n");
    for(int i = 0; i < 3; i++) {
        printf("&a[%d]: %p\n", i, (void*)&a[i]);
    }
    
    long diferencia = (char*)&a[1] - (char*)&a[0];
    printf("\nLa diferencia real en memoria es: %ld bytes\n", diferencia);
    printf("Esto confirma que un arreglo con esos saltos pertenece a un tipo de 8 bytes (ej. double).\n");
    
    return 0;
}
