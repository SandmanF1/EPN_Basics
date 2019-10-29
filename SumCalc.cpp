#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int n,i=1,f=1,suma1=0,suma2=0;
    cout<<"Bienvenido, el presente programa esta hecho para resolver 2 sumas:\n    -E (2i-1) desde i=1 hasta n.\n      - E (i!) desde i=1 hasta n."<<endl;
    cout<<"ingresa el valor de n: ";
    cin>>n;
    while(i!=(n+1)){
        suma1=suma1+((2*i)-1);
        f=(f*i);
        suma2=(suma2+f);
        i+=1;
    }
    cout<<"    - El resultado de la suma 1 es: "<<suma1<<"\n    - El resultado de la suma 2 es: "<<suma2<<endl;
    system("pause");
    return 0;
}//Made by Favian Ramnirez
