#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<time.h>
using std::cout;
using std::cin;
using std::endl;

void menu();
void operaciones();

int main(){
	
	menu();
	
	return 0;
}

void menu(){
	
	do{
	
	system("color 20");
	
	cout<<"+----------------------+\n"
	    <<"|                      |\n"
	    <<"+  Inserta tu boleto   +\n"
	    <<"|                      |\n"
	    <<"+----------------------+\n";

} while(system("pause > nul"));

system("cls");
operaciones();
}

void operaciones(){
	srand((unsigned)time(NULL));
	int unsigned pagar, ingresado;
	bool operacion = true;
	pagar = rand()%120+14; 
	
	cout<<"Total a pagar "<<pagar<<" $"<<endl;
	cin>>ingresado;
	
	while(operacion){
		

	if(ingresado > pagar){
		pagar = ingresado - pagar;
		
		cout<<"Tome su cambio "<<pagar<<"$";
		Sleep(3000);
		system("cls");
		cout<<"Tome su boleto";
		system("cls");
		operacion = false;
		
	}
	else if( pagar == ingresado){
		
		cout<<"Tome su boleto";
		Sleep(2000);
		system("cls");
		operacion = false;
		
	}
	
	else{
		bool bandera = true;
		int boleto = pagar - ingresado;
		
		while(bandera){
			
		cout<<"Te falta cancelar "<<boleto<<" $";
		cin>>pagar;
		
		if(pagar > boleto){
			boleto = pagar-boleto;
			cout<<"Tome su cambio "<<boleto<<" $"<<endl;
			bandera = false;

		}
		else if(boleto>pagar){
			boleto = boleto - pagar;
		}
		else{
			cout<<"Tome su boleto"<<endl;
			bandera = false;
			
		}
		
		operacion = false;
	
	}

	}
}
	Sleep(2000);
	system("cls");
	menu();
}



