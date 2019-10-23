#include <iostream>

using namespace std;

int main(){
    // Declaracion de Variables, como es un ciclo for se pueden declarar dentro del mismo tambien
    int i,a,b=1,d=0; // Esta linea declara la variable e inicializa dos de ella (b & d)
    cout << "Ingrese un numero entero" << endl; // Esta linea Muestra en pantalla el texto dado
    cin >> a; // Esta linea asigna el valor ingresado por el usuario a la variable a
    int c=a; // Esta linea le asigna el valor de a a c
    // a es el numero a evaluar
    // i es el contador del ciclo y representa todos los numeros enteros positivos, excepto el 1, anteriores al ingresado por el usuario
    // b guarda el modulo, indica si fue divisible para algun numero.
    // c copia el valor original de ingresado por el usuario para poder reasignar a al numero inicial desde el que se desea probar
    // d es el contador de numeros primos encontrados, cada vez que se encuentra un numero primo se suma uno a d
    
    // El bucle for inicia en a=1 y se sigue ejecutando hasta que a sea igual a c
    for(a=1;a!=c;a++){
        i=2; // Esta linea reinicia el contador i a 2
        b=1; // Esta linea reinicia el contador b a 1
        
        // Este bucle for divide el numero dado para todos los anteriores a el a partir del 2 hasta llegar al numero dado o encuentre un divisor exacto
        for(i=2;i<a && b!=0;i++){
            b=(a%i); // Esta linea reasigna b al valor del modulo, si algun numero da 0 quiere decir que es divisor exacto y termina el ciclo
            }
        // Este condicional se activa si se ecnontro algun divisor exacto antes de llegar al numero dado
        if(b==0){
            cout << "   - El numero "<<a<<" no es primo"<< endl;

        // Este condicional se activa si no se encontro ningun divisor exacto antes de llegar al numero dado
        }else {
            cout << "   - El numero " <<a<< " es primo" << endl;
            d+=1;
        }
    }
    // Esta linea muestra en pantalla el total de numeros primos (d) encontrados
    cout << "\n\nExisten un total de " << d << " numeros primos desde el 0 hasta el numero dado\n\n";

    return 0;
}
