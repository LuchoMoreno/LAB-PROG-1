#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



typedef struct
{
    int entero;
    char caracter;
} eDato;

int compararPorEntero(void*, void*);

int main()
{
    LinkedList* lista;
    lista = ll_newLinkedList();
    eDato* aux;
    int cantidad;
    int i;

    eDato* d1 = (eDato*) malloc(sizeof(eDato));
    eDato* d2 = (eDato*) malloc(sizeof(eDato));
    eDato* d3 = (eDato*) malloc(sizeof(eDato));
    eDato* d4 = (eDato*) malloc(sizeof(eDato));
    eDato* d5 = (eDato*) malloc(sizeof(eDato));

    d1->entero = 1;
    d1->caracter = 'A';
    d2->entero = 2;
    d2->caracter = 'B';
    d3->entero = 3;
    d3->caracter = 'C';
    d4->entero = 4;
    d4->caracter = 'D';
    d5->entero = 5;
    d5->caracter = 'E';

    ll_add(lista, d1);
    ll_add(lista, d2);
    ll_add(lista, d3);
    ll_add(lista, d4);
    ll_add(lista, d5);
    ll_add(lista, d3);

    // MUESTRA LA CANTIDAD DE ELEMENTOS DE LA LISTA
    cantidad = ll_len(lista);
    printf("Cantidad de elementos: %d\n", cantidad);
    for(i=0; i<cantidad; i++)
    {
        aux = (eDato*) ll_get(lista, i);
        printf("%d -- %c\n", aux->entero, aux->caracter);
    }

    // REMOVER UN ELEMENTO DE LA LISTA
    ll_remove(lista, 2);
    cantidad = ll_len(lista);
    printf("\nCantidad de elementos: %d\n", cantidad);
    for(i=0; i<cantidad; i++)
    {
        aux = (eDato*) ll_get(lista, i);
        printf("%d -- %c\n", aux->entero, aux->caracter);
    }

    // ORDNEAR LISTA POR COMPARACION DE ENTEROS
    ll_sort(lista, compararPorEntero, 1);
    cantidad = ll_len(lista);
    printf("\nCantidad de elementos: %d\n", cantidad);
    for(i=0; i<cantidad; i++)
    {
        aux = (eDato*) ll_get(lista, i);
        printf("%d -- %c\n", aux->entero, aux->caracter);
    }

    return 0;
}

int compararPorEntero(void* d1, void* d2)
{
    int comp=0;
    eDato* dato1 = (eDato*) d1;
    eDato* dato2 = (eDato*) d2;

    if(dato1->entero>dato2->entero)
    {
        comp= 1;
    }
    else if(dato1->entero<dato2->entero)
    {
        comp= -1;
    }

    return comp;
}



/* -------------------- LIMPIAR LISTA --------------------

        ll_clear(lista);
        cantidad = ll_len(lista);
        printf("\nCantidad de elementos: %d\n", cantidad);
*/


