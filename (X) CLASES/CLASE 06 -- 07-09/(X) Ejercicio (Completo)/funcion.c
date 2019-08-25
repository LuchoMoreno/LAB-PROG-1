#include <stdio.h>

#include "funcion.h"


void UpperPrimerCaracter(char caracter[])
{
    int i;
    int largo;
    caracter[0]=toupper(caracter[0]);
    largo=strlen(caracter);
    for(i=0;i<largo;i++)
    {
        if(caracter[i]==' ')
        {
            i=i+1;
            caracter[i]=toupper(caracter[i]);
        }
    }
    return caracter;
}



int LongitudCadena (char cadena[])
{
    int i=0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}



void cargarDato (char vector[], int tam, char texto[])
{
    int tamDeCadena;

    printf("%s", texto); // Muestra el mensaje.

    fflush(stdin);
    gets(vector);

    while( tamDeCadena = LongitudCadena(vector) > 20)
    {
        printf("ERROR. Reingrese %s", texto); // Muestra el mensaje.
        fflush(stdin);
        gets(vector);
    }
}
