#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA;
    float numeroB;
    float sumando;
    float restando;
    float dividiendo;
    float multiplicando;
    int factorial;

    while(seguir=='s')
    {
        printf("\n-----------------------------------\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("-----------------------------------\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            numeroA = mostrarNumero("\nIngrese el numero X: ");
                break;
            case 2:
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
                break;
            case 3:
            numeroA = mostrarNumero("\nIngrese el numero X: ");
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
            sumando = funcionSumar(numeroA, numeroB);
                break;
            case 4:
            numeroA = mostrarNumero("\nIngrese el numero X: ");
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
            restando = funcionRestar(numeroA, numeroB);
                break;
            case 5:
            numeroA = mostrarNumero("\nIngrese el numero X: ");
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
            dividiendo = funcionDividir (numeroA, numeroB);
                break;
            case 6:
            numeroA = mostrarNumero("\nIngrese el numero X: ");
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
            multiplicando = funcionMultiplicar(numeroA, numeroB);
                break;
            case 7:
            numeroA = mostrarNumero("\nIngrese el numero X (El factorial se dara sobre este numero): ");
            factorial = funcionFactorial(numeroA);
                break;
            case 8:
            numeroA = mostrarNumero("\nIngrese el numero X (El factorial se dara sobre este numero): ");
            numeroB = mostrarNumero("\nIngrese el numero Y: ");
            sumando = funcionSumar(numeroA, numeroB);
            restando = funcionRestar(numeroA, numeroB);
            dividiendo = funcionDividir (numeroA, numeroB);
            multiplicando = funcionMultiplicar(numeroA, numeroB);
            factorial = funcionFactorial(numeroA);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Vuelva a intentarlo. Ingrese una opcion correcta\n");
        }
}
printf("\n\nGracias por utilizar la calculadora!");
return 0;
}
