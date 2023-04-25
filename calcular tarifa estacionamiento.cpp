/*
  Genere un numero aleatorio del 1 al 120 que representara la cantidad de minutos de un auto
  en un estacionamiento, calcule la tarifa a pagar si por cada 15 minutos pidiendo el tipo de
  vehiculo si es un auto la fraccion se cobra 5$, si es camioneta se cobra 7$
  NOTA: si por ejemplo despues de un tiempo no se completa la fraccion entonces se cobra la tarifa
  anterior, es decir si la fraccion es cada 15 minutos y el numero arroja 37 entonces solo se cobran
  2 fracciones 15+15 = 30 entonces un vehiculo solo pagaria 10 $
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){

  srand((unsigned)time(NULL));
  int minutos = rand()%120+1;
  int total = 0, coche = 5, camioneta = 7, tipo;

  cout<<"- - Seleccione un tipo de vehiculo - -"<<endl;
  cout<<"-. 1 .. Auto"<<endl;
  cout<<"-. 2 .. Camioneta"<<endl;
  cin>>tipo;

  if(tipo == 1){
        if(minutos<15){
        total = 1*coche;
        }
        else{
            total = (minutos/15)*coche;
        }
    cout<<"Total a pagar: "<<total<<" $"<<endl;
    cout<<minutos<<" minutos"<<endl;
  }


  else if(tipo == 2){
        if(minutos<15){
        total = 1*camioneta;
        }
        else{
            total = (minutos/15)*camioneta;
        }
    total = (minutos/15)*camioneta;
    cout<<"Total a pagar: "<<total<<" $"<<endl;
    cout<<minutos<<" minutos"<<endl;
  }


  else{
    cout<<"Vehiculo no valido"<<endl;
  }

}
