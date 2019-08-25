#include <stdio.h>
#include <stdlib.h>

int main()
{

    int letra;
    int* pLetra;

    pLetra = &letra;

    printf("==================================\n");
    printf("TAM DE VARIABLE: %d\n", sizeof(letra));
    printf("TAM DE PUNTERO A VARIABLE: %d\n", sizeof(pLetra));
    printf("==================================\n");


    // METODO 1:
    printf("\n\nIngrese un char: ");
    fflush(stdin);
    *pLetra = getche();
    printf("\n%c", *pLetra);


    // METODO 2:
    printf("\n\nIngrese otro char: ");
    scanf("%c", pLetra);
    printf("%c\n\n\n", *pLetra);





/*
    char letra = 't';
    char* pLetra = NULL;

    pLetra = &letra;

    printf("%p\n", &letra); // Direccion memoria letra
    printf("%p\n", &pLetra); // Direccion memoria pLetra;


    printf("%c\n", letra); // Contenido letra.
    printf("%d\n", pLetra); // Contenido pLetra


    if (pLetra != NULL)
    {
        printf("%c\n", *pLetra);
    }

    printf("Hola a todos!\n\n");
*/
    return 0;
}
