#include<iostream>
using namespace std;


int elevate(int x, int y){

    if(y == 0){
        return 1;
    }
    if(y> 0){

        return x*elevate(x, y-1);
    }
}

int main(){

    int x, y;

    cout<<"X: "; cin>>x;
    cout<<"Y: "; cin>>y;
    cout<<"Result X^Y = "; cout<<elevate(x, y)<<endl;
}
