#include<iostream>
#include<cmath>
using namespace std;

double f(double x);
double integrar(double a, double b, int N);

int main(){
    int N=0, K=0;
    double integral1=0, pi=0;
    cout<<"Ingrese los enteros N y K: "<<endl;
    cin>>N;
    cin>>K;

    integral1= integrar(-K,K,N);
    cout<<integral1;
    pi=pow(integral1,2);

    cout<<"La aproximacion de pi es: "<<pi<<endl;

    return 0;
}

double f(double x){
    double z;
    z=exp(-pow(x,2));
    return z;
}
double integrar(double a, double b, int N){
    double integral=0;
    double h=((b-a)/N);

    for(int i=0; i!=(N-1); i++){
    double x=(a+(i*h));
    integral+=f(x);
    }
    integral=h*integral;

    return integral;
}
