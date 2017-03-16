#include <stdio.h>
#include <stdlib.h>


struct etapa{
    int minutos;
    int segundos;
    int horas;


}eta[100];


int main(){
    int num_etapa,htotal=0,mintotal=0,segtotal=0;

    printf("Digite el numero de etapas: ");
    scanf("%d",&num_etapa);
    for(int i=0;i<num_etapa;i++){
        printf("Horas:" ,i+1);
        scanf("%d",&eta[i].horas);
        printf("Minutos:", i+1);
        scanf("%d",&eta[i].minutos);
        printf("Segundos:", i+1);
        scanf("%d",&eta[i].segundos);

        htotal=htotal+eta[i].horas;
        mintotal=mintotal+eta[i].minutos;
        if(mintotal >=60){
           mintotal -= 60;
           htotal++;
           }
        segtotal=segtotal+eta[i].segundos;
            if(segtotal >= 60){
                segtotal -=60;
                mintotal++;
            }
        }

    printf("\nEl tiempo en horas es: %d", htotal);
    printf("El tiempo en minutos es: %d",mintotal);
    printf("El tiempo en segundo es: %d",segtotal);



return 0;
}
