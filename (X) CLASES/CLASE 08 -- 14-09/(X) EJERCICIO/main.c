#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

#define A 4


/*
a) Cargar los datos (carga aleatoria)
b) Modificar: Se ingresa el legajo, lo busca. Si lo encunetra, modifica la nota 1;
INFORMES:
1 - Los alumnos con promedio 6 o mas.
2 - El / los alumnos con maximo promedio.
3 - La / las alumnas con minimo promedio
4 - Cantidad de alumnos desaprobados (se aprueba con 6 o mas).
5 - Cantidad de alumnos aprobados.
6 - Porcentaje de aprobados y desaprobados.
7 - Mostrar los alumnos que se llamen Juan
8 - Ordenar los datos alfabeticamente.
9 - Ordnear por nombre, y ante igualdad de nombre, por promedio.
10 - Mostrar los alumnos cuyo nombre comience con P
11 - Ordnear alumnos por sexo
12 - Realizar un grafico que muestre:
    * Alumnos entre 15-18 (inclusive);
    *Alumnos entre 10 y 25 (inclusive);
    *26 o mas
*/


int main()
{

    eAlumno listaAlumnos[A];

    char opcion;

    do
    {
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("SOLO SE TOMARA EL PRIMER DIGITO COMO OPCION.\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("(1) CARGAR ALUMNOS: \n");
        printf("(2) MOSTRAR ALUMNOS: \n");
        printf("(3) ---------------- \n");
        printf("(4) ---------------- \n");
        printf("(5) ----------------\n");

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
                cargarListado(listaAlumnos, A);
            break;

        case '2':
                mostrarListado(listaAlumnos, A);
            break;

        case '3':
            break;

        case '4':
            break;

        case '5':
            break;

        default:

            printf("Error. Ha ingresado una opcion erronea!\n\n");
        }
        system("pause");
        system("cls");


    }while (opcion!='5');


return 0;
}



