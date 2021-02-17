/*Ejercicio 5, Escriba un programa que lea de la entrada estándar un número entero n > 1, y determine:
1. El conjunto de números primos en el intervalo [2, n^2].
2. La suma de los números no primos en el intervalo [n; 2n^3 − 5].*/

#include <iostream>

using namespace std;

int main(){

    //Declaración de variables
    int n, suma=0;
    bool prime=true;

    //Mensaje de bienvenida y explicación del programa
    cout<<"+++ Bienvenido al Programa Ejercicio 5 Tarea 2 +++\n"<<endl;
    cout<<"El programa lee de la entrada estandar un entero mayor que 1 y devuelve:\n\n\t1. El conjunto de numeros primos en el intervalo [ 2, n^2].\n\t2. La suma de los numeros no primos en el intervalo [ n; (2n^3)-5]."<<endl;
    cout<<"\nTenga en cuenta que el tiempo de ejecucion puede aumentar exponencialmente con el valor n ingresado!"<<endl;

    cout<<"\ningrese un n > 1: ";
    cin>>n;

    while(n<=1){
        cout<<"\nEl numero ingresado esta fuera del intervalo n > 1, por favor, ingrese un numero valido!\n\nIngrese un n > 1: ";
        cin>>n;
    }

    //Evaluacion del conjunto de numeros primos entre 2 y n^2
    cout<<"\nLos numeros primos en el intervalo [ 2; "<<n*n<<"] son: \n"<<endl;
    for (int i = 2; i <= (n*n); i++)
    {
        prime=true;
        for (int k = 2; k < i; k++)
        {

            if ((i%k)==0)
            {
                prime=false;
            }
            
        }

        if (prime)
        {
            cout<<"\t"<<i<<" es primo!"<<endl;
        }
        
    }
    
    //Suma de numeros no primos entre n y 2(n^3)-5
    cout<<"\nLos no primos en el intervalo [ "<<n<<"; "<<(2*n*n*n)-5<<"] son: \n"<<endl;

    for (int i = n; i <= ((2*n*n*n)-5); i++)
    {
        prime=true;
        for (int k = 2; k < i; k++)
        {

            if ((i%k)==0)
            {
                prime=false;
            }
            
        }

        if (!prime)
        {
            cout<<"\t"<<i<<" no es primo! ==> added a la suma"<<endl;
            suma+=i;
        }
        
    }

    cout<<"\nLa suma de los no primos en el intervalo [ "<<n<<"; "<<(2*n*n*n)-5<<"] es: "<<suma<<endl;
    cout<<"\nGracias por usar mi programa, att: Favian Ramirez - 201810309 - RRA Fisica - 2020B"<<endl;
    
    return 0;
}