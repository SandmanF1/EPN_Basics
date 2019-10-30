#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int i,n,b=1,Nprime=0,Nmult3=0,Nimpar=0;
    cout<<"El presente programa analiza el conjunto de numeros entre 1 y el numero dado n en busca de:\n\n  - El numero de multiplos de 3.\n\n  - La cantidad de numeros primos.\n\n  - La cantidad de numeros impares."<<endl;
    cout<<"\nIngrese un numero entero positivo (n): ";
    cin>>n;
    int c=n;
    for(n=1;n!=c+1;n++){
        i=2;
        b=1;
        for(i=2;i<n && b!=0;i++){
            b=(n%i);
            }
        if(b!=0){
            Nprime+=1;
        }if(n%2!=0){
            Nimpar+=1;
        }if(n%3==0){
            Nmult3+=1;
        }
    }
    cout<<"\nExisten un total de:\n\n    - " <<Nprime<<" numero/s primo/s.\n\n    - "<<Nimpar<<" Numero/s Impar/es.\n\n    - "<<Nmult3<<" Multiplo/s de 3.\n\n desde el 0 hasta el numero dado\n\n";
    system("pause");
    return 0;
}//Made by Favian Ramirez
