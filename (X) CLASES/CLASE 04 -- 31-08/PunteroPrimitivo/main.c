#include <stdio.h>
#include <stdlib.h>
void calcular (int*); // Valor copia del valor. Referencia - Recibe direccion de memoria

int main()
{
    int x = 5;
    calcular(&x); // Uso & para recibir direccion de memoria de la variable.
    printf("X=%d", x);
    return 0;
}

void calcular (int* p)
{
    *p=10; // Uso el * para que se meta en la direccion de memoria de X y modifique el valor.
}
