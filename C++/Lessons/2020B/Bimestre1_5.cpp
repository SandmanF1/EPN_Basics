#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

bool PrimeCheck(int numero);

int main(){
    //Declaracion de variables
    int n=0;
    int x=0;

    cout<<"Ingrese un entero 6<= n <=20: ";
    cin>>n;
    while (n<6 || n>20)
    {
        cout<<"Valor Ingresado Incorrecto, vuelve a intentarlo: ";
        cin>>n;
    }

    int p[n];
    cout<<"El vector de numeros primos desde p1 hasta pn en el rango 1 hasta n^3 es: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = p[i-1]+1; j < (n*n*n); j++)
        {
            if (PrimeCheck(j))
            {
                p[i]=j;
                break;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"p["<<i+1<<"]= "<<p[i]<<endl;
    }

    for (int i = 1; i < n; i++)
    {
        x+=(p[i]-p[i-1]);
    }
    
    cout<<"El valor de x es: "<<x<<endl;
    
    return 0;
}

bool PrimeCheck(int numero){
    bool prime=true;
    for(int i=2; i<numero && numero>2 && prime==true; i++){
        if(numero % i == 0){
            prime=false;
        }
    };
    return prime;
}