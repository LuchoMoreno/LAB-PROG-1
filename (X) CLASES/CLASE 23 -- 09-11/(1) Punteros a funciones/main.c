#include <stdio.h>
#include <stdlib.h>

#include "Funciones.h"
#include "Controller.h"

int main()
{
    int i;
    int r;

    int (*funcion[2])(int);

    funcion[0] = mostrar;
    funcion[1] = mostrarDos;

    for(i=0; i<2; i++)
    {
         r=funcion[i](100);
         printf("Retorno funcion %d -> %d\n", i+1, r);
    }

    return 0;
}
