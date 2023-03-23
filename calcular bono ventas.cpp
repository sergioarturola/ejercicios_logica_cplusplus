#include<iostream>
using namespace std;

int main(){
	
	long s_base = 420000, ven1, ven2, ven3, comision;

	cout<<"Ingrese el valor de la venta 1: "; cin>>ven1;
	cout<<"Ingrese el valor de la venta 2: "; cin>>ven2;
	cout<<"Ingrese el valor de la venta 3: "; cin>>ven3;
	comision = (ven1*.1) + (ven2*.1) +(ven3*.1);
	cout<<"Total de comision: "<<comision<<endl;
	cout<<"Sueldo total: "<<s_base + comision<<endl;
	
	return 0;
	
}