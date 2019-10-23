#include <iostream>

using namespace std;

int main(){
    // Declaracion de Variables, como es un ciclo for se pueden declarar dentro del mismo tambien
    int i,a,b=1;
    cout << "Ingrese un numero entero" << endl;
    cin >> a;
    int c=a;
    // a es el numero a evaluar
    // i es el contador del ciclo y representa todos los numeros enteros positivos, excepto el 1, anteriores al ingresado por el usuario
    // b guarda el modulo, indica si fue divisible para algun numero.
    for(a=1;a!=c;a++){
        i=2;
        b=1;
        for(i=2;i<a && b!=0;i++){
            b=(a%i);
            }

        if(b==0){
            cout << "   - El numero "<<a<<" no es primo"<< endl;


        }else {
            cout << "   - El numero " <<a<< " es primo" << endl;
        }
    }

    return 0;
}
