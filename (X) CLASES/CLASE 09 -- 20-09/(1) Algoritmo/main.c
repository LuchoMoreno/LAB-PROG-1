#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

#define A 5


int main()
{
    int array[A];
    int i;
    int flag = 0;
    int indice;

    char seguir;

    inicializarVector(array, A, -1);

    do
    {

        indice = buscarLibre(array, A, -1); // DENTRO
        if (indice != -1)// FUERA DEL ARRAY
        {
            printf("\nIngrese un numero: ");
            scanf("%d", &array[indice]);
        }

        else
        {
            printf("\n\nNo hay lugar!");
            break;
        }

        printf("Desea ingresar otro? s/n");
        seguir = getche();

    }while (seguir=='s');

    return 0;
}

