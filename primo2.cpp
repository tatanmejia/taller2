#include <stdlib.h>
#include <stdio.h>

void pedirnumero(int *);
void primo(int *);


int main(){

    int numero, *numerito=&numero;
    pedirnumero(numerito);
    primo(numerito);


return 0;
}


void pedirnumero(int *numerito){

    printf("Ingrese numero para calcular si es primo\n");
    scanf("%d", &(*numerito) );
    printf("Valor %d almacenado en la posicion de memoria %p \n ", *numerito, numerito);

}

void primo(int *primo){
    int a=0;
    for(int i=1;i<(*(primo+1));i++)
{
    if(*primo%i==0)
    a++;
}


if(a==2)
    {
    printf("El numero es primo");
    }
    else
    {
    printf("El numero no es primo");
    }

}


