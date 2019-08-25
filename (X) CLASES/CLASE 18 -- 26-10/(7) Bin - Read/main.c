#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    FILE * pArchivo;

    pArchivo = fopen ("archivoBinario.bin", "rb"); // Modo lectura binaria.

    fread(&numero, sizeof(int), 1, pArchivo);

    fclose(pArchivo);

    printf("El numero es: %d", numero);

    return 0;
}
