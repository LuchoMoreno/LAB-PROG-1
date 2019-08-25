#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int miVector[T] = {2,6,1,3,4};
    int i;
    int j;
    int aux;
    int flag;

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







    return 0;
}
