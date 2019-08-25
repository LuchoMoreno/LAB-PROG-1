#include <stdio.h>
#include <stdlib.h>

void sumar2 (int n1, int n2); // SEGUNDO PROTIPO. NO DEVUELVE // SI RECIBE.



int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese el numero 1: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el numero 2: ");
    scanf("%d", &numeroDos);

    sumar2(numeroUno, numeroDos);
    return 0;
}



void sumar2 (int n1, int n2)
{
    int suma;
    suma = n1 + n2;
    printf("El resultado es: %d", suma);
}
