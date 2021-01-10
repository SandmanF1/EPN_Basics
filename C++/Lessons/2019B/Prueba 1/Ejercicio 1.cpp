//Evaluacion parcial de Favian Marcelo Ramirez Echeverria - 201810309 - Miercoles 13 de Noviembre de 2019
#include<iostream>
#include<cmath>
using namespace std;

int main(){
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


    return 0;
}
