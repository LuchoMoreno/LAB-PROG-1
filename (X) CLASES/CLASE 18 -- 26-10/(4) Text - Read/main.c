#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nombre[50];

    FILE* pArchivo;

    pArchivo = fopen("texto.txt", "r"); // LEER EL ARCHIVO. // SI NO EXISTE DEVUELVE NULL

    fgets(nombre, 50, pArchivo);

    fclose(pArchivo);


    if (pArchivo==NULL)
    {
        printf("No se ha podido leer");
    }
        else
        {
            printf("Se ha leido el archivo!\n\n");
        }


    puts(nombre);

    return 0;
}
