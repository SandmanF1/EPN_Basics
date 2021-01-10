#include<iostream>
#include<cmath>
using namespace std;

double f(double x);
double integrar(double a, double b, int N);
double term_n(int n);

int main(){
    int chooser;

    cout<<"Seleccione el ejercicio que desea ejecutar: ";
    cin>>chooser;

    switch(chooser){
    case 1:{
    int n, k, sc, num=1, div=1;
    cout<<"Ingrese 2 enterenos, n y k, con n>=k"<<endl;
    cin>>n;
    cin>>k;
    for(int i=0; i<=k; i++){
        if(i<k){
            num=num*(n-i);
        }else{
            num*=(n-i+1);
        }
        if(i!=0){
            div*=i;
        }
    }
    sc=(num/div);
    cout<<"La cantidad de subconjuntos distintos de k elementos que se pueden formar a partir de un conjunto de n elementos es: "<<sc<<endl;

    break;
    }
    case 2:{
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

    break;
    }
    case 3:{
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

    break;
    }
    case 4:{
    int N=0, K=0;
    double integral1=0, pi=0;
    cout<<"Ingrese los enteros N y K: "<<endl;
    cin>>N;
    cin>>K;

    integral1= integrar(-K,K,N);
    cout<<integral1;
    pi=pow(integral1,2);

    cout<<"La aproximacion de pi es: "<<pi<<endl;


    break;
    }
    default:
        cout<<"Opcion invalida"<<endl;
        return 0;
    }

cout<<"Hecho por Favian Macelo Ramirez Echeverria - 201810309"<<endl;
    return 0;
}

double term_n(int n){
    double argument;
    argument=(pow(-1,n)/pow(n,3));

    return argument;
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

