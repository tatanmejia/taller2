#include <stdio.h>
#include <stdlib.h>

struct estudiante {
    char nombre[30];
    int edad;
    int grado;
    float promedio; };

int main(){

    estudiante estudent[3];
    int mayor=0;
    float promed;



    for(int i=0;i<3;i++)
    {   printf("Ingrese su nombre: ");
        scanf("%s", estudent[i].nombre);
        printf("Ingrese su edad: ");
        scanf("%d", &estudent[i].edad);
        printf("Ingrese el grado: ");
        scanf("%d", &estudent[i].grado);
        printf("Ingrese el promedio: ");
        scanf("%f", &estudent[i].promedio);
        printf("**************************\n\n");



        promed=estudent[0].promedio;

        for(int i=0;i<3;i++){
        if(promed<=estudent[i].promedio)
        { promed=estudent[i].promedio;
            mayor=i; }
        }
    }

    printf("MEJOR PROMEDIO\n\n");
    printf("Nombre: %s",estudent[mayor].nombre);
    printf("\nEdad: %d",estudent[mayor].edad);
    printf("\nGrado: %d",estudent[mayor].grado);
    printf("\nPromedio: %1.1f",estudent[mayor].promedio);

    return 0;
}

