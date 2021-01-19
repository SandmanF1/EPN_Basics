#include <iostream>

using namespace std;

int main(){
    //Declaracion de variables globales
    int X[9];
    X[0]=6;

    //Presentacion
    cout<<"Bienvenido al programa Ejercicio 5 - Tarea 3: Calculo de los Xi. \n"<<endl;

    cout<<"\tEl valor de x[0] es: "<<X[0]<<endl;

    for (int i = 1; i < 9; i++)
    {
        X[i]=(7*X[i-1])%29;
        cout<< "\tEl valor de X["<<i<<"] es: "<<X[i]<<endl;
    }
    
    

    return 0;
}