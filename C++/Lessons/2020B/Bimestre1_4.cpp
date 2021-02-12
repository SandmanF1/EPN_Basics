#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));

    double a=0;   //Limite inferior de la integral
    double b=0;   //Limite superior de la integral
    double x=0;   //Numero Pseudoaleatorio entre 0 y 1
    double E=0;   //Sumatoria
    const double k= 10000000; //cantidad de numeros aleatorios usados

    a=0;
    b=1;
    for (int i = 0; i < k; i++)
    {
        x= double(rand()%(10000+1))/10000;             //Generacion de numeros aleatorios entre 0 y 1
        E+= double(2*(x*x*x)*((1-x)*(1-x)))/double(1+(x*x));
    }

    E/=k;
    E=(19.0/6.0)-E;
    cout<<"El valor de la aproximacion es: "<<E<<endl;
    cout<<"Lo cual es una aproximacion de Pi"<<endl;

    return 0;
}