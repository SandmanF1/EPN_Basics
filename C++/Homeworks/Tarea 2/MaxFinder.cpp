#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    double numero, nmax;
    while(numero!=0){
        cout<<"Ingrese un numero, 0 termina el programa: ";
        cin>> numero;
        if(numero>nmax){
            nmax=numero;
        }else{}
    }
    cout<<"El numero maximo ingresado fue: "<<nmax<<endl;
    system("pause");
    return 0;
}//Made by Favian Ramirez
