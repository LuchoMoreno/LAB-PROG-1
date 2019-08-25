#include <stdio.h>
#include <stdlib.h>

/** \brief Incrementa en 10 el valor recibido
 *
 * \param int el valor sobre el que voy a incrementar
 * \return int[1] si el valor es mayor que 15. [0] Si no lo es.
 *
 */
int miFuncion (int*);
int miFuncion2 (int*);

int main()
{
    int miEntero = 3;
    int estado;

    estado = miFuncion2(&miEntero); // Se pasa la direccion de memoria de la variable que quiero incrementar

    printf("\nEl nuevo valor es %d\n", miEntero);

    if (estado == 1)
    {
    printf("\nValor mayor a 15\n");
    }
    else
    {
        printf("Es menor o igual a 15\n");
    }


    return 0;
}

int miFuncion (int* pValor) // TIENE QUE SER UN PUNTERO PARA PODER VER LA MODIFICACION DESDE AFUERA.
{
    int queDevuelve = 0;

    (*pValor) += 10; // SI HAGO ESTO MODOFICO EL VALOR. PONGO () PARA DARLE PRIORIDAD
    //valor += 10; // SI HAGO ESTO, MODOFICO LA DIRECCION DE MEMORIA.

    if (*pValor>15)
    {
        queDevuelve = 1;
    }

    return queDevuelve;
}

int miFuncion2 (int* pValor) // TIENE QUE SER UN PUNTERO PARA PODER VER LA MODIFICACION DESDE AFUERA.
{
    int queDevuelve = 0;
    int aux;
    aux = (*pValor);

    aux += 10; // SI HAGO ESTO MODOFICO EL VALOR. PONGO () PARA DARLE PRIORIDAD
    //valor += 10; // SI HAGO ESTO, MODOFICO LA DIRECCION DE MEMORIA.

    if (aux>15)
    {
        queDevuelve = 1;
    }

    (*pValor) = aux; // Aca descargo el valor del auxiliar nuevamente al puntero.

    return queDevuelve;
}
