#include "funciones.h"

ePersona* nuevaPersona()
{
    ePersona * miPersona;
    miPersona = (ePersona*) malloc(sizeof(ePersona));

    if (miPersona != NULL)
    {
        miPersona->id = 0;
        miPersona->edad = 0;
        strcpy(miPersona->nombre, " ");
    }//end if

    return miPersona;
}


ePersona* nuevaPersonaParametrizada(int id, char* nombre, int edad)
{
    ePersona* miPersona;
    miPersona = nuevaPersona();
    if (miPersona != NULL)
    {
        miPersona->id = id;
        miPersona->edad = edad;
        strcpy(miPersona->nombre, nombre);
    }//end if

    return miPersona;
}//end



void mostrarPersona (ePersona* personaParametro)
{
    printf("%d ----- %s ----- %d\n\n", personaParametro->id, personaParametro->nombre, personaParametro->edad);
}//end



int persona_getEdad (ePersona* personaParametro)
{
    int edad;
    edad = personaParametro->edad;

    return edad;
}//end



void persona_setEdad (ePersona* personaParametro, int edad)
{
    personaParametro->edad = edad;
}//end



