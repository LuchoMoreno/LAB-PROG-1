#include <stdio.h>
#include <stdlib.h>

int main()
{

    char linea1[50];
    char linea2[50];

    FILE* pArchivo;

    int opcion;

    printf("1: Crear archivo.\n");
    printf("2: Leer archivo.\n\n\n");
    printf("Ingrese una opcion: ");

    scanf("%d", &opcion);

    switch (opcion)
    {


    case 1:

        if (pArchivo!=NULL)
        {
            printf("Se ha creado el archivo!!\n");

            pArchivo = fopen("texto.txt", "w"); // ABRIR EL ARCHIVO. // SI NO SE PUEDE DEVUELVE NULL
            fprintf(pArchivo, "HOLA\n");
            fprintf(pArchivo, "CHAU");

            fclose(pArchivo);
        }
        else
        {
            printf("No se ha podido crear el archivo.!\n\n");
        }
        break;

    case 2:

        if (pArchivo!=NULL)
        {
            printf("Se ha podido leer el archivo!!\n");

            pArchivo = fopen("texto.txt", "r"); // LEER EL ARCHIVO. // SI NO EXISTE DEVUELVE NULL

            fgets(linea1, 50, pArchivo);
            fgets(linea2, 50, pArchivo);

            fclose(pArchivo);

            // ESTO SOLO MUESTRA POR CONSOLA.
            puts(linea1);
            puts(linea2);
        }
        else
        {
            printf("No se ha podido leer el archivo!\n\n");
        }
        break;


    default:
        printf("Opcion incorrecta");
    }


    return 0;
}
