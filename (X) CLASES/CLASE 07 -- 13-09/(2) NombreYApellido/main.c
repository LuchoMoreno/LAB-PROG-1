#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41]; // 38, + coma, 39, + espacio, 40, + barra0, 41.
    char buffer[1000];
    int i;

    puts("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);
    while (strlen(buffer) > 19)
        {
        puts("Reingrese su nombre: ");
        fflush(stdin);
        gets(buffer);
        }

    strcpy(nombre, buffer);


    puts("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);
    while (strlen(buffer) > 19)
        {
        puts("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer);
        }

    strcpy(apellido, buffer);
    strcpy(nombreCompleto, apellido);

    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]= toupper(nombreCompleto[0]);
    for(i=1; i<strlen(nombreCompleto); i++)
    {
        if (isspace(nombreCompleto[i]) != 0)
        {
            nombreCompleto[i+1]= toupper(nombreCompleto[i+1]);
        }

    }// end for

    puts(nombreCompleto);



    //printf("Hello world!\n");
    return 0;
}//end
