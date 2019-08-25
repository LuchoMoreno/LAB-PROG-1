#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 15

int main()
{
    char nombre1[T] = "Alex";
    char nombre2[T] = "Maxwell";
    int cantidad;
    int compara;
    int i;

    printf("ANTES DE USAR ((STRCPY))\n");
    printf("El nombre 1 es: %s\n", nombre1);
    printf("El nombre 2 es: %s\n", nombre2);

    strcpy(nombre1, nombre2); // destino - origen. Siempre hay que asegurarse de que destino pueda soportar lo que el origen esta pasando


    printf("\nDESPUES DE USAR ((STRCPY))\n");
    printf("El nombre 1 es: %s\n", nombre1);
    printf("El nombre 2 es: %s\n", nombre2);


//____________________________________________________

    /*printf("Ingrese su nombre: ");

    fflush(stdin);
    gets(nombre);
    */

//_______________________________________________________

    printf("\nLa siguiente funcion ((STRICMP)) va a comparar. Como son iguales, da resultado 0\n");
    compara = stricmp(nombre1, nombre2); // Recibe dos constantes a char. Dos cadenas. Devuelve un entero
    printf("Comparacion: %d", compara); // puede devolver 0, -1, o 1. Si son iguales, 0.

    if (compara == 0)
    {
        printf("\nSon iguales.");
    }
    else
    {
        if (compara>0)
        {
            printf("\n%s esta antes %s", nombre2, nombre1);
        }

        if (compara<0)
        {
            printf("\n%s esta antes %s", nombre1, nombre2);
        }
    }


    printf("\n\nLa funcion ((STRUPR)) va a convetir todo a MAYUSCULA.\n");
    strupr(nombre2); // Convierte todo a mayuscula.
    printf("El nombre 2 es: %s", nombre2);


    printf("\n\nLa funcion ((STRLWR)) va a convetir todo a MINUSCULA.\n");
    strlwr(nombre2); // Convierte todo a minuscula.
    printf("El nombre 2 es: %s", nombre2);


    printf("\n\nLa funcion ((STRCAT)) va a concatenar dos strings.\n");
    strcat(nombre2, " ");
    strcat(nombre2, " + CONCATENADO");
    //strcat(nombre2, nombre1); // Recibe dos strings.
    printf("El nombre 2 es: %s", nombre2);


    printf("\n\nY la funcion ((STRLEN)) va a devolver el tam de la cadena.\n");
    cantidad = strlen(nombre2); // Devuelve el tamaño de una cadena.
    printf("La cantidad de caracteres de nombre 2 es: %d\n\n\n", cantidad);

    return 0;
}

/*
// ESTE FOR ME MUESTRA TODA LA CADENA SI NO EXISTIERA %S
    for (i=0; i<strlen(nombre); i++)
    {
        printf("%c", nombre[i]);
    }


    //

    while (nombre[i] != '\0')
    {
        printf("%c", nombre[i]);
        i++;
    }
*/
