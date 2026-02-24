Tamano del tipo: Entre a[0] y a[3] hay 3 elementos de distancia. La diferencia en bytes es 5012 - 5000 = 12. Por lo tanto, el tamano de cada elemento es 12 / 3 = 4 bytes.



Direccion de a[5]: Aplicando la distancia desde la base:
Dir(a[5]) = 5000 + (5 * 4) = 5020


Formula usada: Dir(a[i]) = 5000 + (i * 4)

  // Ejercicio 4
#include <stdio.h>

int main() {
    int base = 5000;
    int a3 = 5012;
    
    int tamano = (a3 - base) / 3;
    int a5 = base + (5 * tamano);
    
    printf("1. Tamano del tipo: %d bytes\n", tamano);
    printf("2. Direccion de a[5]: %d\n", a5);
    printf("3. Formula: Dir(a[i]) = %d + (i * %d)\n", base, tamano);
    
    return 0;
}
