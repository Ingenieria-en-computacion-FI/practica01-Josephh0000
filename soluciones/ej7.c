Respuesta: La direccion &m[1][0] es mayor que &m[0][3].


Justificacion Matematica: Dado que la matriz "m" tiene 4 columnas, el elemento m[0][3] es el ultimo de la primera fila. Debido al almacenamiento contiguo por filas, el siguiente elemento en la memoria inmediatamente despues es el primer elemento de la siguiente fila, es decir, m[1][0].
Dir(m[1][0]) = Dir(m[0][3]) + sizeof(int)
