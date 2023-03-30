/*
 Escriba un programa en C/C++ que realice la conversion de radianes a grados
*/

#include<iostream>
using namespace std;

int main(){
	
	double grados, radianes, pi = 3.1416;
	cout<<"Angulo en radianes: "; cin>>radianes;
	grados = radianes * (180/pi);
	cout<<"El angulo equivale a "<<grados<<" grados";
	
	return 0;
}