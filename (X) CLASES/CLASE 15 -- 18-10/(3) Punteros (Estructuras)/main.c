#include <stdio.h>
#include <stdlib.h>

#include "funcion.h"


int main()
{
    int i;
    eDato miDato[2] = {{1, 'B'}, {1, 'c'}};
    eDato* pDato;

    pDato = &miDato; // SE PONE & SI ES UN SOLO DATO.


    for (i=0; i<2; i++)
    {
        // printf("%d--%c\n", (*(pDato+i)).entero, (*(pDato+i)).caracter);
        printf("%d--%c\n", (pDato+i)->entero, (pDato+i)->caracter);
    }



    return 0;
}
