#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palabra(char *);
void vocal(int *,char *);

int main(){
    char pal[30], *p=pal;
    int num, *pp=&num;

    palabra(p);
    num=strlen(pal);
    vocal(pp,p); }

void palabra (char *pv){
    printf("Ingrese una palabra: ");
    scanf("%s",pv);
    printf("\n\n");
}

void vocal(int *pn, char *pv){
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
    for(int i=0;i<*pn;i++){
        if (*(pv+i)=='a'){
            vocal_a++; }
            if (*(pv+i)=='e'){
                vocal_e++; }
                if (*(pv+i)=='i'){
                    vocal_i++; }
                    if (*(pv+i)=='o'){
                        vocal_o++; }
                        if (*(pv+i)=='u'){
                            vocal_u++;}
                            }
    printf("La vocal A se repite %i veces. \n", vocal_a);
    printf("La vocal E se repite %i veces. \n", vocal_e);
    printf("La vocal I se repite %i veces. \n", vocal_i);
    printf("La vocal O se repite %i veces. \n", vocal_o);
    printf("La vocal U se repite %i veces. \n", vocal_u);
}
