#include "Controller.h"

void controller(int (*funcion)(int), int valor)
{
    int retorno;
    retorno = funcion(valor);
    printf("El incremento es: %d", retorno);
}

