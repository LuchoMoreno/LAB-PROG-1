#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "funciones.h"

#define T 20
#define OCUPADO 0
#define LIBRE 1


int main()
{
    char seguir='s';
    int opcion=0;

    ePersona lista[T];

    inicializacionPrincipal(lista, T); // Da la inicializacion de todos los estados en 0
    inicializarHardcodePersonas(lista); // Harcodea algunos datos de usuarios.

    while(seguir=='s')
    {
        printf("\n:::::::::::::::::::::::::::::::::::::::::\n");
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");
        printf("\n:::::::::::::::::::::::::::::::::::::::::\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
            altaDePersonas(lista, T);
                break;
            case 2:
            bajaDePersona(lista, T);
                break;
            case 3:
            ordenarSegunNombre(lista, T);
            mostrarListaUsuarios(lista, T);
                break;
            case 4:
            mostrarGrafico(lista);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("Ha ingresado una opcion que no corresponde al sistema. Intente nuevamente\n");
                break;
        }
    }
    printf("FINALIZACION DEL PROGRAMA.\n");
    return 0;
}
