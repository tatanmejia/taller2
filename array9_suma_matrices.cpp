#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void suma_matriz();
void mostrar_matriz();

int **puntero_mat1, **puntero_mat2, **matriz_suma,nfilas,ncolumnas;

int main(){

    pedirdatos();
    suma_matriz();
    mostrar_matriz();
    free(matriz_suma);

    for(int i=0;i<nfilas;i++){
        delete[] puntero_mat2[i];
    }
    delete[]puntero_mat2;


    for(int i=0;i<nfilas;i++){
        delete[] puntero_mat1[i];
    }
    delete[]puntero_mat1;

return 0;
}

void pedirdatos(){

    printf("Digite el numero de filas: ");
    scanf("%d",&nfilas);
    printf("Digite el numero de columnas: ");
    scanf("%d",&ncolumnas);

    puntero_mat1 = (int **)malloc(nfilas * sizeof(int *));
	for(int x = 0; x < ncolumnas; x++){
		puntero_mat1[x] = (int *)malloc(ncolumnas * sizeof(int ));
	}

    for(int a=0; a<nfilas; a++){
        for(int b=0; b<ncolumnas; b++){
            printf("\nIngrese dato para posicion [%d,%d]: ", a, b);
            scanf("%d", &(*(*(puntero_mat1+b)+a)));
        }
    }


   puntero_mat2 = (int **)malloc(nfilas * sizeof(int *));
	for(int x = 0; x < ncolumnas; x++){
		puntero_mat2[x] = (int *)malloc(ncolumnas * sizeof(int ));
	}

    for(int a=0; a<nfilas; a++){
        for(int b=0; b<ncolumnas; b++){
            printf("\nIngrese dato para posicion [%d,%d]: ", a, b);
            scanf("%d", &(*(*(puntero_mat2+b)+a)));

        }
    }
}


void suma_matriz(){
  matriz_suma = (int **)malloc(nfilas * sizeof(int *));
	for(int i=0; i<ncolumnas; i++){
		matriz_suma[i] = (int *)malloc(ncolumnas * sizeof(int ));
	}

    for(int a=0; a<nfilas; a++){
        for(int b=0; b<ncolumnas; b++){
            (*(*(matriz_suma+b)+a))=0;
            for(int c=0;c<ncolumnas;c++){
               (*(*(matriz_suma+b)+a))=((*(*(puntero_mat1+a)+b)) + (*(*(puntero_mat2+a)+b)));
            }
        }
    }


   /* for(int i=0;i<nfilas;i++){
        for(int j=0;i<ncolumnas;i++){
            (*(*(puntero_mat1+i)+j)+= *(*(puntero_mat2+i)+j));
        }
    }
}*/}

void mostrar_matriz(){
    printf("\nLa suma de las 2 matrices es: \n");
    for(int i=0;i<nfilas;i++){

        for(int j=0;j<ncolumnas;j++){
            printf(" %d ",*(*(matriz_suma+i)+j));
        }
        printf("\n\n");
    }


}
