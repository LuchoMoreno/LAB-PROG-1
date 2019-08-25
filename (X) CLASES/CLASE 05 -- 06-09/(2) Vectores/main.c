#include <stdio.h>
#include <stdlib.h>
#define T 5

// CARGA ALEATORIA:
// CARGA SECUENCIAL:
// CARGA POR EXTENSION: Es cuando al lado del vector se pone {1,2,3,4}

// constante: Elemento de la programacion que durante el ciclo de vida del programa

int main()
{
    int miVector[T] = {}; //subindice[] // ESTO ES CARGA POR EXTENSION.
    int i;
    int j;
    int aux;
    int buscar;
    int flag = 0;

    printf("El tamanio es: %d\n", sizeof(miVector));

    for(i=0; i<T; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &miVector[i]);
    }


    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
                if(miVector[i] > miVector[j]) //CRITERIO DE ORDENAMIENTO.
                {
                aux = miVector[i];
                miVector[i] = miVector[j];
                miVector[j] = aux;
                }

        }
    }




    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &buscar);
    for (i=0; i<T; i++)
    {
        if(buscar==miVector[i])
        {
            flag = 1;
            printf("POSICION: %d\n", i);
            break;
        }
    }

    if (flag==0)
    {
        printf("No se encontro el dato\n");
    }



    printf("\nMuestro TODO!\n");
    for (i=0; i<T; i++)
    {
        printf("%d\n", miVector[i]);

    }


    printf("\nMuestro los pares!\n");
    for (i=0; i<T; i++)
    {
        if (miVector[i] %2 == 0)
        {
        printf("%d\n", miVector[i]);
        }



    }

    return 0;
}



/*

int main()
{
    int miVector[5] = {5,9,3,4,7}; //subindice[] // ESTO ES CARGA POR EXTENSION.
    int i;

    printf("El tamanio es: %d\n", sizeof(miVector));

    for (i=0; i<5; i++)
    {
        printf("%d\n", miVector[i]);
    }

    printf("EL NUMERO ES: %d", miVector[2]);
    return 0;
}

*/
