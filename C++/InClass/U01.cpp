//Declaracion de librerias
#include <iostream>
#include <cmath>
using namespace std;

//Declaracion de tipos especiales
struct complejo{
    double real;
    double imaginario;
};

//Declaracion de funciones
complejo suma(complejo x, complejo y);

complejo multiplicacion(complejo x, complejo y);

double modulo(complejo x);

void impcomplejo(complejo w);

//Funcion Principal
int main(){
    complejo x,y,z,w;
    cout << "Ingrese el primer complejo (x): " << endl;
    cin >> x.real;
    cin >> x.imaginario;
    cout << "Ingrese el segundo complejo (y): " << endl;
    cin >> y.real;
    cin >> y.imaginario;
    cout << "Ingrese el tercer complejo (z): " << endl;
    cin >> w.real;
    cin >> w.imaginario;
    z = suma(x,y);
    cout << "El resultado es : ";
    impcomplejo(z);
    cout << "El modulo de z es: " << modulo(z) << endl;
    cout << "El modulo de y es: " << modulo(y) << endl;
    cout << "El modulo de x es: " << modulo(x) << endl;
    cout << "El resultado de z + w es : ";
    impcomplejo(suma(z,w));
    cout <<"La multiplicacion de x & y es: ";
    z=multiplicacion(x,y);
    impcomplejo(z);
    
    return 0;
}

//Funcion que suma numeros complejos
complejo suma(complejo x, complejo y){
    complejo res;
    res.real = x.real + y.real;
    res.imaginario = x.imaginario + y.imaginario;
    return res;
};

//Funcion que multiplica numeros complejos
complejo multiplicacion(complejo x, complejo y){
    complejo res;
    res.real= double(x.real*y.real)+double(x.imaginario*y.imaginario*(-1));
    res.imaginario= double(x.real*y.imaginario)+double(x.imaginario*y.real);
    return res;
};


//Funcion que obtiene el modulo de un numero complejo
double modulo(complejo x){
    double res;
    res=sqrt((x.real*x.real)+(x.imaginario*x.imaginario));
    return res;
};

//Funcion que imprime numeros complejos
void impcomplejo(complejo w){
    cout << "(" << w.real << ") + (" << w.imaginario << ".i)" << endl;
};