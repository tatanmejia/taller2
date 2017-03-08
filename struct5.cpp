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

    printf("Ingrese Nombre %d:\n", i+1);
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


     student[i].p_nota[i].prome=(student[i].p_nota[i].nota1+student[i].p_nota[i].nota2+student[i].p_nota[i].nota3)/3; }
    system("cls");

    prome_mayor=student[0].p_nota[0].prome;
    prome_menor=student[0].p_nota[0].prome;

    for(int i=0;i<cantd;i++)
    { if(prome_mayor<=student[i].p_nota[i].prome);
        { prome_mayor=student[i].p_nota[i].prome;
            mayor=i; }
    }
    for(int i=0;i<cantd;i++)
    { if(prome_menor>=student[i].p_nota[i].prome)
        { prome_menor=student[i].p_nota[i].prome;
            menor=i; }
    }

    printf("-------------Mejor promedio de estudiante---------------\n");
    printf("\nNombre de estudiante %s", student[mayor].nombre);
    printf("\nSexo: %s",student[mayor].sexo);
    printf("\nEdad: %d",student[mayor].edad);
    printf("\nNota 1: %1.1f",student[mayor].p_nota[mayor].nota1);
    printf("\nNota 2: %1.1f",student[mayor].p_nota[mayor].nota2);
    printf("\nNota 3: %1.1f",student[mayor].p_nota[mayor].nota3);
    printf("\nPromedio: %1.1f", prome_mayor);
    printf("\n\n");



    printf("----------------Menor promedio de estudiante---------------\n");
    printf("\nNombre de estudiante %s", student[menor].nombre);
    printf("\nSexo: %s",student[menor].sexo);
    printf("\nEdad: %d",student[menor].edad);
    printf("\nNota 1: %1.1f",student[menor].p_nota[menor].nota1);
    printf("\nNota 2: %1.1f",student[menor].p_nota[menor].nota2);
    printf("\nNota 3: %1.1f",student[menor].p_nota[menor].nota3);
    printf("\nPromedio: %1.1f", prome_menor);
    printf("\n\n");



return 0;
}
