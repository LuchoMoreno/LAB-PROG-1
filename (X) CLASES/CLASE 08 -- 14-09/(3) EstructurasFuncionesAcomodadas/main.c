#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

#define A 3

int main()
{
    eAlumno listaAlumnos[A];

    cargarListado(listaAlumnos, A);
    mostrarListado(listaAlumnos, A);

    return 0;
}
