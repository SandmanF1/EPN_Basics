#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int c=2, d=1, k=0, n, i=0;
    cout << "Ingrese el numero de terminos a mostrar: ";
    cin >> n;

    if (n>=3)
    {
        cout << c << "\t" << d << "\t";
        do
        {
            k=c+d;
            c=d;
            d=k;
            cout << k << "\t";

            i++;
        } while (i<n-1);
        
    }else
    {
        cout<<"Numero Ingresado Incorrecto"<<endl;
    }
    
    return 0;
}