/*
  Realizar un programa en C++ que pida cuantas personas desea agregar a un sistema el cual tendra la
  siguiente caracterisica
  1- pida la edad de la persona
  2- el peso
  Despues contar cuantas personas se ingresaron dependiendo de su edad:
  personas infantes -> 0-12
  personas jovenes -> 13-29  
  personas adulto -> 30-59
  personas mayores -> mayores a 60
  
  Finalmente sacar el peso promedio del grupo
*/

#include<iostream>
using namespace std;


int main()

{

    int n,i,edad, peso, c = 0;
    int contadornino = 0, contadorjoven = 0, contadoradulto = 0, contadorviejo = 0;
    float promedio;

    cout<<"Cuantas personas deseas agregar?"<<endl;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout<<"Ingrese edad "<<endl;
        cin>>edad;
        cout<<"Ingrese el peso "<<endl;
        cin>>peso;

        if(edad >= 0 && edad <= 12)
        {
            contadornino += 1;
        }

     if(edad >= 13 && edad <= 29)
     {
         contadorjoven += 1;
     }


     if(edad >= 30 && edad <= 59)
     {
         contadoradulto += 1;


    }


     if(edad >= 60)
     {
         contadorviejo += 1;
     }

     c = c+peso;
}

//para sacar el promedio de peso

     promedio = c/n;




    cout<<"Ingresaste "<<contadornino<<" personas infantes"<<endl;
    cout<<"Ingresaste "<<contadorjoven<<" personas jovenes"<<endl;
    cout<<"Ingresaste "<<contadoradulto<<" personas adulto"<<endl;
    cout<<"Ingresaste "<<contadorviejo<<" personas mayores"<<endl;
    cout<<"\n\nEl promedio de peso es de "<<promedio;

    return 0;

}
