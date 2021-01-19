//Inclusion de librerias necesarias
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    //Declaracion de variables globales
    double a=0;   //Limite inferior de la integral
    double b=0;   //Limite superior de la integral
    double u=0;   //Numero Pseudoaleatorio entre 0 y 1
    double y=0;   //Variable del cambio de variable
    double E=0;   //Sumatoria
    const double k= 10000000;
    int choose;

    //Seteo de semilla como el numero de segundos desde el primer instante de UNIX
    srand(time(NULL));

    //Menu Principal para escoger que integral evaluar
    cout<<"Bienvenido al programa Ejercicio 6 - Tarea 3: Aproximacion de Integrales por Montecarlo"<<endl;
    
    do
    {
        cout<<"Escoja que Integral desea evaluar:"<<endl;
        cout<<"\t1. S(log(x^2+4x-3)dx) desde 1 hasta 5"<<endl;
        cout<<"\t2. S(e^(x+2x^2)dx) desde -2 hasta 2"<<endl;
        cout<<"\t3. S((3x(1+x^2)^(-2))dx) desde 0 hasta +infinito"<<endl;
        cout<<"\n\t0. Salir"<<endl;
        cout<<"Integral a evaluar: ";
        cin>>choose;

        switch (choose)
        {
        case 1:
        {
            a=1;
            b=5;
            for (int i = 0; i < k; i++)
            {
                u= (double)(rand()%(10000+1))/10000;             //Generacion de numeros aleatorios entre 0 y 1
                y= (double)(a+((b-a)*u));                        //Cambio de variable para que este dentro de los limites 0 y 1
                E+= log((y*y)+(4*y)-3);
                
            }

            E*=(b-a)/k;
            cout<<"El valor de la aproximacion de la integral es: "<<E<<endl;

            
            break;
        }
        case 2:
        {
            a=(-2);
            b=(2);
            for (int i = 0; i < k; i++)
            {
                y= a+((b-a)*u);                         //Cambio de variable para que este dentro de los limites 0 y 1
                u= double(1+rand()%100000)/100000;    //Generacion de numeros aleatorios entre 0 y 1
                E+= (b-a)*exp(y+(2*pow(y,2)));
            }
            cout<<"El valor de la aproximacion de la integral es: "<<double(E/k)<<endl;
            
            break;
        }
        case 3:
        {
            a=0;
            //b= infinito;
            for (int i = 0; i < k; i++)
            {
                y= a+((b-a)*u);                         //Cambio de variable para que este dentro de los limites 0 y 1
                u= double(1+rand()%100000)/100000;    //Generacion de numeros aleatorios entre 0 y 1
                E+= (3*y)*pow(1+pow(y,2),(-2));
            }
            
            break;
        }
        
        default:
        {
            if (choose)
            {
                cout<<"El Valor Ingresado es invalido, por favor intente de nuevo"<<endl;
            }else
            {
                cout<<"Saliendo... "<<endl;
            }
            
            break;
        }    
        }
    } while (choose);
    
    return 0;
}