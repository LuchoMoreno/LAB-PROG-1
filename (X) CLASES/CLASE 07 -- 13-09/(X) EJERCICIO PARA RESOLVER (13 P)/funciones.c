#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"


float calcularPromedio (int nota1, int nota2, int nota3)
{
    float promedio;
    promedio = (float)(nota1 + nota2+ nota3) / 3;
    return promedio;
}


int cargarAlumnos (char nombreCompleto[][50], char legajo[], int nota1[], int nota2[], int nota3[], char sexo[][2], float promedio[], int tam)
{
        int posicion;
        int contadorAlumnosCon6 = 0;

        printf("\nIndique una posicion donde desea guardar (0-20): ");
        scanf("%d", &posicion);

        printf("\nIngrese su legajo: ");  // Con esta funcion pido que se ingrese un legajo 3 veces.
        scanf("%d", &legajo[posicion]);

        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombreCompleto[posicion]);

        printf("Ingrese la nota 1: ");
        scanf("%d", &nota1[posicion]);

        printf("Ingrese la nota 2: ");
        scanf("%d", &nota2[posicion]);

        printf("Ingrese la nota 3: ");
        scanf("%d", &nota3[posicion]);

        printf("Ingrese su sexo F o M: ");
        fflush(stdin);
        gets(sexo[posicion]);

        promedio[posicion] = calcularPromedio(nota1[posicion], nota2[posicion], nota3[posicion]);


    return 0;
}


int mostrarAlumnos(char nombreCompleto[][50], char legajo[], int nota1[], int nota2[], int nota3[], char sexo[][2], float promedio[], int tam)

{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajo[i]!=0)
                {
                    printf("%d %17s %15d %15d %15d %15s %15f\n", legajo[i], nombreCompleto[i], nota1[i], nota2[i], nota3[i], sexo[i], promedio[i]);
                }

            }

}

