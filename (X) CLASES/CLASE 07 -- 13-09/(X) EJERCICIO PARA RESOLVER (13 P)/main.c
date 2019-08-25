#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

#define T 20
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
    int legajo[T]= {};
    char nombreCompleto[T][20];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    char sexo[T][2];
    float promedio[T];


    int opcion;
    int index;
    int i=0;
    do
    {
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("(1) ALTA DE ALUMNOS: \n");
        printf("(2) MOSTRAR ALUMNOS: \n");
        printf("(3) A CONFIGURAR--: \n");
        printf("(4) A CONFIGURAR--: \n");
        printf("(9) Salir\n");
        printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarAlumnos(nombreCompleto, legajo, nota1, nota2, nota3, sexo, promedio, T);
            break;
        case 2:
            printf("%s %15s %15s %15s %15s %15s %15s\n", "LEGAJO", "NOMBRE", "NOTA 1", "NOTA 2", "NOTA 3", "SEXO", "PROMEDIO");
            mostrarAlumnos(nombreCompleto, legajo, nota1, nota2, nota3, sexo, promedio, T);
            break;


        case 3:

            break;


        case 4:


            break;


        case 5:


            break;

        }

        system("pause");
        system("cls");

    }while(opcion!=9);

    return 0;
}
