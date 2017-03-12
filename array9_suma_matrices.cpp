#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void suma_matriz(int **,int **,int,int);

int **puntero_mat1, **puntero_mat2,nfilas,ncolumnas;

int main(){

    pedirdatos();
    suma_matriz();



}

void pedirdatos(){
    printf("Digite el numero de filas: ");
    scanf("%d",&nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d",&ncolumnas);

    puntero_mat1=new int*[nfilas];
    for(int i;i<nfilas;i++){

        puntero_mat1[i]=new int[ncolumnas];
    }
    printf("Digite los elementos de la primera matriz: \n");
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncolumnas;j++){
            printf("Digite un numero %d",i+1);
            scanf("%d",*(*(puntero_mat1+i)+j));

        }
    }
     puntero_mat2=new int*[nfilas];
    for(int i;i<nfilas;i++){

        puntero_mat2[i]=new int[ncolumnas];
    }
    printf("Digite los elementos de la segunda matriz: \n");
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncolumnas;j++){
            printf("Digite un numero %d",i+1);
            scanf("%d",*(*(puntero_mat2+i)+j));

        }
    }
}


void suma_matriz(int **puntero_mat1, int **puntero_mat2, int nfilas, int ncolumnas)
