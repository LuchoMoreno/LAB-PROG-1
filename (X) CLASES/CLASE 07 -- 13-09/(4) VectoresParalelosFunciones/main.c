#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

#define T 3
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
    char nombreCompleto[T][20];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];

    cargarAlumnos(nombreCompleto, nota1, nota2, nota3, promedio, T);
    mostrarAlumnos(nombreCompleto, nota1, nota2, nota3, promedio, T);


    return 0;
}
