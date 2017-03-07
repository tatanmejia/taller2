#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct competidor{
    char nombre[30];
    int edad;
    char sexo;
    char club[20];
};


int main(){

    competidor cptidor;


    cout<<"Ingrese su  nombre:\n";
    cin.getline(cptidor.nombre,30);
    cout<<"Ingrese su edad:\n";
    cin>>cptidor.edad;
    cout<<"Ingrese el sexo :\n";
    cin>>cptidor.sexo;
    cin.ignore(256,'\n');
    cout<<"Ingrese el nombre del club: \n";
    cin.getline(cptidor.club,20);


    system("cls");

    cout<<"Nombre: "<<cptidor.nombre;
    cout<<"\nEdad: "<<cptidor.edad;
    cout<<"\nSexo: "<<cptidor.sexo;
    cout<<"\nClub: "<<cptidor.club;

    if(cptidor.edad <=15)
    {
        cout<<"\nCategoria Infantil";
    }

    else{
        if(cptidor.edad >15 && cptidor.edad <=30)
        {
            cout<<"\nCategoria Joven";
        }
        else{if(cptidor.edad>30)
                {
                  cout<<"\nCategoria Adulto";

                }

            }


        }


return 0;
}
