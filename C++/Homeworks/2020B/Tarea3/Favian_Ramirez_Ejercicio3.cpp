//Inclusion de Librerias
#include <iostream> //Libreria estandar de entrada y salida
#include <ctime>    //Libreria estandar de manejo de fechas usando de base el primer segundo de UNIX
#include <cstdlib>  //Libreria de Funciones Estandar de C++

using namespace std;

int main(){
    //Declaracion de variables Globales
    int n;

    cout<<"Bienvenido al programa Ejercicio 3 - Tarea 3: Reordenamiento del Vector"<<endl;
    do
    {
        cout<<"\nIngresa un valor n>3 para que sea la longitud del vector a general o 0 para salir: ";
        cin>>n;

        if (n>3)
        {
            //Declaracion de variables locales
            double aux;
            double randomNumbers[n];

            //Cambio de semilla de la funcion rand()
            srand(time(NULL));  //Semilla seteada al numero de segundos transcurridos desde el primer segundo de UNIX

            //Relleno el vector con numeros aleatorios en el rango
            for (int i = 0; i < n; i++)
            {
                randomNumbers[i]=double((rand()%(4765-(-2143)+1))+(-2143))/1000.0; //Divido para un 1 seguido de tantos 0 como decimales quiero
            }

            cout<<"El vector sin ordenar es: "<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<< randomNumbers[i]<< "\t";
            }

            //Reordeno el vector de mayor a menor 
            for (int i=0; i<n; i++)
            {
                for (int j=i+1; j<n; j++)
                {
                    if(randomNumbers[i]<randomNumbers[j])   //Compruebo si el vector es menor
                    {
                        aux = randomNumbers[i];             //En caso de ser menor lo guardo en mi variable auxiliar
                        randomNumbers[i] = randomNumbers[j];//Intercambio los valores de posicion
                        randomNumbers[j] = aux;
                    }
                }
            }

            cout<<"\n\nEl vector ordenado es: "<<endl;

            //Imprimo los valores en pantalla
            for (int i = 0; i < n; i++)
            {
                cout<< randomNumbers[i]<< "\t";
            }

        }else if (n<3 && n>0)
        {
            cout<<"\nValor ingresado Invalido, intente de nuevo"<<endl;
        }
        
    } while (n);
    
    cout<<"\nSaliendo... "<<endl;
    return 0;
}