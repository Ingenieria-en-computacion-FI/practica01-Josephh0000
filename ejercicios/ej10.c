Causa de falla: Provoca un desbordamiento de pila (Stack Overflow) porque un arreglo gigante[10000000] de enteros requiere aproximadamente 40 MB de memoria continua.


Donde se almacena: Por defecto, las variables locales se almacenan en la pila (Stack), la cual suele tener un limite estricto por el sistema operativo.


Solucion sin memoria dinamica: Se puede declarar el arreglo de forma global (fuera del main) o utilizar la palabra clave "static" (static int gigante[10000000];). Esto mueve el arreglo al segmento de datos, el cual tiene limites de memoria mucho mas amplios.


// Ejercicio 10
#include <stdio.h>

int gigante_global[10000000]; 

int main() {
    static int gigante_static[10000000]; 
    
    printf("--- Ejercicio 10 ---\n");
    printf("El arreglo compila y ejecuta sin problemas de Stack Overflow al ser estatico/global.\n");
    printf("Tamano del arreglo: %lu bytes\n", sizeof(gigante_global));
    
    gigante_global[0] = 1;
    gigante_static[9999999] = 2;
    
    printf("Valores asignados exitosamente sin fallos de memoria.\n");
    
    return 0;
}
