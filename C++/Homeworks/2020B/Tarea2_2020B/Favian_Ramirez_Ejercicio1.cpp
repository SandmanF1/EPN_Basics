/*Ejercicio 1, consiste en un programa que lea números ingresados por el usuario hasta que el mismo introduzca
un valor de 999 (criterio de parada), en ese momento el programa debe finalizar y mostrar
en pantalla el máximo y mínimo número ingresado, así como la suma total de los números
ingresados.*/

#include <iostream>

using namespace std;

int main(){

    //Declaración de variables
    double input, max, min, sum=0;

    //Mensaje de bienvenida y explicación del programa
    cout<<"+++ Bienvenido al Programa Ejercicio 1 Tarea 2 +++\n\nEl Programa leera los numeros que ingreses\nSi ingresas 999 se termina la ejecicion\nAl final te devolvera el minimo, el maximo y la suma de todos los numeros ingresados"<<endl;
    
    //Inicializo las variables fuera del ciclo
    cout<<"\nIngrese un numero, 999 para terminar: ";
    cin>>input;
    if (input==999)
    {
        return 0;
    }
    max=input;
    min=input;
    sum+=input;

    //Bucle Principal
    do
    {
        cout<<"\nIngrese un numero, 999 para terminar: ";
        cin>>input;
        if (input<min)
        {
            min=input;
        }
        if (input>max && input!=999)
        {
            max=input;
        }
        sum+=input;
                
    } while (input!=999);
    
    //Presentación de resultados
    cout<<"\nPrograma terminado, los resultados son:\n\n\tMaximo= "<<max<<"\n\tMinimo= "<<min<<"\n\tSuma= "<<sum<<"\n\nGracias por usar mi programa att: Favian Ramirez - Fisica - 201810309 - 2020B"<<endl;

    return 0;
}