#include <stdio.h>
#include <stdlib.h>

void cargar(int*, int);
void mostrar (int*, int);


int main()
{
    int array[5];

    /**
    int* pEntero;
    pEntero = array;
    */

    //Equivalente a:
    //pEntero = &array;
    //pEntero = &array[0];

    cargar(array, 5);
    mostrar(array, 5);

    return 0;
}

void cargar(int* pArray, int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pArray+i); // NO HACE FALTA PONER &.
    }
}

void mostrar (int* pArray, int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        printf("%d\n", *(pArray+i)); // SI FUERA *pEntero+1 suma todo el tiempo 5+1, 5+2, 5+3.
    }

}





    /** EJEMPLO 1: COMO SE MUESTRAN LAS COSAS
    ================================================================
    pEntero = &entero;

    printf("LA DIRECCION ES: %d", &entero);
    printf("\nLA DIRECCION ES: %d", pEntero);
    //printf("\n%d", *(pEntero-1));
    printf("\nLA DIRECCION SUMADO 0 ES: %d", pEntero+0);
    printf("\nLA DIRECCION SUMADO 1 ES: %d", pEntero+1);
    printf("\nLA DIRECCION SUMADO 2 ES: %d", pEntero+2);

    printf("\nSi utilizo un contador. La direccion sumado ++ es: ");
    pEntero++;
    ================================================================
    */



    /** EJEMPLO 2: ARRAY INICIALIZADO
    ================================================================
    int i;
    int array[5] = {5,9,6,7,1};
    int* pEntero;

    pEntero = array;
    //Equivalente a:
    //pEntero = &array;
    //pEntero = &array[0];

    for (i=0; i<5; i++)
    {
        printf("%d\n", *(pEntero+i)); // SI FUERA *pEntero+1 suma todo el tiempo 5+1, 5+2, 5+3.
    }
    ================================================================
    */


