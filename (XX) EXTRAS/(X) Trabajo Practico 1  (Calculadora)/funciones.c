#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float mostrarNumero(char mensaje[])
{
float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    printf("El numero ingresado es: %.4f\n", numero);
    return numero;
}



float funcionSumar(float numeroA, float numeroB)
{
    float suma;
    suma = (numeroA+numeroB);
    printf("\nEl resultado de la suma es: %.4f\n", suma);
    return suma;
}



float funcionRestar (float numeroA, float numeroB)
{
    float resta;
    resta = (numeroA-numeroB);
    printf("\nEl resultado de la resta es: %.4f\n", resta);
    return resta;
}



float funcionDividir (float numeroA, float numeroB)
{
    float division;
    if (numeroB == 0) // Se habilita la condicion de IF, para qué en caso que se ingrese un numero negativo, avise del error.
    {
        printf("\nLa division entre cero no esta permitida. Resultado = Infinito.\n");
    }
    else
    {
    division = (float)numeroA/numeroB;
    printf("\nEl resultado de la division es: %.4f\n", division);
    }
    return division;
}



float funcionMultiplicar (float numeroA, float numeroB)
{
    float multiplicacion;
    multiplicacion = (numeroA*numeroB);
    printf("\nEl resultado de la multiplicacion es: %.4f\n", multiplicacion);
    return multiplicacion;
}



int funcionFactorial (int numeroA)
{
    int fac =(int)numeroA;
    int factorial=1;
    if(numeroA<=0)
    {
    printf("\nError. No se puede sacar el factorial de un numero negativo ni de 0");
    }
    else
    {
    for(int i=1; i<=(int)numeroA; i++)
        {
            factorial *= i;
        }
         printf("\nEl factorial del primer numero (Numero X) es: %d \n",factorial);
    }
}











