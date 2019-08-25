#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int* vector;
    int* pAux;
    int i;

    vector =(int*) malloc(sizeof(int)*T); // Se encarga de decirle al sistema operativo que vaya a la ram y que busque espacio en memoria.

    if (vector != NULL)
    {
        for (i=0; i<T; i++)
        {
            *(vector+i) = i+1;
        }

        for (i=0; i<T; i++)
        {
            printf("%d\n", *(vector+i));
        }
    }
    else
    {
        printf("No hay suficiente espacio!");
    }


    pAux = (int*) realloc(vector, sizeof(int) * (T+5));


    if (pAux!=NULL)
    {
        vector = pAux;

        for (i=0; i<T+5; i++)
        {
            *(vector+i) = i+1;
        }
        printf("ACA TENGO 10\n");

        for (i=0; i<T+5; i++)
        {
            printf("%d\n", *(vector+i));
        }


        printf("ACA TENGO 3\n");
        vector = (int*) realloc (vector, sizeof(int)*3);
        for (i=0; i<3; i++)
        {
            *(vector+i) = i+1;
        }
        for (i=0; i<3; i++)
        {
            printf("%d\n", *(vector+i));
        }

    }

    else
    {
        printf("No hay espacio.\n");
    }



    return 0;
}

/**
EJEMPLO 1:

int main()
{
    int* pEntero;

    pEntero =(int*) malloc(sizeof(int)); // Se encarga de decirle al sistema operativo que vaya a la ram y que busque espacio en memoria.

    if (pEntero != NULL)
    {
        *pEntero = 9;
        printf("%d", *pEntero);
    }
    else
    {
        printf("No hay suficiente espacio!");
    }


    return 0;
}

*/
