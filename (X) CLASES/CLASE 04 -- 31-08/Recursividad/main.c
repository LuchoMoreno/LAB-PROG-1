#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula el factorial de el numero ingresado por el usuario
 *
 * \param
 * \param int el numero.
 * \return int el factorial
 *
 */

int calcularFactorial (int);

int main()
{
    int factorial;
    factorial = calcularFactorial(5);
    printf("Factorial: %d", factorial);

    return 0;
}

int calcularFactorial (int numero)
{
    int factorial;

    if (numero==0)
    {
        factorial = 1;
    }
    else
    {
    factorial = numero * calcularFactorial (numero-1);
    }
    return factorial;
}
