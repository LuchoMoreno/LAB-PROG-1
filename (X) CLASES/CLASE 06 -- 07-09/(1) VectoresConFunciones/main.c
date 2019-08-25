#include <stdio.h>
#include <stdlib.h>

#include "array.h"

#define T 5

int main()
{
    int miVector[T];
    int suma;
    int opcion;

    inicializarVector(miVector, T); // Antes de gestionar, yo tengo que encargarme de inicializar

    do
    {
        printf("\n1)Cargar\n2)Mostrar\n3)Sumar\n4)Salir.\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarVector(miVector, T);
            break;
        case 2:
            mostrarVector(miVector, T);
            break;
        case 3:
            suma = sumarValores(miVector, T);
            printf("La suma es: %d", suma);
            break;
        }



    }while(opcion!=4);


    return 0;
}
