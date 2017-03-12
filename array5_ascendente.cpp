#include <stdio.h>
#include <stdlib.h>

void llenado (int *,int *);
void ascender(int *, int *);
void imprimir(int *,int *);

int main() {

    int tam;
    int *p=&tam;
    printf("\nIngrese el tamano del arreglo: "); scanf("%d",p);
    printf("\n");
    int arreglo[*p];
    int *pp=arreglo;

    llenado (p, pp);
    ascender (p, pp);
    imprimir (p, pp);
}

void llenado (int *p, int *pp){
    for(int i=0; i<*p; i++) {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&(*(pp+i))); }
}

void ascender (int *p,int *pp){
    int aux, aux1, j;
    for(int i=0;i<*p;i++) {
        aux=*(pp+i);
        for(int m=i;m<*p;m++) {
            if(aux>=*(pp+m)) {
                aux=*(pp+m);
                j=m; }
        }
        aux1=*(pp+i);
        *(pp+i)=aux;
        *(pp+j)=aux1;
    }
}

void imprimir(int *p, int *pp) {
    printf("\nEl arreglo en forma ascendete es:\n\n");
    for(int i=0;i<*p;i++) {
        printf("%d  \n",*(pp+i)); }
}

