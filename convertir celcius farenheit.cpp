/*
Usando funciones mostrar un menu para convertir de celcius a farenheit y viceversa
*/

#include<iostream>
using namespace std;

//function declaration
void displayMenu();
void celsiusToFarenheit(double);
void farenhetiToCelsius(double);

//main body
int main(){

    int option;

    while(option !=3){

        displayMenu();
        cin>>option;

        double temp = 0;

        switch(option){

        case 1:
            cout<<"Digita °C: "; cin>>temp;
            celsiusToFarenheit(temp);
            break;
        case 2:
            cout<<"Digita °F: "; cin>>temp;
            farenhetiToCelsius(9);
            break;
        case 3:
            cout<<"S A L I E N D O"<<endl;
            break;
        default:
            cout<<"+ - Selecciona una opcion valida - +"<<endl;
            break;
        }
    }
}


//functions body
void displayMenu(){

    cout
    <<"*----------------------------*\n"
    <<"| Selecciona una opcion      |\n"
    <<"* 1.- Celsius -> Farenheit   *\n"
    <<"| 2.- Farenheti -> Celsius   |\n"
    <<"* 3.- Salir                  *\n"
    <<"| Opcion:                    ";
}

void celsiusToFarenheit(double celsius){

    double farenheit;

    farenheit = (celsius*(9/5))+32;
    cout<<"- - - CELSIUS -> FARENHEIT - - -"<<endl;
    cout<<celsius<<" °C  = "<<farenheit<<" °F"<<endl;
}

void farenhetiToCelsius(double farenheit){

    double celsius;

    celsius= (farenheit -32) * (5/9);
    cout<<"- - - FARENHEIT -> CELSIUS - - -"<<endl;
    cout<<farenheit<<" °F  = "<<celsius<<" °C"<<endl;
}



