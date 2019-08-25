#include <stdio.h>
#include <stdlib.h>

#define T 20

int main()
{
    int numero = 5;
    int numerorandom[5];
    int i;
    int contador=0;

    float numero2 = 3.3;

    char charcitoxD = 'a';
    char nombres[6][20];

    printf("%d %f %c\n", numero, numero2, charcitoxD);

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numerorandom[i]);

        if(numerorandom[i] % 2 == 0)
        {
            contador++;
        }
    }

    for (i=0; i<5; i++)
    {
        printf("\nEl numero ingresado es: %d", numerorandom[i]);
    }

    printf("\nLa cantidad de numeros pares son: %d", contador);

        //-------------------------------------------------------

    printf("\n\nAhora ingrese 5 nombres:\n");


    for(i=0; i<5; i++)
    {
        printf("Nombre numero %d: ", i);
        fflush(stdin);
        gets(nombres[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("\nEl nombre %d es: %s",i, nombres[i]);
    }


    printf("\n\n-------------------\n");
    printf("PROGRAMA FINALIZADO\n");
    printf("-------------------");
    return 0;
}

    /*

    Datos enteros: INT  4 bytes         %d  %i
    Datos flotantes: FLOAT  4 bytes     %f
    Caracter: CHAR  1 byte              %c

    */
