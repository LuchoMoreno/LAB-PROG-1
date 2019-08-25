#include "funciones.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


// FUNCIONES DE MUESTREO DE PUNTEROS.

int mostrarPuntero(EMovie* pelicula ,int t)
    {
        int i;
        int retorno=0;
        if(pelicula!=NULL && t>0)
        {
          retorno=1;

        for (i=0;i<t;i++)
          {
              if((pelicula+i)->estadoPelicula==1)
              {
                if(!mostrarUno(pelicula+i))
                  {
                     printf("No se ha podido mostrar.");
                  }
              }
           }
        }
        return retorno;
    }


int mostrarUno(EMovie* pelicula)
    {
        int retorno=0;
        if(pelicula!=NULL)
        {
            retorno=1;
            printf("\n::::::::::::::::::::\n");
            printf("ID : %d\n",pelicula->idPelicula);
            printf("Nombre : %s\n",pelicula->titulo);
            printf("Genero : %s\n",pelicula->genero);
            printf("Duracion : %d min\n",pelicula->duracion);
            printf("Descripcion : %s\n",pelicula->descripcion);
            printf("Puntaje : %d\n",pelicula->puntaje);
            printf("Link de Imagen : %s\n",pelicula->linkImagen);
            printf("::::::::::::::::::::\n");
        }
        return retorno;
    }


// FUNCIONES DE OBTENCION - ASIGNACION - INICIALIZACION.
int obtenerEspacioLibrePelicula(EMovie* pelicula,int t)
{

    int retorno = -1;
    int i;
    if(t > 0 && pelicula != NULL)
    {
        retorno = -2;
        for(i=0;i<t;i++)
        {
            if((pelicula+i)->estadoPelicula==0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int iniciarEstadoPersona(EMovie* pelicula,int t)
{
    int retorno = -1;
    int i;

        retorno = 0;
        for(i=0; i<t; i++)
        {
            if((pelicula+i)->estadoPelicula!=1)
            {
                (pelicula+i)->estadoPelicula=0;
                (pelicula+i)->idPelicula=0;
            }

        }
    return retorno;
}

int idAutoIncremental(EMovie* pelicula,int t)
{
    int retorno = 0;
    int i;
    if(t > 0 && pelicula != NULL)
    {
        for(i=0; i<t; i++)
        {
            if((pelicula+i)->estadoPelicula == 1)
            {
                    if((pelicula+i)->idPelicula>retorno)
                    {
                         retorno=(pelicula+i)->idPelicula;
                    }
            }
        }
    }
    return retorno+1;
}


int buscarPorId(EMovie* pelicula, int t,int id)
{
int i;
int retorno=-1;
for(i=0;i<t;i++)
{
    if((pelicula+i)->idPelicula==id)
    {
        retorno=i;
    }
}
return retorno;
}


// FUNCIONES YOUTUBE CON PUNTEROS
int esNumerico(char* str)
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] < '0' || str[i] > '9')||(isspace(str[0])!=0))
           return 0;
       i++;
   }
   return 1;
}

int esAlfaNumerico(char* str)
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
       return 0;
       i++;
   }
   return 1;
}

int esSoloLetras(char* str)
{
   int i=0;

   while(str[i] != '\0')
   {
        if((str[i] != ' ') && (str[i] < 'a' ||str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        return 0;
        i++;
   }
   return 1;
}


// FUNCIONES GET PESADAS
void getString(char* mensaje,char* input)
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(input);

}

int getStringLetras(char* mensaje,char* input)
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getStringNumeros(char* mensaje,char* input)
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}



int getAlfaNumerico(char* mensaje,char* input)
{
    char aux[256];
    getString(mensaje,aux);
    if(esAlfaNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


// ESPECIFICAS DE TP3

int altaDePelicula(EMovie* pelicula, int t)
{
    int id;

    char auxiliarTitulo[50];

    char auxiliarGenero[50];

    char auxiliarDuracion[20];
    int duracion;

    char auxiliarDescripcion[200];

    char auxiliarPuntaje[20];
    int puntaje;

    char auxiliarLinkImagen[1500];

    int inicializar;
    int retorno=-2;
    int indice;

    if(t > 0 && pelicula != NULL)
    {
        retorno=-1;
        id=idAutoIncremental(pelicula,t);
        indice=obtenerEspacioLibrePelicula(pelicula,t);

        if(indice>=0)
        {
            if((pelicula+indice)->estadoPelicula!=1)
            {
                inicializar=iniciarEstadoPersona(pelicula,t);
            }
            else{

                return -2;
            }

            // PIDO EL TITULO.
            while(!getAlfaNumerico("\nIngrese el titulo de la pelicula: ",auxiliarTitulo))
                {
                    printf("\nError. Ha ingresado un titulo erroneo. (Letras y numeros). Intente nuevamente: ");
                }

           // PIDO EL GENERO.
            while(!getStringLetras("\nIngrese el genero de la pelicula : ",auxiliarGenero))
                {
                    printf("\nError. Ha ingresado un genero erroneo. (NO use numeros). Intente nuevamente: ");
                }

           // PIDO LA DURACION.
            while(!getStringNumeros("\nIngrese duracion de la pelicula (mininutos): ",auxiliarDuracion))
                {
                    printf("\nError. Ha ingresado una duracion erronea. (Solo numeros). Intente nuevamente: ");
                }
                duracion=atoi(auxiliarDuracion);

            // PIDO LA DESCRIPCION.
            while(!getAlfaNumerico("\nIngrese una descripcion de la pelicula: ",auxiliarDescripcion))
                {
                    printf("\nError. Ha ingresado una descripcion erronea. (Solo numeros y letras). Intente nuevamente: ");
                }

            // PIDO EL PUNTAJE.
            while(!getStringNumeros("\nIngrese un puntaje (0-100) : ",auxiliarPuntaje))
                {
                    printf("\nError. Ha ingresado un puntaje erroneo. Intente nuevamente: ");
                }
            puntaje=atoi(auxiliarPuntaje);
            // LO VALIDO.
            if(!(puntaje>=0&&puntaje<=100))
                {
                printf("\nPuntaje permitido de 0 a 100. Se ha cancelado el ingreso de la pelicula.\n\n");
                return -2;
                }

            // PIDO EL LINK.
            printf("\nIngrese link de la imagen: ");
            fflush(stdin);
            gets(auxiliarLinkImagen);

            // PASO TODO.
            (pelicula+indice)->idPelicula=id;
            strcpy((pelicula+indice)->titulo,auxiliarTitulo);
            strcpy((pelicula+indice)->genero,auxiliarGenero);
            (pelicula+indice)->duracion=duracion;
            strcpy((pelicula+indice)->descripcion,auxiliarDescripcion);
            (pelicula+indice)->puntaje=puntaje;
            strcpy((pelicula+indice)->linkImagen,auxiliarLinkImagen);
            (pelicula+indice)->estadoPelicula=1;

             retorno=0;

             printf("\n\t\t\t\tPELICULA DADA DE ALTA\n");
        }

    }
    return retorno;
}


int bajaDePelicula(EMovie* pelicula,int t)
{
        int retorno=-2;
        char auxiliarID[20];
        char auxiliarRespuesta[2];
        int id;
        int indice;
         if(t > 0 && pelicula != NULL)
        {
            retorno=-1;

            if(!getStringNumeros("Ingrese el ID que desea dar de baja: ",auxiliarID))
                {
                printf("Error. Ingrese un valor numerico de ID.\n");
                return -2;
                }
                id=atoi(auxiliarID);

                indice=buscarPorId(pelicula,t,id);
                if(indice>=0)
                {
                    while(!getStringLetras("Seguro desea dar de baja? (s/n): ",auxiliarRespuesta))
                    {
                        printf("\nError. Ingrese solamente letras (s/n)\n");
                    }
                    if(auxiliarRespuesta[0]=='s')
                    {
                        (pelicula+indice)->estadoPelicula=0;
                        (pelicula+indice)->idPelicula=-1;
                        retorno=0;
                        printf("LA PELICULA FUE DADA DE BAJA EXITOSAMENTE.\n\n");
                    }
                    else
                    {
                        printf("NO SE REALIZARON CAMBIOS\n\n");
                    }
                }
                else
                {
                    printf("El ID ingresado no existe.\n");
                    return -2;
                }
        }

    return retorno;
}


int modificacionDePelicula(EMovie* pelicula,int t)
        {
            int id;
            int indice;
            int rt;

            int retorno=-2;
            char auxiliarID[20];

                if(t > 0 && pelicula != NULL)
                {
                    retorno=-1;

                    while(!getStringNumeros(" \nIngrese el ID que desea modificar: ",auxiliarID))
                        {
                            printf("Error. Ingrese un valor numerico de ID.\n");

                        }

                       id=atoi(auxiliarID);

                       indice=buscarPorId(pelicula,t,id);

                       if(indice>=0)
                            {
                                rt=menuModificacion(pelicula,indice);
                                retorno=rt;
                            }
                       else
                       {
                                printf("El ID ingresado no existe.\n");
                                return -2;
                       }
            }
        return retorno;
        }



int menuModificacion(EMovie* pelicula,int indice)
    {
        char auxiliarOpcion[30];
        char auxiliarTitulo[30];
        char auxiliarGenero[30];
        char auxiliarDescripcion[200];

        int duracion;
        char auxiliarDuracion[30];

        char auxiliarPuntaje[30];
        char auxiliarLinkImagen[1000];

        int opcion;
        int puntaje;
        int retorno=-1;

        while(!getStringNumeros("\nINGRESE QUE DESEA MODIFICAR: \n::::::::::::::::::::\n(1) Nombre\n(2) Genero\n(3) Duracion\n(4) Descripcion\n(5) Puntaje\n(6) Link Imagen\n::::::::::::::::::::\n",auxiliarOpcion))
        {
            printf("Error. No se ha ingresado una opcion valida.");
        }

        opcion=atoi(auxiliarOpcion);

        if(opcion>=1&&opcion<=6)
        {
                switch(opcion)
                {
                case 1:
                    while(!getAlfaNumerico("\nIngrese el nuevo titulo : ",auxiliarTitulo))
                    {
                        printf("\nError. Ha ingresado un titulo erroneo. (Letras y numeros). Intente nuevamente: ");
                    }
                    strcpy((pelicula+indice)->titulo,auxiliarTitulo);
                    retorno=indice;
                    break;

                case 2:
                    while(!getStringLetras("\nIngrese el nuevo genero : ",auxiliarGenero))
                    {
                        printf("\nError. Ha ingresado un genero erroneo. (NO use numeros). Intente nuevamente: ");
                    }
                    strcpy((pelicula+indice)->genero,auxiliarGenero);
                    retorno=indice;
                    break;

                case 3:
                    while(!getStringNumeros("\nIngrese nueva duracion : ",auxiliarDuracion))
                    {
                        printf("\nError. Ha ingresado una duracion erronea. (Solo numeros). Intente nuevamente: ");
                    }
                    duracion=atoi(auxiliarDuracion);
                    (pelicula+indice)->duracion=duracion;
                    retorno=indice;
                    break;

                case 4:
                    while(!getAlfaNumerico("\nIngrese la nueva descripcion : ",auxiliarDescripcion))
                    {
                        printf("\nError. Ha ingresado una descripcion erronea. (Solo numeros y letras). Intente nuevamente: ");
                    }
                    strcpy((pelicula+indice)->descripcion,auxiliarDescripcion);
                    retorno=indice;
                    break;

                case 5:
                    while(!getStringNumeros("\nIngrese el nuevo puntaje : ",auxiliarPuntaje))
                    {
                        printf("\nError. Ha ingresado un puntaje erroneo. Intente nuevamente: ");
                    }
                    puntaje=atoi(auxiliarPuntaje);

                    if(!(puntaje>=0&&puntaje<=100))
                        {
                            printf("\nPuntaje permitido de 0 a 100. Se ha cancelado la modificacion.\n\n");
                            return -2;
                        }
                    (pelicula+indice)->puntaje=puntaje;
                    retorno=indice;
                    break;

                case 6:
                    printf("\nIngrese nuevo link de la imagen: ");
                    fflush(stdin);
                    gets(auxiliarLinkImagen);
                    strcpy((pelicula+indice)->linkImagen,auxiliarLinkImagen);
                    retorno=indice;
                    break;

                default:
                    printf("\nError. No se ha ingresado una opcion valida.");
                    return -2;
                    break;
                }

        }
        else
        {
            printf("\nError. Se ha ingresado una opcion invalida.");
            return -2;
        }
        return retorno;
    }


int cargarArchivo(EMovie* pelicula, int t)
    {
        int flag = 0;
        FILE *a;

        a=fopen("pelicula.dat", "rb");
            if(a==NULL)
            {
                a=fopen("pelicula.dat", "wb");
                if(a==NULL)
                {
                    return 1;
                }
                flag=1;
            }
            if(flag ==0)
            {
                fread(pelicula,sizeof(EMovie),t,a);
            }
        fclose(a);
        return 0;
    }


int guardarArchivo(EMovie* pelicula, int t)
    {
        FILE *a;
            a=fopen("pelicula.dat","wb");
            if(a == NULL)
            {
                return 1;
            }
        fwrite(pelicula,sizeof(EMovie),t,a);
        fclose(a);
        return 0;
    }


void crearUnHTML(EMovie *pelicula, int t)
{
     int i;
     FILE *a;
     a=fopen("pelicula.html", "w");

     if(a == NULL)
     {
          printf("No se pudo abrir el archivo\n");
     }
     else
     {
        fprintf(a,"<!DOCTYPE html><!-- Template by Quackit.com --><html lang='en'><head><meta charset='utf-8'><meta http-equiv='X-UA-Compatible'content='IE=edge'><meta name='viewport'content='width=device-width, initial-scale=1'><!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags --><title>Lista peliculas</title><!-- Bootstrap Core CSS --><link href='css/bootstrap.min.css'rel='stylesheet'><!-- Custom CSS: You can use this stylesheet to override any Bootstrap styles and/or apply your own styles --><link href='css/custom.css'rel='stylesheet'><!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries --><!-- WARNING: Respond.js doesn't work if you view the page via file:// --><!--[if lt IE 9]><script src='https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js'></script><script src='https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js'></script><![endif]--></head><body><div class='container'><div class='row'>");
         for(i=0; i<t; i++)
         {
                  if((pelicula+i)->estadoPelicula != 0 && (pelicula+i)->idPelicula>=0)
                  {
                 fprintf(a,"<article class='col-md-4 article-intro'><a href='#'><img class='img-responsive img-rounded' src='%s'alt=''></a><h3><a href='#'>%s</a></h3><ul><li>Genero:%s</li><li>Puntaje:%d</li><li>Duracion:%d</li></ul><p>%s</p></article>",pelicula[i].linkImagen,pelicula[i].titulo,pelicula[i].genero,pelicula[i].puntaje,pelicula[i].duracion,pelicula[i].descripcion);
                  }
         }
         fprintf(a,"</div><!-- /.row --></div><!-- /.container --><!-- jQuery --><script src='.'js/jquery-1.11.3.min.js'></script><!-- Bootstrap Core JavaScript --><script src='js/bootstrap.min.js'></script><!-- IE10 viewport bug workaround --><script src='js/ie10-viewport-bug-workaround.js'></script><!-- Placeholder Images --><script src='js/holder.min.js'></script></body></html>");
      }


      fclose(a);

      printf("El HTML se ha creado con exito.\n");

}

