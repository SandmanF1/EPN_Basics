//Inclusion de librerias
#include <iostream> //Libreria estandar de entrada y salida, tambien se puede usar stdio.h
#include <cstdlib>  //Libreria de funciones estandar de C++
#include <ctime>    //Libreria de manejo de fechas usando de base el primer segundo de Unix

using namespace std;

int main(){
    //Declaracion de variables
    int n;  //Longitud del vector randomNumbers
    bool prime=true;
    int nPrimos=0;

    //Seteo de la semilla de la funcion rand()
    srand(time(NULL));  //Semilla fijada al numero de segundos transcurridos desde el primer segundo de UNIX

    cout<<"Bienvenido al programa Ejercicio 2 - Tarea 3: Numeros primos en el vector aleatorio"<<endl;

    do
    {
        //Ingreso de datos
        cout<<"Ingrese un entero n>5 o 0 para salir: ";
        cin>>n; 
        if (n>5)
        {
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
                prime= true;    //El indicador se resetea a verdadero cada vez que se va a comprobar un numero, así me ahorro un condicional
                for (int j = 2; j < randomNumbers[i] && prime; j++) //La condicion adicional es para dejar de buscar una vez se encontró un divisior exacto
                {
                    if(!(randomNumbers[i]%j)){  //La expresion evalua verdadero cuando el modulo es 0
                        prime=false;
                    }
                }
                if (prime)
                {
                    cout<<"\t"<<randomNumbers[i]<<" Es Primo!"<<endl;
                    nPrimos++;
                }else
                {
                    cout<<"\t"<<randomNumbers[i]<<endl;
                }
                
            }
            cout<<"\nEl Total de Numeros Primos en el vector fue de: "<<nPrimos<<endl;
            cout<<"\nPara terminar la ejecucion del codigo digite 0, para volver a ejecutar ingrese cualquier numero diferente de 0: ";
            cin>>n;
        }else if (n<=5 && n>0)
        {
            cout<<"Valor Ingresado Incorrecto, intente de nuevo"<<endl;
        }
    
    } while (n);

    cout<<"Saliendo... "<<endl;

    return 0;
}