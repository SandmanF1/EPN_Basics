#include<iostream>
#include<cmath>
using namespace std;

double term_n(int n);

int main(){
    int i=1, t=0;
    long double pi=0, pin=0;
    const double EPS=0.000001;
    for(i=1;t==0;i++){
        pi+=term_n(i);
        if(abs(pi-pin)<EPS){
            t=1;
        }else{
            pin=pi;
        }
    }
    cout<<pi;
    pi=pow((-pi*32),(double) 1/3);
    cout<<"El valor aproximado de pi con error de 0.000001 es:"<<pi<<" y se ocuparon "<<i<<" iteraciones"<<endl;
    return 0;
}

double term_n(int n){
    double argument;
    argument=(pow(-1,n)/pow(n,3));

    return argument;
}
