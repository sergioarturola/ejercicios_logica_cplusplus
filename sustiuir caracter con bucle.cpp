/*

Escribe un programa en c++ que dada una cadena de caracteres sustituya todas las letras "u" por una "x"
Ejemplo de cadena: "lulu tenia una computadora azul"
Salida esperada: "lxlx tenia xna compxtadora azxl"
Nota: no usar librerias solo bucles

*/

#include<iostream>
using namespace std;

int main(){
	
	char nombre[] = "lulu tenia una computadora azul";
	
	for(int i = 0; i<sizeof(nombre); i++){
		
		if(nombre[i] == 'u'){
			nombre[i] = 'x';
		}
	}
	
	cout<<nombre;
	
	return 0;
}