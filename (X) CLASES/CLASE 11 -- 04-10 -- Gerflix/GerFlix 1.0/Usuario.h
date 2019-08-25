
#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);


void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);


void mostrarUnSoloUsuario (eUsuario);
void mostrarListaUsuarios(eUsuario[], int);
