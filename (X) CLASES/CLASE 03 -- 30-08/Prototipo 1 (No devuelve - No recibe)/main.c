#include <stdio.h>
#include <stdlib.h>
// si no se escribe void, por defecto recibe un entero.
void sumar1 (void); // PRIMER PROTOTIPO. NO DEVUELVE // NO RECIBE.
void sumar2 (int n1, int n2); // SEGUNDO PROTIPO. NO DEVUELVE // SI RECIBE.



int main()
{
    sumar1();
    return 0;
}

void sumar1(void)
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingrese el numero 1: ");
    scanf("%d", &numero1);

    printf("Ingrese el numero 2: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;

    printf("La suma es: %d", suma);
}

void sumar2 (int n1, int n2);
{
    int suma;
    suma = n1 + n2;
    return suma;
}
