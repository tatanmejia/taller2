#include <stdio.h>
#include <stdlib.h>


struct promedio{

    float nota1;
    float nota2;
    float nota3;
    float prome;
};


struct estudiante{
    char nombre[30];
    char sexo[20];
    int edad;
    promedio p_nota[100];
};


int main(){

    estudiante student[100];
    int cantd, mayor=0,menor=0;
    float prome_menor, prome_mayor;

    printf("Ingrese la cantidad de estudiantes a registar\n");
    scanf("%d",&cantd);
    system("cls");

    for(int i=0;i<cantd;i++){

    printf("Ingrese Nombre %d:", i+1);
    scanf("%s",student[i].nombre );
    printf("Ingrese su sexo masculino o femenino: \n");
    scanf("%s", student[i].sexo);
    printf("Ingrese su edad\n");
    scanf("%d", &student[i].edad);
    printf("Ingrese primer nota\n");
    scanf("%f",&student[i].p_nota[i].nota1);
    printf("Ingrese segunda nota\n");
    scanf("%f",&student[i].p_nota[i].nota2);
    printf("Ingrese tercer nota\n");
    scanf("%f",&student[i].p_nota[i].nota3);
    };

    system("cls");
return 0;
}
