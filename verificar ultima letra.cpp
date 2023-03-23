//Realize un programa en C/C++ donde se ingrese una palabra por teclado e identifique si la ultima letra es 'a'
#include<iostream>
#include<string>
using namespace std;


int main(){
	
	string palabra;
	cout<<"Ingresa palabra: "; getline(cin, palabra);
	
	char ultima = palabra.at(palabra.length()-1);
	
	if(ultima == 'a'){
		cout<<"La ultima letra es a"<<endl;
	}
	else{
		cout<<"La ultima letra NO es a"<<endl;
	}
	
}