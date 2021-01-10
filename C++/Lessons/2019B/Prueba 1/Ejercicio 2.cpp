#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    double f;
    cout<<"Ingrese el valor del entero X: ";
    cin>>x;

    if(x<-2){
        f=((abs(x+1))/(x+2));
    }else if(abs(x)<=2){
        f=pow(x,2);
    }else if(x>2){
        f=(x-2);
    }else{}
    cout<<"El valor de f(x) para x= "<<x<<" es: "<<f<<endl;
    return 0;
}
