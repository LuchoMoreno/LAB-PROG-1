#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 10

int main()
{

    EMovie pelicula[TAM];
    char seguir='s';
    int opcion=0;

    int funcionAlta;
    int funcionBaja;
    int funcionModificar;


    if(cargarArchivo(pelicula,TAM))
	{
		printf("No se ha podido cargar el archivo.");
	}
	else
	{
		printf("TODO SE HA CARGADO CON EXITO!\n");
	}

      system("pause");
      system("cls");

    while(seguir=='s')
    {
        printf("\n::::::::::::::::::::\n");
        printf("(1) Agregar pelicula\n");
        printf("(2) Borrar pelicula\n");
        printf("(3) Modificar pelicula\n");
        printf("(4) Generar pagina web (HTML)\n");
        printf("(5) Mostrar peliculas en estructura\n");
        printf("(6) Salir\n");
        printf("::::::::::::::::::::\n");

        scanf("%d",&opcion);

        switch(opcion)
        {

            case 1:
            funcionAlta = altaDePelicula(pelicula, TAM);
                break;

            case 2:
            funcionBaja = bajaDePelicula(pelicula, TAM);
                break;

            case 3:
            funcionModificar = modificacionDePelicula(pelicula, TAM);
               break;

            case 4:
            crearUnHTML(pelicula, TAM);
                if(guardarArchivo(pelicula, TAM))
					{
						printf("\nNo se ha podido abrir el fichero. Verifique que exista.\n");
					}
					else
					{
						printf("SE HA GUARDADO EL ARCHIVO CON EXITO.\n");
					}
                break;

            case 5:
            mostrarPuntero(pelicula, TAM);
                break;

            case 6:
                seguir = 'n';
                break;

            default:
                printf("\nUsted ha ingresado algo incorrecto. Intente nuevamente: ");
                break;
        }

    system("pause");
    system("cls");
    }

    printf("FIN DEL PROGRAMA");
    return 0;
}
