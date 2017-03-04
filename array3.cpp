#include <stdio.h>
#include <stdlib.h>

void llenar_arreglo(int *);
void imprimir_arreglo(int *);


int main()
{
    int arreglo[10],*parreglo=arreglo;

    llenar_arreglo(parreglo);
    imprimir_arreglo(parreglo);
    return 0;
}

void llenar_arreglo(int*p){

    for(int i=0;i<10;i++)
    {
        printf("Ingrese valor %d: ",i+1);
        scanf("%d",&(*(p+i)));
    }
}

void imprimir_arreglo(int *p){

printf("\nLos valores pares del Vector y la direccion de cada uno es: \n");

for (int i=0;i<10;i++){
        if (*(p+i)%2==0){
            printf("%d PAR,  su posicion de memoria %p\n",*(p+i),(p+i));*(p+i);
        }
    }

}
