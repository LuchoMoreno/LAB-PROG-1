#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

    printf("Ingrese el legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese su direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

    printf("Ingrese el promedio: ");
    scanf("%f", &miAlumno.promedio);

    return miAlumno;

}



void mostrarAlumno (eAlumno alumnoParametro)
{
    printf("%d -- %s -- %s -- %f\n", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.promedio);
}



void cargarListado(eAlumno listado[], int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
    listado[i] = cargarAlumno();
    }
}



void mostrarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
    mostrarAlumno(listado[i]);
    }
}

