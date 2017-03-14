#include <stdlib.h>
#include <stdio.h>


struct alumno{
    char nombre[30];
    int edad;
    float promedio;

}student[3], *puntero_student = student;

void pedirdatos();
void m_promedio();


int main(){

    pedirdatos();
    m_promedio();


return 0;
}

void pedirdatos(){
    for(int i=0;i<3;i++){
            printf("Ingrese nombre %d: \n",i+1);
            scanf("%s",(*(puntero_student+i)).nombre);
            printf("Ingrese la edad: \n");
            scanf("%d",&(*(puntero_student+i)).edad);
            printf("Ingrese promedio: \n");
            scanf("%f",&(*(puntero_student+i)).promedio);
            system("cls");
    }
}

void m_promedio(){
    float aux;
    aux=(*(puntero_student+0)).promedio;
    int j;

    for(int i=0;i<3;i++){
        if (aux<=(*(puntero_student+i)).promedio){
            aux=(*(puntero_student+i)).promedio;
            j=i;
        }
    }

    printf("El mejor promedio es del estudiante:\n ");
    printf("Nombre: %s\n",(*(puntero_student+j)).nombre);
    printf("Edad: %d\n",(*(puntero_student+j)).edad);
    printf("Promedio: %f\n",(*(puntero_student+j)).promedio);

}
