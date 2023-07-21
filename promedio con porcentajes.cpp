/*
Elaborar un programa para calcular el promedio final de una materia de acuerdo a ciertos criterios
55% - del promedio final de las 3 calificaciones parciales
30% - de la calificacion del promedio
15%  - de trabajo final

mostrar el resultado por pantalla
*/

#include<iostream>
using namespace std;


int main(){
	
	float p1, p2, p3, promedio, trabajofinal, promedio_final, porcentaje_parcial, total, examen;
	
	cout<<"Ingresa calificacion parcial 1: "; cin>>p1;
	cout<<"Ingresa calificacion parcial 2: "; cin>>p2;
	cout<<"Ingresa calificacion parcial 3: "; cin>>p3;
	cout<<"Ingresa calificacion trabajo final:  "; cin>>trabajofinal;
	cout<<"Ingresa calificacion examen:  "; cin>>examen;
	cout<<"----------------------------------"<<endl;
	promedio = (p1+p2+p3)/3;
	
	porcentaje_parcial = (promedio*55)/100;
	promedio_final = ((examen*30)/100) + ((trabajofinal*15)/100);
	total = porcentaje_parcial +  + promedio_final;
	cout<<"Calificacion total: "<<total<<endl;
	
	return 0;
}
