#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

double triangulo(int b, int h){
    return b*h/2;
}

int main(){
    double base, altura;
    cout<<"Calculo del area"<<endl;
    base=6.83; altura=5.51;

    cout<<"Resultado: "<<triangulo(base-1, altura-1)<<endl;


    return 0;
}