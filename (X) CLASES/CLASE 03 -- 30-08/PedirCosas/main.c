#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char[]);
float pedirFlotante(char[]);
char pedirChar(char[]);

int main()
{
    int legajo;
    float nota;
    char sexo;

    legajo = pedirNumero( "Ingrese legajo: ");
    nota = pedirFlotante("Ingrese la nota: ");
    sexo = pedirChar("Ingrese sexo F/M: ");

    printf("El legajo (entero) es: %d\n", legajo);
    printf("La nota (flotante) es: %f\n", nota);
    printf("El sexo es: %c\n", sexo);

    return 0;
}

int pedirNumero(char texto[])
{
    int numero;
    printf("%s", texto);
    scanf("%d", &numero);
    return numero;
}

float pedirFlotante(char texto[])
{
    float numeroFloat;
    printf("%s", texto);
    scanf("%f", &numeroFloat);
    return numeroFloat;
}

char pedirChar(char texto[])
{
    char letraChar;
    printf("%s", texto);
    fflush(stdin);
    scanf("%c", &letraChar);
    return letraChar;
}
