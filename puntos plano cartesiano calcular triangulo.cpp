/*
Escribe un programa en C/C++ que pida las coordenadas cartesianas (x1, x2, y1, y2) y a partir de
ahi clacule la pendiente de la recta asi como el triangulo y rectangulo formado por estos valores
considere usar las funciones que sean nencesarias
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

void cartesiano(int x1, int x2, int y1, int y2){
	double distancia, x, y, total;
	
	 x = (x2 - x1);
	 y = (y2 - y1);
	 
	total = sqrt(pow(x, 2) + pow(y, 2));
	
	
	cout<<"La distancia entre A y B es: "<<total<<endl;
}

void pendiente_recta(int x1, int x2, int y1, int y2){
	double m;
	
	m = (y2-y1)/(x2-x1);
	cout<<"La pendiente de la recta es: "<<m<<endl;
}

void triangulo_rectangulo(int x1, int x2, int y1, int y2){
	double areaTri, areaRec, base, altura;
	
	//sacando base(x2-x1) y altura(y2-1)
	base = x2-x1;
	altura = y2-y1;
	
	areaTri = (base*altura)/2;
	areaRec = base*altura;
	
	cout<<"El area del Rectangulo: "<<areaRec<<endl;
	cout<<"El area del Triangulo: "<<areaTri<<endl;
}

int main(){
	
	double x1, x2, y1, y2;

	
	cout<<"Digita valor A(->x1 - x2): "; cin>>x1;
	cout<<"Digita valor B(->y1 - y2): "; cin>>y1;
	cout<<"Digita valor A(x1 - ->x2): "; cin>>x2;
	cout<<"Digita valor B(x1 - ->y2): "; cin>>y2;
	
	cartesiano(x1, x2, y1, y2);
	pendiente_recta(x1, x2, y1, y2);
	triangulo_rectangulo(x1, x2, y1, y2);	 
	 
	
	
	return 0;
}
