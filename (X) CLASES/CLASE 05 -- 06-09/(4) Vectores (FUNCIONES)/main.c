#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

#define T 5


// CARGA ALEATORIA:
// CARGA SECUENCIAL:
// CARGA POR EXTENSION: Es cuando al lado del vector se pone {1,2,3,4}

// constante: Elemento de la programacion que durante el ciclo de vida del programa

int main()
{
    int miVector[T] = {}; //subindice[] // ESTO ES CARGA POR EXTENSION.

    cargarVector(miVector, T);

    calcularTam(miVector);

    ordenarVector(miVector, T);

    funcionBuscarNumero(miVector, T);

    funcionMostrarTodo(miVector, T);

    funcionMostrarPares(miVector, T);

    return 0;
}

