#include <iostream>
#include <cmath>
using namespace std;

// Generar un menú para que el usuario
// 1) Ingrese un valor n > 5 y se contabilice los numeros primos en el intervalo
// [2,n];
// 2) Ingresar dos enteros b > a > 3 y contabilizar los numeros primos en el
// intervalo [a,b];
// 3) Ingresa un valor n>3 y genera un vector aleatorio de longitud n con datos en el
// intervalo [n, n^2] y contabiliza los numeros primos.

// n=4 7 15 8 11  [4, 16]

bool EsPrimo(int x){
    bool respuesta=false;
    int ndiv=0;
    for(int j=1; j<=x; j++){
        if(x % j == 0){
            ndiv++;
        }
    };
    if(ndiv==2){
        respuesta=true;
    }
    return respuesta;
};

int main(){
    int opcion;
    cout << "Programa que contabiliza numeros primos" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1) Conteo en el intervalo [2,n]" << endl;
    cout << "2) Conteo en el intervalo [a,b]" << endl;
    cout << "3) Conteo en el intervalo [n,n^2], con vector aleatorio" << endl;
    cout << "Ingrese la opcion : " << endl;
    cin >> opcion;
    
    switch(opcion){
        case 1:{
            int n, nprimos=0;
            cout << "Ingrese el valor de n" << endl;
            cin >> n;
            if(n > 1){
                for(int j=2; j<=n; j++){
                    if(EsPrimo(j)){
                        nprimos++;
                    }
                }
            } else {
                cout << "Valor de n ingresado no es valido" << endl;
            };
            
            cout << "El total de primos encontrados es : " << nprimos << endl;
            
            break;
        }
        
        case 2:{
            
            break;
        }
        
        case 3:{
            
            break;
        }
        default:
        cout << "La opcion ingresada no es valida" << endl;
    }
    
    return 0;
}
