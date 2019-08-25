#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcion.h"

#define T 20

int main()
{

    char nombre[T];
    char apellido[T];
    char ApellidoYNombre[40];

    cargarDato(nombre, T, "Ingrese su nombre: ");
    cargarDato(apellido, T, "Ingrese su apellido: ");

    UpperPrimerCaracter(nombre);
    UpperPrimerCaracter(apellido);

    printf("\nSu nombre es: %s, y su apellido es: %s", nombre, apellido);


    strcat(apellido, ", ");
    strcat (apellido, nombre);

    printf("\n\n\nLuego de dar formato, su nombre es el siguiente: ");
    printf("\n%s\n\n", apellido);



    return 0;
}




