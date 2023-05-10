/*
Dado un rango de numeros (que es ingresado por teclado) imprimir cuales
son los que terminan en 6
*/
#include<iostream>
using namespace std;

int main(){

    int lim_inferior;
    int lim_superior;

    cout<<"Limite inferior: "; cin>>lim_inferior;
    cout<<"Limite superior: "; cin>>lim_superior;

    for(int i = lim_inferior; i<=lim_superior; i++){
        if(i%10 == 6){
            cout<<i<<" ";
        }
    }
}

