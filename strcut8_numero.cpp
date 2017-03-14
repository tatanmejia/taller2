#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palabra(char *);
void vocal(int *,char *);

int main(){
    char palab[30], *p=palab;
    int num, *pp=&num;

    palabra(p);
    num=strlen(palab);
    vocal(pp,p);

return 0;
}

void palabra (char *pvoc){
    printf("Ingrese una palabra: ");
    scanf("%s",pvoc);
    printf("\n\n");
}

void vocal(int *pn, char *pvoc){
    int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
    for(int i=0;i<*pn;i++){
        if (*(pvoc+i)=='a'){
            vocal_a++;
                    }
            if (*(pvoc+i)=='e'){
                vocal_e++;
                        }
                if (*(pvoc+i)=='i'){
                    vocal_i++;
                            }
                    if (*(pvoc+i)=='o'){
                        vocal_o++;
                            }
                        if (*(pvoc+i)=='u'){
                            vocal_u++;}
                            }
    printf("La vocal A se repite %i veces. \n", vocal_a);
    printf("La vocal E se repite %i veces. \n", vocal_e);
    printf("La vocal I se repite %i veces. \n", vocal_i);
    printf("La vocal O se repite %i veces. \n", vocal_o);
    printf("La vocal U se repite %i veces. \n", vocal_u);
}

