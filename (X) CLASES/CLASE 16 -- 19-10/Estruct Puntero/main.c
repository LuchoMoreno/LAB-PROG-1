#include <stdio.h>
#include <stdlib.h>

typedef struct{
int a;
char b;
}eDato;

int funcion (void);


int main()
{

    eDato * d;
    d = funcion();

    printf("%d--%c", d->a, d->b);
    return 0;
}


int funcion (void)
{
    eDato* pDato;

    pDato = (eDato*) malloc(sizeof(eDato));

    pDato->a = 4;
    pDato->b = 'f';

    return pDato;
}



/**
typedef struct{
int a;
char b;
}eDato;

int funcion (void);


int main()
{

    eDato * d;
    d = funcion();

    printf("\n%d--%c", d->a, d->b);
    return 0;
}


int funcion (void)
{
    eDato miDato = {1, 'A'};
    eDato* pDato;

    pDato = &miDato;

    printf("%d--%c", pDato->a, pDato->b);

    return pDato;
}

*/
