//Inclusion de librerias
#include <iostream> //Libreria estandar de entrada y salida, tambien se puede usar stdio.h
#include <cstdlib>  //Libreria de funciones estandar de C++
#include <ctime>    //Libreria de manejo de fechas usando de base el primer segundo de Unix

using namespace std;

int main(){
    //Declaracion de variables
    int n;  //Longitud del vector randomNumbers

    //Seteo de la semilla de la funcion rand()
    srand(time(NULL));  //Semilla fijada al numero de segundos transcurridos desde el primer segundo de UNIX

    //Ingreso de datos
    cout<<"Ingrese un entero n>5: ";
    cin>>n; 

    //Declaracion de variable fuera de lugar pra capturar un n asignado
    int randomNumbers[(2*n)+3]; //Vector que almacena numeros aleatorios

    //Ciclo que rellena el vector con numeros aleatorios en el rango 10 a 1000
    for (int i = 0; i < (2*n)+3; i++)
    {
        randomNumbers[i]=(rand()%((1000)-(10)+1))+(10);
    }

    //Presentacion de resultados
    cout<<"El vector generado fue: "<<endl;
    for (int i = 0; i < (2*n)+3; i++)
    {
        for (int j = 2; j < i; j++)
        {
            
        }
        
        cout<<randomNumbers[i]<<"\t";
    }
    

    return 0;
}