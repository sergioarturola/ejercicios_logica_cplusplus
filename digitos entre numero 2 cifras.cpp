/*
Leer un numero entero de 2 digitos y mostrar en pantalla todos los enteros comprendidos
entre un numero y otro
*/
#include<iostream>
using namespace std;

int main(){

    int numero, decena, unidad, lim_inferior, lim_superior;

    cout<<"Digita un numero de 2 cifras: "; cin>>numero;
    decena = numero%10;
    unidad = numero/10;

    if(decena > unidad){
        lim_inferior = unidad;
        lim_superior = decena;
    }
    else{
        lim_inferior = decena;
        lim_superior = unidad;
    }

    cout<<"Numeros entre ambos digitos"<<endl;
    for(int i = lim_inferior; i<lim_superior; i++){
        cout<<i<<" ";
    }
}
