#include <stdlib.h>
#include <stdio.h>

void llenar_arreglo(int *, int);
void imprimir_arreglo(int *,int);
void v_menor(int *, int);




int main(){

    int arreglo[100],*parreglo=arreglo,longitud;

    printf("Ingrese numero para creacion del arreglo\n");
    scanf("%d", &longitud);
    llenar_arreglo(parreglo,longitud);
    imprimir_arreglo(parreglo,longitud);
    v_menor(parreglo,longitud);



return 0;
}

void llenar_arreglo(int *p, int l){

    for(int i=0;i<l;i++)
    {

        printf("Ingrese dato %d : \n", i+1  );
        scanf("%d" ,&(*(p+i)));
    }

}

void imprimir_arreglo(int *p, int nnum){

printf("\nLos valores del Vector y la Direccion de cada uno es: \n");
    int aux=0,*direccion;
    for (int i=0;i<nnum;i++)
    {
        printf("Valor (%i): %d en Posicion %p\n",i+1,*(p+i),(p+i));
        if(*(p+i)>aux){
            aux=*(p+i);
            direccion=(p+i);
        }
    }
}


void v_menor (int *p,int nn){
    int menor=*(p+0),*dir;

    for (int i=0; i<nn; i++){
        if (*(p+i)< menor){
        menor=*(p+i);dir=(p+i);
        }
    }
    printf("\nEl Valor menor es %d y esta en la posicion %p.\n",menor,dir);
}
