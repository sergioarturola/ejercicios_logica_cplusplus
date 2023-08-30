/*
Realize un programa que ingresando como string un dia de la semana retorne su equivalente a numero (lunes -> 1, martes -> 2, etc)
el programa tiene ciertas restricciones

-Se debe de usar "switch" (considere que un string no es admitido en esa estructura)
-No usar funciones que tomen como parametro un string y retornen un entero
-Pueden usarse enums o maps considere que es lo mas conveniente
*/

#include<iostream>
#include<string>
using namespace std;

//enum con los dias de la semana
enum EnumDias {lunes, martes, miercoles, jueves, viernes, sabado, domingo};

//funcion que retorna de string a enum
EnumDias stringToEnum(string str){

    if(str == "lunes") return EnumDias::lunes;
    if(str == "martes") return EnumDias::martes;
    if(str == "miercoles") return EnumDias::miercoles;
    if(str == "jueves") return EnumDias::jueves;
    if(str == "viernes") return EnumDias::viernes;
    if(str == "sabado") return EnumDias::sabado;
    if(str == "domingo") return EnumDias::domingo;
}

int main(){

    string d;
    cout<<"Introduce dia de la semana: "; cin>>d;
    EnumDias valor = stringToEnum(d);

    //ahora si se puede usar el switch con el valor del enum
    switch(valor){

    case EnumDias::lunes:
        cout<<"1"<<endl;
        break;
    case EnumDias::martes:
        cout<<"2"<<endl;
        break;
    case EnumDias::miercoles:
        cout<<"3"<<endl;
        break;
    case EnumDias::jueves:
        cout<<"4"<<endl;
        break;
    case EnumDias::viernes:
        cout<<"5"<<endl;
        break;
    case EnumDias::sabado:
        cout<<"6"<<endl;
        break;
    case EnumDias::domingo:
        cout<<"7"<<endl;
        break;
    default:
        cout<<"Dia inexistente"<<endl;
        break;
    }
    return 0;
}
