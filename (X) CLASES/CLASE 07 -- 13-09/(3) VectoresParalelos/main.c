#include <stdio.h>
#include <stdlib.h>
#define T 3

int main()
{
    char nombreCompleto[T][20];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("Ingrese la nota 1: ");
        scanf("%d", &nota1[i]);

        printf("Ingrese la nota 2: ");
        scanf("%d", &nota2[i]);

        printf("Ingrese la nota 3: ");
        scanf("%d", &nota3[i]);

        promedio[i] = (float)(nota1[i] + nota2[i] + nota3[i]) / T;
    }

    printf("%s %6s %6s %6s %12s\n", "Nombre", "Nota1", "Nota2", "Nota3", "Promedio" );
    for(i=0; i<T; i++)
    {
        printf("%5s %5d %5d %5d %16f \n", nombreCompleto[i], nota1[i], nota2[i], nota3[i], promedio[i]);
    }

    return 0;
}
