#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"
#include "Curso.h"

#define A 100
#define C 3

#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1


/**
1) ------------- ALUMNOS QUE CURSAN PHP.
2) ------------- POR CADA CURSO TODOS LOS ALUMNOS.
*/

int main()
{

    int i;
    int j;
    printf("ALUMNO QUE ESTA ANIDADO: \n"); // A ESTE ALUMNO SE LO ANIDO CON HARDCODEO (ABAJO). EL RESTO DE LOS ALUMNOS NO TIENEN FECHA DEFINIDA.
    eAlumno miAlumno = {450, "Juan", "AAA", 10, 1, 10, 6, 2, 1990};
    mostrarAlumno(miAlumno);


    eAlumno listaAlumnos[A];
    inicializarAlumnos(listaAlumnos, A, VACIO);
    inicializarAlumnosConDatos(listaAlumnos, A);


    eCursos misCursos[C];
    inicializarCursos(misCursos);
    mostrarTodosLosCursos(misCursos, C);

    int opcion;

    do
    {
        printf("\n====================\n");
        printf("1: CARGAR ALUMNO. \n");
        printf("2: MOSTRAR ALUMNOS. \n");
        printf("3: BORRAR ALUMNOS. \n");
        printf("4: MODIFICAR ALUMNOS. \n");
        printf("5: MOSTRAR CURSOS / ALUMNOS. \n");
        printf("10: SALIR. \n");
        printf("====================\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            if (cargarAlumnoEnListado(listaAlumnos, A))
            {
                printf("\n\nDato cargado con exito\n\n");
            }
            else
            {
                printf("\n\nNo existe espacio disponible\n\n");
            }

            break;

        case 2:
            printf("ACLARACION: Los alumnos tienen 0-0-0 porque no se hardcodeo su fecha.\n");
            mostrarListado(listaAlumnos, A);
            break;

        case 3:
            if(borrarAlumno(listaAlumnos, A))
            {
                printf("\nDato encontrado.\n");
                printf("\nEl alumno se borro.\n");
            }
            else
            {
                printf("\nEl alumno no se encontro.\n");
            }

            break;

        case 4:
            if(modificarAlumno(listaAlumnos, A))
            {
                printf("\nDato encontrado.\n");
                printf("\nEl alumno se borro.\n");
            }
            else
            {
                printf("\nEl alumno no se encontro.\n");
            }

            break;
        case 5:
            for (i=0; i<A; i++) // POR CADA ALUMNO

                if(listaAlumnos[i].estado==OCUPADO)
                {
                    printf("%d--%s--%2.f--", listaAlumnos[i].legajo,listaAlumnos[i].nombre,listaAlumnos[i].promedio);

                    for(j=0; j<3; j++)
                    {
                        if(listaAlumnos[i].idCurso==misCursos[j].id)
                        {
                            printf("%s", misCursos[j].nombre);
                            break;
                        }
                    }
                    printf("\n");
                }



        case 10:
            printf("Programa finalizado! \n");
            break;

        default:
            printf("Opcion incorrecta:!");
        }

        system("pause");
        system("cls");

    }
    while(opcion!=10);


    return 0;
}

