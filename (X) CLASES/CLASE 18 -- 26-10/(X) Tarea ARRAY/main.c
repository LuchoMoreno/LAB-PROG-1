#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    char textoLargo[T][20];
    int i;

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
            printf("Se ha creado el archivo!!\n\n");

            pArchivo = fopen("texto.txt", "w"); // ABRIR EL ARCHIVO. // SI NO SE PUEDE DEVUELVE NULL

            for (i=0; i<T; i++)
            {
                printf("Ingrese el nombre %d: ", i);
                fflush(stdin);
                gets(textoLargo[i]);

                fprintf(pArchivo, textoLargo[i]);
                fprintf(pArchivo, "\n");
            }

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
            printf("Se ha podido leer el archivo!!\n\n");

            pArchivo = fopen("texto.txt", "r"); // LEER EL ARCHIVO. // SI NO EXISTE DEVUELVE NULL

            for (i=0; i<T; i++)
            {
                fgets(textoLargo[i], 20, pArchivo);
                puts(textoLargo[i]);
            }

            fclose(pArchivo);

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
