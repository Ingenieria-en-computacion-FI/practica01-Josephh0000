Analisis: La afirmacion del estudiante (Si a[0]=1000 entonces a[10]=1010) es incorrecta.

Demostracion Formal: La direccion se calcula con la formula Dir(a[i]) = Base + (i * tamano). Si asumimos un arreglo de enteros (int) de 4 bytes, el calculo real seria:
Dir(a[10]) = 1000 + (10 * 4) = 1040

Error: El estudiante sumo erroneamente el indice directo a la direccion de memoria sin multiplicarlo por el tamano del tipo de dato.

  // Ejercicio 5
#include <stdio.h>

int main() {
    int base = 1000;
    int tamano = 4; 
    
    int dir_real = base + (10 * tamano);
    
    printf("Afirmacion del estudiante (a[10]=1010): FALSA\n");
    printf("Demostracion: La direccion real es Base + (10 * 4) = %d\n", dir_real);
    
    return 0;
}
