#include "funciones.h"

void inicializarVector (int vector[], int tam, int inic)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vector[i] = inic;
    }
}

int buscarLibre (int vector[], int tam, int valor)
{
    int indice = -1;
    int i;
    for (i=0; i<tam; i++)
    {
        if (vector[i] == valor)
        {
            indice = i;
            break;
        }
    }

return indice;
}
