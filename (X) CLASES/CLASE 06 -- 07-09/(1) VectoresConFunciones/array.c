#include <stdio.h>

#include "array.h"

void cargarVector (int vector[], int tam)
{
    char seguir;
    int posicion; // Posicion dentro del vector.

    do
    {
        printf("\nIngrese la posicion: ");
        scanf("%d", &posicion);

        printf("Ingrese un valor: ");
        scanf("%d", &vector[posicion-1]); // Se guarda en la posicion menos 1.


        printf("Quiere ingresar otro numero? s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);


    }while(seguir=='s');

}

void mostrarVector (int vector[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vector[i] != -1)
        {
        printf("Vector: %d\n", vector[i]);
        }
    }
}


void inicializarVector (int vector[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        vector[i] = -1;
    }
}

int sumarValores (int vector[], int tam)
{
    int acumulador = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(vector[i] != -1)
        {
        acumulador = acumulador + vector[i];
        }
    }
    return acumulador;
}
