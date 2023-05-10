/*
Leer un numero de n cifras y verificar si contiene el digito 1
*/
#include<iostream>
using namespace std;

int main(){

    int numero, aux;
    bool uno = false;

    cout<<"Digita numero: "; cin>>numero;

    while(numero>0){
        aux = numero%10;
        numero = numero/10;
        if(aux == 1) uno = true;
    }

    if(uno){
        cout<<"Contiene el numero 1"<<endl;
    }
    else{
        cout<<"No contiene el numero 1"<<endl;
    }


}
