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


};


int main(){

    alumno student;


    printf("Ingrese Nombre:\n");
    scanf("%s",student.nombre );
    printf("Ingrese su sexo masculino o femenino: \n");
    scanf("%s", student.sexo);





return 0;
}
