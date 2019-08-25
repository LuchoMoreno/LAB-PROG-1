#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int legajo;
char nombre[50]; // Guarda una cadena. Por eso es un vector.
char direccion[50];
float promedio;
}eAlumno;


void mostrarAlumno (eAlumno alumnoParametro);

int main()
{
    eAlumno miAlumno; // LE ASIGNO UN NOMBRE. EL PRIMERO ES LA ESTRUCTURA. EL SEGUNDO ES EL NOMBRE.
    eAlumno otroAlumno;

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


    mostrarAlumno(miAlumno);

    return 0;
}

void mostrarAlumno (eAlumno alumnoParametro)
{
    printf("%d -- %s -- %s -- %f", alumnoParametro.legajo, alumnoParametro.nombre, alumnoParametro.direccion, alumnoParametro.promedio);
}
