#include <stdio.h>
#include <stdlib.h>

int main()
{

    char respuesta='s';

    int numero;
    int cantidadPositivos=0;
    int cantidadNegativos=0;
    int cantidadCeros=0;
    int cantidadNumerosPares=0;

    int sumaPositivos = 0;
    int sumaNegativos;



    do
    {
        printf("Ingrese numero: ");
        scanf("%d", &numero);

        if (numero>0)
        {
            sumaPositivos = sumaPositivos + numero;
        }
        else
        {
            sumaNegativos = sumaNegativos + numero;
        }

        // VARIABLE DE POSITIVOS - NEGATIVOS
        if (numero > 0){
            cantidadPositivos++;
        }
        else if (numero < 0) {
            cantidadNegativos++;
        }
        else{
            cantidadCeros++;
        }

        // VARIABLE DE CONTADOR DE PARES.
        if (numero%2 == 0 && numero!=0)
        {
            cantidadNumerosPares++;
        }


    printf("Desea ingresar mas numeros S/N?");
    fflush(stdin);
    scanf("%c", &respuesta);


    }while (respuesta == 's');

    printf("La suma total de positivos es: %d", sumaPositivos);
    printf("La suma total de negativos es: %d", sumaNegativos);
    printf("\nLa cantidad de positivos es: %d", cantidadPositivos);
    printf("\nLa cantidad de negativos es: %d", cantidadNegativos);
    printf("\nLa cantidad de ceros es: %d", cantidadCeros);
    printf("\nLa cantidad de numeros pares es: %d", cantidadNumerosPares);



    return 0;
}
