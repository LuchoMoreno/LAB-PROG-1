#include <stdio.h>
#include <stdlib.h>



int main()
{
    char nombre[50] = "Mi nombre es Lucho";

    FILE* pArchivo;

    pArchivo = fopen("texto.txt", "w"); // ABRIR EL ARCHIVO.

    fprintf(pArchivo, "%s, y mi apellido es Moreno. ", nombre);

    fclose(pArchivo);


    if (pArchivo==NULL)
    {
        printf("No se ha podido realizar");
    }
        else
        {
            printf("Se ha creado el archivo!\n\n");
        }



    return 0;
}
