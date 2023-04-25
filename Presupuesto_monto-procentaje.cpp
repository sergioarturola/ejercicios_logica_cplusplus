/*
 En un hospital se tienen 3 areas con sus respectivos presupuestos:
  Ginecologia 40%, Pediatria 30%, Traumatologia 30%
  obtener la cantidad de dinero que recibira cada area para cualquier presupuesto
*/
#include<iostream>
using namespace std;

int main(){

   int presupuesto;

   cout<<"Digita la cantidad otorgada al hospital: "; cin>>presupuesto;

   cout<<"Ginecologia: "<<presupuesto*.4<<" $"<<endl;
   cout<<"Pediatria: "<<presupuesto*.3<<" $"<<endl;
   cout<<"Traumatologia: "<<presupuesto*.3<<" $"<<endl;;

}
