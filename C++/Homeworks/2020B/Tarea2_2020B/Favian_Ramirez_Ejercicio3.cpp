/*Ejercicio 3, Aproximar pi usando la formula dada y un grado de aproximacion dado por el usuario.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //Declaración de variables
    double e, pik, pik_1;
    int k=0;
    bool check=false;

    //Mensaje de bienvenida y explicación del programa
    cout<<"+++ Bienvenido al Programa Ejercicio 1 Tarea 2 +++"<<endl;
    cout<<"\nEl programa aproxima el valor del irracional pi dado un grado de exactitud mediante la serie: "<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\nsuma desde n=0 hasta k de ((1/(16^n))*((4/((8*n)+1))-(2/((8*n)+4))-(1/((8*n)+5))-(1/((8*n)+6))))"<<endl;
    cout<<"\n----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\nIngrese el grado de aproximacion deseado [0.001;0.1]: ";
    cin>>e;

    do
    {
        pik_1=pik;
        pik=0;

        for (int n = 0; n <= k; n++)
        {
            pik+=((4.0/((8*n)+1))-(2.0/((8*n)+4))-(1.0/((8*n)+5))-(1.0/((8*n)+6)))/pow(16,n);
        }

        k++;
    } while (abs(pik-pik_1)>=e);
    
    cout<<"El valor aproximado de pi es: "<<pik<<endl;

    return 0;
}