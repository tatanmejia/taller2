#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void nombre(char *);
void vocal(int *,char *);

int main(){
    char nom[30], *p=nom;
    int num, *pp=&num;

    nombre(p);
    num=strlen(nom);
    vocal(pp,p);


return 0;
}

void nombre(char *cv){
    printf("Ingrese nombre: ");
    scanf("%s",cv);
    printf("\n");
    printf("%s ",cv);
}

void vocal(int *pn, char *cv){
    int voc=0;
    for(int i=0;i<*pn;i++){
        if(*(cv+i)=='a' || *(cv+i)=='e' || *(cv+i)=='i' || *(cv+i)=='o' || *(cv+i)=='u'){
            voc++;}
    }
    printf("tiene %i cantidad(es) de vocal. \n", voc);
}
