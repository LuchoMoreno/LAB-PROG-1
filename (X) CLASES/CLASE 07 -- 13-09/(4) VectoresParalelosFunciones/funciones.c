#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


float calcularPromedio (int nota1, int nota2, int nota3)
{
    float promedio;
    promedio = (float)(nota1 + nota2+ nota3) / 3;
    return promedio;
}


int cargarAlumnos (char nombreCompleto[][50], int nota1[], int nota2[], int nota3[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("Ingrese la nota 1: ");
        scanf("%d", &nota1[i]);

        printf("Ingrese la nota 2: ");
        scanf("%d", &nota2[i]);

        printf("Ingrese la nota 3: ");
        scanf("%d", &nota3[i]);

        promedio[i] = calcularPromedio(nota1[i], nota2[i], nota3[i]);
    }

    return 0;
}

int mostrarAlumnos(char nombreCompleto[][50], int nota1[], int nota2[], int nota3[], float promedio[], int tam)
{
    int i;
    printf("%s %6s %6s %6s %12s\n", "Nombre", "Nota1", "Nota2", "Nota3", "Promedio" );
    for(i=0; i<tam; i++)
    {
        printf("%5s %5d %5d %5d %16f \n", nombreCompleto[i], nota1[i], nota2[i], nota3[i], promedio[i]);
    }
}
