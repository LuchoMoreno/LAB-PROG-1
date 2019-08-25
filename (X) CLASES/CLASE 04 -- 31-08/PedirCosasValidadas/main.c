    #include <stdio.h>
    #include <stdlib.h>

    int pedirNumero(char[], int, int);
    int validarNumero (int, char[], int, int);
    float pedirFlotante(char[]);
    char pedirChar(char[]);



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

    int pedirNumero(char texto[], int minimo, int maximo)
    {
        int numero;
        printf("%s", texto);
        scanf("%d", &numero);

        numero = validarNumero(numero, texto, minimo, maximo);
        return numero;
    }

    int validarNumero (int numero, char texto[], int minimo, int maximo)
    {
        while(numero<minimo || numero>maximo)
            {
            printf("ERROR. %s", texto);
            scanf("%d", &numero);
            }
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
