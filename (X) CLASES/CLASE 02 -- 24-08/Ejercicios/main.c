#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad;
    int i;


    int cantidadPositivos=0;
    int cantidadNegativos=0;
    int cantidadCeros=0;
    int cantidadNumerosPares=0;

    int sumaPositivos = 0;
    int sumaNegativos;

    printf("Cuantos numeros quiere ingresar? ");
    scanf("%d", &cantidad);

    int numeros[cantidad];

    for(i=0; i<cantidad; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i]>0)
        {
            sumaPositivos = sumaPositivos + numeros[i];
        }
        else
        {
            sumaNegativos = sumaNegativos + numeros[i];
        }

        // VARIABLE DE POSITIVOS - NEGATIVOS
        if (numeros[i] > 0){
            cantidadPositivos++;
        }
        else{
            cantidadNegativos++;
        }

        // VARIABLE DE CONTADOR DE PARES.
        if (numeros[i]%2 == 0 && numeros[i]!=0)
        {
            cantidadNumerosPares++;
        }


    }

    printf("La suma total de positivos es: %d", sumaPositivos);
    printf("\nLa cantidad de positivos es: %d y la de negativos es: %d", cantidadPositivos, cantidadNegativos);
    printf("\nLa cantidad de numeros pares es: %d", cantidadNumerosPares);



    return 0;
}
