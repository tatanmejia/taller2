#include <stdio.h>
#include <stdlib.h>


void pedirnumero(int *);
void espar(int*);

int main(){
    int numero, *pnumero=&numero;
    pedirnumero(pnumero);
    espar(pnumero);



return 0;
}

void pedirnumero(int *numerito){

    printf("Ingrese un numero \n ");
    scanf("%d" ,&(*numerito));
    printf("Valor %d almacenado en la posicion de memoria %p \n" , *numerito , numerito );

}

void espar(int *parcito){
    if(*parcito %2 == 0){

        printf("Es par \n ");
    }else{
    printf ("No es par \n");
    }
}
