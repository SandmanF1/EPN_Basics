//Declaracion de librerias
#include <iostream> //Libreria estandar de Entrada y Salida
#include <string>   //Libreria para el tratamiento de cadenas de caracteres

using namespace std;

int main(){

    //Declaracion de Variables Globales
    struct cliente  //Este es el nombre del tipo de variable a crear, mas no el de la variable
    {
        string Nombre;          //Cadena de texto que almacenara el nombre del ciente, no acepta espacios
        int Edad;               //Numero entero que representa la edad del cliente
        string Direccion;       //Cadena de caracteres que almacena la direccion del cliente, no acepta espacios
        double Ventas_Contado;  //Numero mixto que almacena el valor de las ventas al contado
        double Ventas_Credito;  //Numero Mixto que almacena el valor de las ventas a Credito
    };
    int choose;
    
    //Debido a estar limitado al uso estatico de memoria establecere un numero arbitrario de clientes n

    //Saludo y explicacion de directrices
    cout<<"Bienvenido al programa Ejercicio 4 - Tarea 3: Directorio de Clientes"<<endl;
    cout<<"Para un correcto funcionamiento del software por favor siga las siguientes directrices: "<<endl;
    cout<<"\t1. No escriba espacios en blanco, use guion Bajo."<<endl;
    cout<<"\t2. Escriba los valores de dinero con son cifras decimales así estas sean .00"<<endl;
    cout<<"\t3. Ingrese datos solo del tipo especifico, si ingresa por ejemplo, letras en un campo numerico el programa puede crashear."<<endl;

    //Ciclo Princiapl, evita tener que volver a abrir el programa para volver a ejecutarlo desde el principio*
    do
    {
        //Declaracion de variables locales 
        int n;

        //Ingreso de Datos
        cout<<"\nPara comenzar ingrese con cuantos clientes desea trabajar (n), 0 para salir: ";
        cin>>n;

        //Modulo debug, filtra datos erroneos en lo posible para evitar que el porgrama crashee
        if (n>0)
        {
            //Declaracion de variables locales 2
            struct cliente C[n];            //Variable C de tipo vector de estructuras
            double edadPromedio= 0;         //Edad Promedio de los clientes
            double totalVentasContado= 0;   //Suma de todas las ventas al contado de todos los cleintes
            double totalVentasCredito= 0;   //Suma de todas las ventas a credito de todos los cleintes

            //Ciclo de rellenado del vector con los datos de los cleintes
            for (int i = 0; i < n; i++)
            {
                cout<<"\nCliente "<<i+1<<endl;
                cout<<"\tIngrese el Nombre del Cliente "<<i+1<<" : ";
                cin>>C[i].Nombre;
                cout<<"\tIngrese la Edad del Cliente "<<i+1<<" : ";
                cin>>C[i].Edad;
                edadPromedio+=C[i].Edad;                    //Aprovecho para ir sumando las edades para sacar el promedio mas adelante
                cout<<"\tIngrese la Direccion del Cliente "<<i+1<<" : ";
                cin>>C[i].Direccion;
                cout<<"\tIngrese el total de las Ventas al Contado en dolares del Cliente "<<i+1<<" : ";
                cin>>C[i].Ventas_Contado;
                totalVentasContado+= C[i].Ventas_Contado;   //Aprovecho para ir sumando las ventas al contado sin tener que crear otro ciclo
                cout<<"\tIngrese el Total de las Ventas a Credito en dolares del Cliente "<<i+1<<" : ";
                cin>>C[i].Ventas_Credito;
                totalVentasCredito+= C[i].Ventas_Credito;   //Aprovecho para ir sumando las ventas a credito
            }

            edadPromedio/=n;    //Saco promedio de las edades


            cout<<"\nPerfecto, haz llenado la informacion de todos los cliente!... ahora, que deseas hacer con ella: "<<endl;

            //Ciclo secundario para trabajar con los datos ingresados 
            do
            {
                cout<<"\nMENU PRINCIPAL"<<  endl;
                cout<<"\t1. Mostrar la edad promedio de los clientes."<<endl;
                cout<<"\t2. Contabilizar el total de ventas al contado y a credito."<<endl;
                cout<<"\t3. Mostrar una lista de los clientes con un gasto es inferior a la media."<<endl;
                cout<<"\t4. Mostrar todo lo anterior."<<endl;
                cout<<"\n\n\t0.Salir. "<<endl;
                cout<<"Que escoge?: ";
                cin>>choose;

                switch (choose)
                {
                case 1:
                {
                    cout<<"La edad Promedio de los clientes es: "<<edadPromedio<<endl;
                    break;
                }
                
                case 2:
                {
                    cout<<"El Total de Ventas al contado es: "<<totalVentasContado<<endl;
                    cout<<"El Total de Ventas a Credito es: "<<totalVentasCredito<<endl;
                    cout<<"El Total de Ventas es: "<<totalVentasCredito+totalVentasContado<<endl;
                    break;
                }
                
                case 3:
                {
                    cout<<"Las medias de gastos son: "<<endl;
                    cout<<"\tGasto Al Contado Promedio: "<< totalVentasContado/n<<endl;
                    cout<<"\tGasto A Credito Promedio: "<< totalVentasCredito/n<<endl;
                    cout<<"\tGasto Total Promedio: "<< (totalVentasContado+totalVentasCredito)/n<<endl;
                    cout<<"\nLos clientes con un gasto total inferior a la media son: "<<endl;

                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Contado+C[i].Ventas_Credito)<((totalVentasContado+totalVentasCredito)/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Contado+C[i].Ventas_Credito<<endl;
                        }
                        
                    }

                    cout<<"\nLos clientes con un gasto al contado total inferior a la media son: "<<endl;

                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Contado)<(totalVentasContado/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Contado<<endl;
                        }
                        
                    }

                    cout<<"\nLos clientes con un gasto a Credito total inferior a la media son: "<<endl;

                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Credito)<(totalVentasCredito/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Credito<<endl;
                        }
                        
                    }
                    
                    break;
                }
                case 4:
                {    
                    cout<<"La edad Promedio de los clientes es: "<<edadPromedio<<endl;
                    cout<<"El Total de Ventas al contado es: "<<totalVentasContado<<endl;
                    cout<<"El Total de Ventas a Credito es: "<<totalVentasCredito<<endl;
                    cout<<"El Total de Ventas es: "<<totalVentasCredito+totalVentasContado<<endl;
                    cout<<"Las medias de gastos son: "<<endl;
                    cout<<"\tGasto Al Contado Promedio: "<< totalVentasContado/n<<endl;
                    cout<<"\tGasto A Credito Promedio: "<< totalVentasCredito/n<<endl;
                    cout<<"\tGasto Total Promedio: "<< (totalVentasContado+totalVentasCredito)/n<<endl;
                    cout<<"\nLos clientes con un gasto total inferior a la media son: "<<endl;

                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Contado+C[i].Ventas_Credito)<((totalVentasContado+totalVentasCredito)/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Contado+C[i].Ventas_Credito<<endl;
                        }
                        
                    }

                    cout<<"\nLos clientes con un gasto al contado total inferior a la media son: "<<endl;
                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Contado)<(totalVentasContado/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Contado<<endl;
                        }
                        
                    }

                    cout<<"\nLos clientes con un gasto a Credito total inferior a la media son: "<<endl;
                    for (int i = 0; i < n; i++)
                    {
                        if ((C[i].Ventas_Credito)<(totalVentasCredito/n))
                        {
                            cout<<"\t"<<C[i].Nombre<<" - "<<C[i].Ventas_Credito<<endl;
                        }
                        
                    }
                    break;
                }
                default:
                {
                    if (choose)
                    {
                        cout<<"Valor Ingresado Incorrecto, Intente Nuevamente"<<endl;
                    }else
                    {
                        cout<<"Saliendo... "<<endl;
                    }
                    
                    break;
                }
                }
            } while (choose);
            
            
        }else if (n<0)
        {
            cout<<"Valor Ingresado Incorrecto, Intente de Nuevo"<<endl;
        }
        cout<<"Para Volver a ejecutar el Programa Digite un numero distinto de 0, para salir digite 0: ";
        cin>>choose;
    } while (choose);
    
    cout<<"Saliendo... "<<endl;
    
    return 0;
}