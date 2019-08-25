#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100


/** 1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/

int main()
{
    int i;
    int j;

    system("color 0F");

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    char opcion;

    do
    {
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("SOLO SE TOMARA EL PRIMER DIGITO COMO OPCION.\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("(1) MOSTRAR TODOS LOS USUARIOS: \n");
        printf("(2) MOSTRAR TODAS LAS SERIES: \n");
        printf("(3) LISTA USUARIOS - SERIE QUE VEN: \n");
        printf("(4) LISTA DE SERIES - CON SUS USUARIOS: \n");
        printf("(5) Salir\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");


        printf("Debe elegir una opcion a realizar: ");
        fflush(stdin);
        scanf("%c", &opcion);

        while (opcion!='1' && opcion!='2' && opcion!='3' && opcion!='4' && opcion!='5')
        {
            printf("Error. Ha ingresado una opcion erronea!\n\n");
            printf("Debe elegir una opcion a realizar: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }

        switch (opcion)
        {
        case '1':
            mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
            break;

        case '2':
            mostrarListaDeSeries(listaDeSeries, TAMSERIE);
            break;

        case '3':
            for (i=0; i<TAMUSUARIO; i++) // POR CADA USUARIO

                if(listaDeUsuarios[i].estado==1)
                {
                    printf("%d \t-- %s \t-- %d", listaDeUsuarios[i].idUsuario, listaDeUsuarios[i].nombre, listaDeUsuarios[i].idSerie);

                    for(j=0; j<TAMSERIE; j++)
                    {
                        if(listaDeUsuarios[i].idSerie == listaDeSeries[j].idSerie)
                        {
                            printf("\t -- %s", listaDeSeries[j].nombre);
                            break;
                        }
                    }
                    printf("\n");
                }
            break;
        case '4':
            for (i=0; i<TAMUSUARIO; i++) // POR CADA USUARIO

                if(listaDeUsuarios[i].estado==1 && listaDeSeries[i].estado == 1)
                {
                    printf("%s -- %s -- %d\n", listaDeSeries[i].nombre, listaDeSeries[i].genero, listaDeSeries[i].cantidadTemporadas);

                    for(j=0; j<TAMSERIE; j++)
                    {
                        if(listaDeSeries[i].idSerie == listaDeUsuarios[j].idSerie)
                        {
                            printf("%s\n", listaDeUsuarios[j].nombre);
                        }
                    }
                    printf("\n");
                }
            break;
        case '5':
            opcion = '5';
            printf("Usted ha finalizado el programa!\n\n");
            break;

        default:
            printf("Error. Ha ingresado una opcion erronea!\n\n");
        }
        system("pause");
        system("cls");


    }
    while (opcion!='5');
    printf("====================================================\n");
    printf("\t\tGracias por utilizar NETFLIX!\n");
    printf("====================================================\n");
    return 0;
}
