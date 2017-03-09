#include <stdio.h>
#include <stdlib.h>

struct persona{
    char nombre[30];
    bool discap;

};

int main(){


    persona human[100];
    int cantd, infor;

    printf("Ingrese la cantidad de personas a registar\n");
    scanf("%d",&cantd);
    system("cls");

    for(int i=0;i<cantd;i++) {
        printf("Ingrese el nombre:\n ");
        scanf("%s",human[i].nombre);
        printf("Tiene alguna discapacidad? ------1=SI o 2=NO---- :");
        scanf("%d",&infor);
        if(infor==1){
            human[i].discap=true;
        }else{
            human[i].discap=false; }
        }
    system("cls");

    int cond[30], sind[30], con=0, sin=0;
    for(int i=0;i<cantd;i++){
        if(human[i].discap==true)
        {   cond[con]=i;
            con++;
        }else{
            sind[sin]=i;
            sin++; }
    }
    printf("\Personas con discapacidad\n");
    for(int i=0;i<con;i++) {
        printf("Nombre: %s", human[cond[i]].nombre);
        printf("\n\n"); }

    printf("\Personas sin discapacidad\n");
    for(int i=0;i<sin;i++){
        printf("Nombre: %s",human[sind[i]].nombre);
        printf("\n"); }




return 0;
}
