Respuesta: La direccion &a[5] es mayor.


Justificacion Numerica: Los elementos de un arreglo se almacenan en bloques contiguos de memoria de forma ascendente. Dado que el indice 5 es mayor que el 4, su direccion de memoria estara mas adelante. Aplicando la formula:
Dir(a[5]) = Dir(a[4]) + sizeof(int)
+1


Conclusion: Si un entero ocupa 4 bytes, &a[5] es estrictamente 4 bytes mayor que &a[4].
