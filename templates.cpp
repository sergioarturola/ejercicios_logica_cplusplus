#include<iostream>
using namespace std;


template <typename T>
T imprimir(T t){

    cout<<t<<endl;
}
int main(){

    imprimir<int>(1234);
    imprimir<char>('F');

}
