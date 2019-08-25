#include <stdio.h>
#include <stdlib.h>

int sumar4 (int, int); // SEGUNDO PROTIPO. NO DEVUELVE // SI RECIBE.



int main()
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese numero 1: ");
    scanf("%d", &numeroUno);

    printf("Ingrese numero 1: ");
    scanf("%d", &numeroDos);

    suma = sumar4(numeroUno, numeroDos);
    printf("El resultado es: %d", suma);
    return 0;
}



int sumar4 (int numeroUno, int numeroDos)
{
    int suma;
    suma = numeroUno + numeroDos;
    return suma;
}
