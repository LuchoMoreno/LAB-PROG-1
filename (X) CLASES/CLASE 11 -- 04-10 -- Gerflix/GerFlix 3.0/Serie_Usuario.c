#include "Serie_Usuario.h"

void inicializarUYSHardcode(eUsuario_Serie listaUYS[])
{
    int i;
    int cliente[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int serie[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};

    for(i=0; i<20; i++)
    {
        listaUYS[i].idCliente=cliente[i];
        listaUYS[i].idSerie=serie[i];
    }
}
