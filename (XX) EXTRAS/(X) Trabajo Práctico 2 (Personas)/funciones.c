#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "funciones.h"

#define T 20
#define OCUPADO 0
#define LIBRE 1

//************INICIALIZACIONES****************//

void inicializarHardcodePersonas(ePersona lista[])
{
    char nombre[][50]={"Maru","Juan","Maxi","Pepe","Sara", "Robb","Peps"};
    int edad[T] = {2,49,29,23,11,89,20};
    int estado[T] = {1,1,1,1,1,1,1};
    int dni[T] = {42872794,33735917,42316090,25319627,32522023,28606634,39086865};

    int i;
    for(i=0; i<T; i++)
    {
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].edad=edad[i];
        lista[i].estado=estado[i];
        lista[i].dni=dni[i];
    }
}

int inicializacionPrincipal(ePersona lista[],int t)
{
    int retorno = -1;
    int i;
    if(t > 0 && lista != NULL)
    {
        retorno = 0;
        for(i=0; i<t; i++)
        {
            lista[i].estado=0;
        }
    }
    return retorno;
}


//************INICIALIZACIONES****************//


//************GETS****************//
int getInt (char mensaje[])
{
    int auxiliarInt;
    printf("%s", mensaje);
    scanf("%d", &auxiliarInt);
    return auxiliarInt;
}

char getChar (char mensaje[])
{
    char auxiliarChar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%s", &auxiliarChar);
    return auxiliarChar;
}

float getFloat(char mensaje[])
{
    float auxiliarFloat;
    printf("%s", mensaje);
    scanf("%f", &auxiliarFloat);
    return auxiliarFloat;
}

//************GETS****************//


//************VALIDACIONES****************//
void stringToUpper(char caracter[])
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



int esNumerico (char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        return 0;
        i++;
    }
    return 1;
}



int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones = 0;
    while (str[i] != '\0')
    {
        if ((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
            return 0;
        if (str[i] == '-')
            contadorGuiones++;
        i++;
    }
    if (contadorGuiones==1)
        return 1;
        return 0;
}



int esSoloLetras(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        return 0;
        i++;
    }
    return 1;
}



int esAlfaNumerico(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] <  'a' || str [i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
        return 0;
        i++;
    }
    return 1;
}



void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", mensaje);
}



int getStringLetras(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar); // (Se llama a la funcion de arriba)
    if(esSoloLetras(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}


int getStringNumeros(char mensaje[], char input[])
{
    char auxiliar[256];
    getString(mensaje, auxiliar); // (Se llama a la funcion de arriba)
    if(esNumerico(auxiliar))
    {
        strcpy(input, auxiliar);
        return 1;
    }

    return 0;
}

//************VALIDACIONES****************//



//************ESPECIFICAS DEL TRABAJO PRACTICO 2****************//

int mostrarUnSoloUsuario(ePersona lista)
{
    printf("%15s %15d %20d\n", lista.nombre, lista.edad, lista.dni);

}



void mostrarListaUsuarios(ePersona lista[], int t)
{
    int retorno = -1;
    int i;
    if(t > 0 && lista != NULL)
    {
        retorno = 0;
        for(i=0; i<t; i++)
        {
        if(lista[i].estado==1)
            {
            mostrarUnSoloUsuario(lista[i]);
            }
        }
    }
    return retorno;
}



int obtenerEspacioLibre(ePersona lista[], int t)
{
    int retorno = -1;
    int i;
    if(t > 0 && lista != NULL)
    {
        retorno = -2;
        for(i=0;i<t;i++)
        {
            if(lista[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



int altaDePersonas(ePersona lista[],int t)
{
    int retorno =-1;
    int i;
    char auxiliarDni[50];
    char auxiliarEdad[50];
    int dni;
    int edad;

    i = obtenerEspacioLibre(lista, t);
    if(i>=0)
    {
        //Pedir el nombre
        printf("Ingrese un nombre:");
        fflush(stdin);
        gets(lista[i].nombre);
        stringToUpper(lista[i].nombre); // LLAMADA A LA FUNCION PARA 1ER LETRA MAYUSCULA.
        //Validar que se haya pedido el nombre.
        while(esSoloLetras(lista[i].nombre)==0)
        {
            printf("Usted ha ingresado un tipo de nombre incorrecto. Ingrese nuevamente: ");
            fflush(stdin);
            gets(lista[i].nombre);
        }


        //Pedir la edad
        printf("Ingrese la edad: ");
        fflush(stdin);
        gets(auxiliarEdad);
        //Validar que se haya ingresado la edad numérica.
        while(esNumerico(auxiliarEdad)==0)
        {
            printf("Usted ha ingresado un tipo de edad incorrecta. Ingrese nuevamente: ");
            fflush(stdin);
            gets(auxiliarEdad);
        }
        edad=atoi(auxiliarEdad);
        lista[i].edad=edad;


        //Pedir un DNI
        printf("Ingrese el DNI: ");
        fflush(stdin);
        gets(auxiliarDni);
        //Validar que se haya ingresado un DNI correcto.
        while(esNumerico(auxiliarDni)==0)
        {
            printf("Usted ha ingresado un tipo de DNI incorrecto. Ingrese nuevamente: ");
            fflush(stdin);
            gets(auxiliarDni);
        }
        dni=atoi(auxiliarDni);
        lista[i].dni=dni;


        //Forzar el estado a 1
        lista[i].estado=1;


        retorno=0;
        printf("\nEL USUARIO FUE INGRESADO CON EXITO!\n\n");
        mostrarListaUsuarios(lista, t);
    }
    else
    {
        printf("\nNo quedan lugares libres!\n");
    }
    return retorno;
}



int buscarPorDni(ePersona lista[], int dni, int t)
{

    for(int i=0; i<t; i++)
    {
        if(lista[i].estado==1 && lista[i].dni==dni)
        {
            return i;
        }
    }
    return -1;
}



int bajaDePersona(ePersona lista[],int t)
{
    int i;
    int opcion;
    int opcion2;
    mostrarListaUsuarios(lista, t);

    printf("\nIngrese el dni del usuario que quiera borrar. Si introduce un DNI erroneo, el programa comenzara nuevamente.\n");
    scanf("%d",&opcion);

    for(i=0; i<t; i++)
    {
        if(opcion==lista[i].dni)
        {
            printf("¿Desea dar de baja el usuario? Ingrese 1 para SI // Ingrese 2 para NO.\n");
            scanf("%d",&opcion2);

            switch(opcion2)
            {
            case 1:
                lista[i].estado = 0;
                lista[i].dni= 0;
                printf("El usuario ha sido dado de baja.\n");
                break;
            case 2:
                printf("No se ha modificado ningun usuario.\n");
                break;
            default:
                printf("Usted ingreso una opcion invalida. Vuelva a intentarlo nuevamente.\n");
                break;
            }

        }
    }

}



void ordenarSegunNombre(ePersona lista[], int t)
{
    ePersona auxiliarPersona; // Variable para definir un auxiliar
    int i; // Variable de conteo 1
    int j; // Variable de conteo 2
    for(i=0; i<t-1; i++) // Primer conteo
    {
        for(j=i+1; j<t; j++) // Segundo conteo
        {

                if(strcmp(lista[i].nombre,lista[j].nombre)>0) // Compara ambas estructuras con distinto indice.
                {
                    auxiliarPersona=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxiliarPersona;
                }

        }
    }
}



void mostrarGrafico(ePersona lista[])
{
    int flag;
    int menor18=0;
    int mas18=0;
    int mas35=0;
    int m;
    int i;
    for(i=0; i<20; i++)
    {
        if(lista[i].estado==1)
        {
            if(lista[i].edad < 18)
            {
                menor18++;
            }
            else if(lista[i].edad > 18&&lista[i].edad <= 35)
            {
                mas18++;
            }
            else if(lista[i].edad > 35)
            {
                mas35++;
            }
        }
    }
    if(menor18 >= mas18 && menor18 >= mas35)
    {
        m=mas18;
    }
    else if(mas18 >= menor18 && mas18 >= mas35)
    {
        m=mas18;
    }
    else
    {
        m=mas35;
    }
    for(i=m; i>0; i--)
    {
        flag=0;
        printf("\n");
        if(i <= menor18)
        {
            printf("\t|");
            flag=1;
        }
        if(i <= mas18)
        {
            if(flag == 1)
            {
                printf("\t  |");
                flag=2;
            }
            else if(flag == 0)
            {
                printf("\t\t  |");
                flag=2;
            }

        }
        if(i <= mas35)
        {
            if(flag == 0)
            {
                printf("\t\t\t    |");
            }
            else if(flag == 1)
            {
                printf("\t\t    |");
            }
            else if(flag == 2)
            {
                printf("\t    |");
            }
        }
    }
    if(mas18==0 && menor18==0 && mas35==0)
    {
        printf("\nEs necesario que existan usuarios para que el grafico funcione.\n");
    }
    else
    {
        printf("\n|------<18------19-35------>35------|");
        printf("\n        %d         %d         %d",menor18,mas18,mas35);
    }
}
