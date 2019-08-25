#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 4;

    FILE * pArchivo;

    pArchivo = fopen ("archivoBinario.bin", "wb"); // Modo escritura binaria.

    fwrite(&numero, sizeof(int), 1, pArchivo);

    fclose(pArchivo);


    return 0;
}
