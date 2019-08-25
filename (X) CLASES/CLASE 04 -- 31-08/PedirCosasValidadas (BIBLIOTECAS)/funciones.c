#include <stdio.h>
#include "funciones.h"


    int pedirNumero(char texto[], int minimo, int maximo)
    {
        int numero;
        printf("%s", texto);
        scanf("%d", &numero);

        numero = validarNumero(numero, texto, minimo, maximo);
        return numero;
    }

    int validarNumero (int numero, char texto[], int minimo, int maximo)
    {
        while(numero<minimo || numero>maximo)
            {
            printf("ERROR. %s", texto);
            scanf("%d", &numero);
            }
        return numero;
    }

    float pedirFlotante(char texto[])
    {
        float numeroFloat;
        printf("%s", texto);
        scanf("%f", &numeroFloat);
        return numeroFloat;
    }

    char pedirChar(char texto[])
    {
        char letraChar;
        printf("%s", texto);
        fflush(stdin);
        scanf("%c", &letraChar);
        return letraChar;
    }
