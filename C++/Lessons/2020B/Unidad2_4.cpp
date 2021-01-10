//Inclusion de liberias
#include <iostream> //Libreria de entrada y salida
#include <cmath>    //Lifreria de funciones Matematicas

using namespace std;    //Para no tener que poner std:: en cada linea

int main(){

    //definicion de variables
    double pin;      //Valor del enecimo pi
    double oldpin;   //valor del n-1 pi
    int n=2;         //Limite superior de la suma interativa

    //Ciclo principal 
    do
    {
        oldpin = pin; //Guardamos en valor de pi con las n-1 iteraciones
        pin=0; //Reiniciamos el valor de pi a 0 para que converjan los resultados

        //Ciclo que representa a la suma desde i hasta n con i inicial igual a 1
        for (int i = 1; i <= n; i++)
        {
            pin+=pow((-1), (i+1))/float((2*i)*((2*i)+1)*((2*i)+2)); //Serie matematica que aproxima los decimales de pi/4
        }

        pin=3+(4*pin); //multiplicamos el valor de la serie anterior por 4 y se lo sumamos a 3
        n++;           //aumentamos el valor del contador

        //Presentacion de resultados
        cout<< "El Numero de Iteraciones Necesrias Fueron: " << (n-2) << endl;
        cout<< "El valor de pi obtenido fue: " << pin << endl;

    } while (abs(pin-oldpin)>=0.0001);
    
    //El valor 0.0001 es el grado de aproximacion deseado

    return 0;
}