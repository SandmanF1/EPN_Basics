/*Ejercicio 4, consiste en un programa que calcule las raices de ecuaciones no lineales mediante el metodo de Newton Raphson.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //Declaración de variables
    long double derivada=0.0, xi=0.0, xi_1=0.0, fx=0.0, gx=0.0, a=0.0;
    long const double e=2.718281828459045235;

    //Mensaje de bienvenida y explicación del programa
    cout<<"+++ Bienvenido al Programa Ejercicio 4 Tarea 2 +++\n"<<endl;
    cout<<"El presente programa realiza una aproximacion del valor de x cuando\nf(x)=0 mediante el metodo de Newton-Raphson de las funciones:"<<endl;
    cout<<"\n\tfx= (e^x)+((2*(x^3))-(3*x))\n\tgx= (2*(x^2))+(x*cos(x))\n"<<endl;

    //Aproximacion de la funcion 1, f(x) con X0=0
    do
    {
        xi_1=xi;
        a=double(xi_1)-0.00000000000001;

        //Evaluo mi funcion en el punto X0
        fx= pow(e,xi_1)+((2*pow(xi_1,3))-(3*xi_1));

        //Defino la derivada aproximada mediante la aproximacion de la pendiente de la recta secante: f(x)-f(x)/x-a
        derivada= (double(pow(e,xi_1)+((2*pow(xi_1,3))-(3*xi_1)))-double(pow(e,a)+((2*pow(a,3))-(3*a))))/(xi_1-a);

        //aplico la aproxima cion de Newton-Raphson
        xi= xi_1-(fx/derivada);

        cout<<"\tEl valor actual es: "<< xi <<endl;

    } while (abs(xi-xi_1)>= 0.00001);

    cout<<"\nEl valor final de la aproximacion 1 es X= "<<xi<<"\n"<<endl;

    //Asigno X0=(-2)
    xi=(-2.0);

    //Aproximacion de la funcion 2, g(x), con X0=(-2)
    do
    {
        xi_1=xi;
        a=double(xi_1)-0.00000000000001;
        gx= (2*xi_1*xi_1)+(xi_1*cos(xi_1));
        derivada= (double((2*xi_1*xi_1)+(xi_1*cos(xi_1)))-double((2*a*a)+(a*cos(a))))/(xi_1-a);

        xi= xi_1-(gx/derivada);

        cout<<"\tEl valor actual es: "<< xi <<endl;

    } while (abs(xi-xi_1)>= 0.00001);
    
    cout<<"\nEl resultado final de la aproximacion 2 es x= "<<xi<<endl;
    cout<<"\nGracias por usar mi programa, att: Favian Ramirez - 201810309 - RRA Fisica - 2020B"<<endl;
    
    return 0;
}