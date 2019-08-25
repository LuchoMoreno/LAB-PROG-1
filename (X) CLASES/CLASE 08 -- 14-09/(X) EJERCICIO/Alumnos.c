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

    printf("Ingrese su nota 1: ");
    scanf("%d", &miAlumno.nota1);

    printf("Ingrese su nota 2: ");
    scanf("%d", &miAlumno.nota2);

    printf("Ingrese su nota 3: ");
    scanf("%d", &miAlumno.nota3);

    miAlumno.promedio = calcularPromedio(miAlumno.nota1, miAlumno.nota2, miAlumno.nota3);


    return miAlumno;

}


void mostrarAlumno (eAlumno alumnoParametro)
{
    printf("%d -- %s -- %s -- %d -- %d -- %d -- %f\n", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.nota1, alumnoParametro.nota2, alumnoParametro.nota3, alumnoParametro.promedio);
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


float calcularPromedio (int nota1, int nota2, int nota3)
{
    float promedio;
    promedio = (float)(nota1 + nota2+ nota3) / 3;
    return promedio;
}


int calcularAprobados (eAlumno alumnoParametro)
{
    int contadorAprobados;
    if (alumnoParametro.promedio > 6)
    {
        contadorAprobados++;
    }

    return contadorAprobados;
}
