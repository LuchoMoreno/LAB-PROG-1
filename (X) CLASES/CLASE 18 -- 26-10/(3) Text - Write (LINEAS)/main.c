#include <stdio.h>
#include <stdlib.h>



int main()
{

    FILE* pArchivo;

    pArchivo = fopen("texto.txt", "w"); // ABRIR EL ARCHIVO.
    fprintf(pArchivo, "HOLA\n");
    fprintf(pArchivo, "CHAU");

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
