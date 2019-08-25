#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id[100];
    char nombre[100];
    char apellido[100];
    char email[100];
    char sexo[100];
    char sueldo[100];

    FILE* pArchivo;

    if (pArchivo!=NULL)
    {
        pArchivo = fopen("empleados.csv", "r");

        while(!feof(pArchivo))
        {

            fscanf(pArchivo, "%[^,], %[^,], %[^,], %[^,], %[^,], %[^\n]\n", id, nombre, apellido,email, sexo, sueldo);

            printf("%s--%s--%s--%s--%s--%s\n", id, nombre, apellido, email, sexo, sueldo);
        }

    }

    return 0;
}
