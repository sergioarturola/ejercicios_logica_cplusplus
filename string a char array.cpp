/*
Pedir una frase por teclado y covnertirla a un array de caracteres [char]
*/
#include<iostream>
#include<string>
using namespace std;

int main(){

    string frase;
    int taman;
    cout<<"Ingresa una frase: ";
    getline(cin, frase);
    taman = frase.length();
    char frasearray[taman];

    for(int i = 0; i<taman; i++){
        frasearray[i]= frase[i];
    }

    cout<<"Frase dentro del array"<<endl;
    for(int i = 0; i<taman; i++){
        cout<<"i["<<i<<"]: "<<frasearray[i]<<endl;
    }



}
