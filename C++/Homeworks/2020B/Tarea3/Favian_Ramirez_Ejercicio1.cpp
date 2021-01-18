//Inclusion de librerias
#include <iostream> //Libreria estandar de entrada y salida
#include <cstdlib>  //Libreria de funciones estandar de c++
#include <ctime>    //Libreria para tratamiento de fechas usando el primer segundo de UNIX como base

using namespace std;

int main(){
    //Declaracion de Variables
    int n=0;    //Guarda el tamaño del vector 
    int aux;    //Variable auxiliar para el reordenamiento del vector por Bubble Sort
    int choose;

    do
    {
        cout<< "Bienvenido a l programa Ejercicio 1 - Tarea 3: Vector de numeros aleatorios"<<endl;

        //Ingreso de datos
        cout<<"Ingrese el n: ";
        cin>>n;

        //Declaracion fuera de lugar npara capturar un n declarado
        int randomNumbers[n]; //Almacena numeros aleatorios en el rango n a 3n+10

        //Cambio de semilla de la funcion rand()
        srand(time(NULL));  //Semilla seteada al numero de segundos transcurridos desde el primer segundo de UNIX

        //Relleno el vector con numeros aleatorios en el rango
        for (int i = 0; i < n; i++)
        {
            randomNumbers[i]=(rand()%(((3*n)+10)-(n)+1))+(n);
        }

        //Reordeno el vector de mayor a menor 
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if(randomNumbers[i]<randomNumbers[j])
                {
                    aux = randomNumbers[i];
                    randomNumbers[i] = randomNumbers[j];
                    randomNumbers[j] = aux;
                }
            }
        }

        //Imprimo los valores en pantalla
        for (int i = 0; i < n; i++)
        {
            cout<< randomNumbers[i]<< "\t";
        }
        
        //Presentacion de resultados
        cout<<"\n\nLa diferencia entre el valor minimo y el valor maximo es: "<<randomNumbers[0]-randomNumbers[n-1]<<endl;
        cout<<"La suma de los 3 primeros numeros ordenados de forma descendente es: "<<randomNumbers[0]+randomNumbers[1]+randomNumbers[2]<<endl;

        cout<<"Para repetir el programa ingrese un numero diferente de 0, para salir ingrese 0: ";
        cin>>choose;

    } while (choose);
    cout<<"Saliendo...\t";
    
    return 0;
}