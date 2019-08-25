#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int auxTam;
    Employee* auxEmpleado;

    ArrayList* lista; // A esto le hago un malloc para que apunte a direccion de memoria. Uso directamente la funcion.
    lista = al_newArrayList(); // Esto hace el malloc para que apunte al heap

    Employee* eEmpleado1; // Este es mi empleado.
    eEmpleado1 = (Employee*)malloc(sizeof(Employee));

    Employee* eEmpleado2; // Este es mi empleado.
    eEmpleado2 = (Employee*)malloc(sizeof(Employee));


    //*****************CASTEO A LOS EMPLEADOS.
    eEmpleado1->id = 1;
    strcpy(eEmpleado1->name, "Lucho");
    strcpy(eEmpleado1->lastName, "Moreno");
    eEmpleado1->isEmpty = 1;

    eEmpleado2->id = 2;
    strcpy(eEmpleado2->name, "Ana");
    strcpy(eEmpleado2->lastName, "Rodriguez");
    eEmpleado2->isEmpty = 1;
    //****************************************


    //******************AGREGO A LOS EMPLEADOS.
    al_add(lista, eEmpleado1);
    al_add(lista, eEmpleado2);


    auxTam = al_len(lista); // La funcion muestra el tamaño de la lista.
    printf("SIZE: %d\n", auxTam);
    //****************************************


    //**************PARA MOSTRAR LOS EMPLEADOS.
    int i;
        for(i=0; i<al_len(lista); i++)
        {
        auxEmpleado = (Employee*)al_get (lista, i);
        employee_print(auxEmpleado);
        }
    //****************************************


    //**************PARA ORDENAR LOS EMPLEADOS.
    printf("\n\nDESPUES DE ORDENAR:");
    al_sort(lista, employee_compare, 1);
        for(i=0; i<al_len(lista); i++)
        {
        auxEmpleado = (Employee*)al_get (lista, i);
        employee_print(auxEmpleado);
        }
    //****************************************




    return 0;
}
