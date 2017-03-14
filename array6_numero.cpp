#include <stdio.h>
#include <stdlib.h>

void dato(int *,int *);
void b_dato(int *,int *);


int main()
{
    int n, *p=&n;
    printf("Ingrese cantidad de numeros: ");
    scanf("%d",&(*p));
    int arreglo[*p], *punt2=arreglo;
    dato(p,punt2);
    b_dato(p,punt2);
    return 0;
}
void dato(int *puntero1,int *puntero2)
{
    printf("\n");
    for(int i=0;i<*puntero1;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&*(puntero2+i));
    }
}
void b_dato(int *puntero1,int *puntero2)
{
    int x, c=0;
    printf("\nIngrese numero que desea buscar en el vector: \n");
    scanf("%d",&x);
    for(int i=0;i<*puntero1;i+=1)
    {
        if(x==*(puntero2+i))
        {
             printf("El numero %d esta en el vector.\n",*(puntero2+i));
             printf("Posicion: %d \n",i+1);
            c+=1;
        }
    }
    if(c==0)
    {
        printf("\nEl numero  ingresado no se encuentra en el vector\n");
    }
}
