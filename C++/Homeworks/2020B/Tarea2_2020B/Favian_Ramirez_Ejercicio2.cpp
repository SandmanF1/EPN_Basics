/*Ejercicio 2, escribir un programa que evalue las 3 sumas iterativas presentadas.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //Declaración de variables globales
    int choose, n;
    long double suma=0,f1=1, f2=1, f3=1;

    //Mensaje de bienvenida y explicación del programa
    cout<<"+++ Bienvenido al Programa Ejercicio 2 Tarea 2 +++"<<endl;
    cout<<"El programa evaluara las sumas especificadas, ingrese el indice de la suma que desea evaluar:\n"<<endl;
    cout<<"\t1. Suma desde k=0 hasta n de (x^k)/k!, donde x pertenece a los reales y n pertenece a los naturales"<<endl;
    cout<<"\t2. Suma desde j=0 hasta n de n!/j!(n-j)!, donde n pertenece a los naturales"<<endl;
    cout<<"\t3. Suma desde k=1 hasta n de k/(3^k)(k+1), donde n pertenece a los naturales"<<endl;
    cout<<"\t4. Salir"<<endl;
    cout<<"\nIngrese su eleccion(1/2/3/4): ";
    cin>>choose;

    while (choose<1 || choose>4)
    {
        cout<<"\nValor ingresado incorrecto, por favor ingrese una respuesta valida\nIngrese su eleccion(1/2/3/4): ";
        cin>>choose;
    }
    

    switch (choose)
    {
    case 1:
        double x;

        cout<<"\nHa escogido la opcion 1\n\tIngrese el valor de n: ";
        cin>>n;
        cout<<"\tIngrese el valor de x: ";
        cin>>x;

        for (int k = 0; k < n; k++)
        {
            //factorial del contador k
            for (int i = 2; i <= k; i++)
            {
                f1*=i;
            }
            
            suma+=(pow(x,k))/(f1);
        }
        
        cout<<"\nEl resultado de la suma es: "<<suma<<endl;

        break;
    
    case 2:
        cout<<"\nHa escogido la opcion 2\n\tIngrese el valor de n: ";
        cin>>n;

        for (int j = 0; j <= n; j++)
        {
            //factorial del contador j
            for (int i = 2; i <= j; i++)
            {
                f1*=i;
            }

            //factorial del natural n
            for (int i = 2; i <= n; i++)
            {
                f2*=i;
            }

            //factorial de (n-j)
            for (int i = 2; i <= (n-j); i++)
            {
                f3*=i;
            }

            suma+=f2/(f1*f3);
        }

        cout<<"\nEl resultado de la suma es: "<<suma<<endl;

        break;

    case 3:
        cout<<"\nHa escogido la opcion 3\n\tIngrese el valor de n: ";
        cin>>n;

        for (int k = 1; k <= n; k++)
        {
            suma+=(k/(pow(3,k)*(k+1)));
        }

        cout<<"\nEl resultado de la suma es: "<<suma<<endl;
        
        break;

    default:
        cout<<"\nHa escogido salir!"<<endl;
        break;
    }

    cout<<"\nGracias por usar mi programa, att: Favian Ramirez - RRA Fisica - 201810309 - 2020B"<<endl;

    return 0;
}