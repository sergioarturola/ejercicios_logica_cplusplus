#include<iostream>
using namespace std;


int main(){

    int cantidad;
    int C500 = 0, C200 = 0, C100 = 0;

    cout<<"Ingresa cantidad: "; cin>> cantidad;

    if( (cantidad >= 500) ){
        C500 = (cantidad / 500);
        cantidad = cantidad - (C500 * 500);
        }
    if( (cantidad >= 200) ){
        C200 = (cantidad / 200);
        cantidad = cantidad - (C200 * 200);
    }
    if( (cantidad >= 100) ){
        C100 = (cantidad / 100);
        cantidad = cantidad - (C100 * 100);
    }


    cout<<"Biletes de 500: "<<C500<<endl;
    cout<<"Biletes de 200: "<<C200<<endl;
    cout<<"Biletes de 100: "<<C100 <<endl;

    return 0;

}