#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


void calcularTam (int vector[])
{
        printf("El tamanio es: %d\n", sizeof(vector));
}


void cargarVector (int vector[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &vector[i]);
    }

}


void ordenarVector (int vector[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
                if(vector[i] > vector[j]) //CRITERIO DE ORDENAMIENTO.
                {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
                }

        }
    }
}



void funcionMostrarTodo (int vector[], int tam)
{
    int i;
    printf("\nMuestro TODO!\n");
    for (i=0; i<tam; i++)
    {
        printf("%d\n", vector[i]);

    }
}



void funcionMostrarPares (int vector[], int tam)
{
    int i;
    printf("\nMuestro los pares!\n");
    for (i=0; i<tam; i++)
    {
        if (vector[i] %2 == 0)
        {
        printf("%d\n", vector[i]);
        }
    }
}


void funcionBuscarNumero (int vector[], int tam)
{
    int i;
    int buscar;
    int flag = 0;

    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &buscar);
    for (i=0; i<tam; i++)
    {
        if(buscar==vector[i])
        {
            flag = 1;
            printf("POSICION: %d\n", i);
            break;
        }
    }

    if (flag==0)
    {
        printf("No se encontro el dato\n");
    }

}
