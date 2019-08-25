#include <stdio.h>
#include <stdlib.h>


int main()
{
    char linea1[50];
    char linea2[50];

    FILE* pArchivo;

    pArchivo = fopen("texto.txt", "r"); // LEER EL ARCHIVO. // SI NO EXISTE DEVUELVE NULL

    fgets(linea1, 50, pArchivo);
    fgets(linea2, 50, pArchivo);

    fclose(pArchivo);


    if (pArchivo==NULL)
    {
        printf("No se ha podido leer");
    }
        else
        {
            printf("Se ha leido el archivo!\n\n");
        }


    puts(linea1);
    puts(linea2);

    return 0;
}
