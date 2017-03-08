#include <stdio.h>
#include <stdlib.h>


struct promedio{
    float nota1;
    float nota2;
    float nota3;

};

struct alumno{

    char nombre[30];
    char sexo[20];
    int edad;
    promedio prome;


};


int main(){

    alumno student;


    printf("Ingrese Nombre:\n");
    scanf("%s",student.nombre );
    printf("Ingrese su sexo masculino o femenino: \n");
    scanf("%s", student.sexo);
    printf("Ingrese su edad\n");
    scanf("%d", &student.edad);
    printf("Ingrese primer nota\n");
    scanf("%f",&student.prome.nota1);
    printf("Ingrese segunda nota\n");
    scanf("%f",&student.prome.nota2);
    printf("Ingrese tercer nota\n");
    scanf("%f",&student.prome.nota3);

    system("cls");

    printf("Nombre: %s",student.nombre);
    printf("\nSexo: %s",student.sexo);
    printf("\nEdad: %d",student.edad);
    printf("\nNota 1: %1.1f",student.prome.nota1);
    printf("\nNota 2: %1.1f",student.prome.nota2);
    printf("\nNota 3: %1.1f",student.prome.nota3);
    printf("\nPromedio: %1.1f", (student.prome.nota1+student.prome.nota2+student.prome.nota3)/3);
    printf("\n\n");





return 0;
}
