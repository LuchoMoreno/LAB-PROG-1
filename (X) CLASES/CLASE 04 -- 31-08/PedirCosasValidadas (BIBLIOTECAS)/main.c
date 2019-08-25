#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

    int main()
    {
        int edad;
        float nota;
        char sexo;

        edad = pedirNumero( "Ingrese edad: ", 0, 18);

        nota = pedirFlotante("Ingrese la nota: ");
        sexo = pedirChar("Ingrese sexo F/M: ");

        printf("El legajo (entero) es: %d\n", edad);
        printf("La nota (flotante) es: %f\n", nota);
        printf("El sexo es: %c\n", sexo);

        return 0;
    }
