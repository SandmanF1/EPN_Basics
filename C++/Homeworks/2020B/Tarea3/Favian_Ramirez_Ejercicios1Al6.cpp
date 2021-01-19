//Inclusion de librerias necesarias
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
    //Declaracion de variables Globales
    int choose1;

    cout<<"Bienvenido al Programa Tarea3: Estructuras y Numeros Aleatorios"<<endl;

    do
    {
        cout<<"\t1. Ejercicio 1: Vector de numeros aleatorios"<<endl;
        cout<<"\t2. Ejercicio 2: Numeros primos en el vector aleatorio"<<endl;
        cout<<"\t3. Ejercicio 3: Reordenamiento del Vector"<<endl;
        cout<<"\t4. Ejercicio 4: Directorio de Clientes"<<endl;
        cout<<"\t5. Ejercicio 5: Calculo de los Xi"<<endl;
        cout<<"\t6. Ejercicio 6: Aproximacion de Integrales por Montecarlo"<<endl;
        cout<<"\n0. Salir."<<endl;
        cout<<"\nEscoja que programa desea correr: ";
        cin>>choose1;

        switch (choose1)
        {
        case 1:
        {    
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
                        if(randomNumbers[i]<randomNumbers[j])   //Compruebo si el vector es menor
                        {
                            aux = randomNumbers[i];             //En caso de ser menor lo guardo en mi variable auxiliar
                            randomNumbers[i] = randomNumbers[j];//Intercambio los valores de posicion
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
            break;
        }
        case 2:
        {    
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
            break;
        }
        case 3:
        {    
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
            break;
        }
        case 4:
        {    
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
            break;
        }
        case 5:
        {    
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
            break;
        }
        case 6:
        {    
            double a=0;   //Limite inferior de la integral
            double b=0;   //Limite superior de la integral
            double u=0;   //Numero Pseudoaleatorio entre 0 y 1
            double y=0;   //Variable del cambio de variable
            double E=0;   //Sumatoria
            const double k= 10000000;
            int choose;

            //Seteo de semilla como el numero de segundos desde el primer instante de UNIX
            srand(time(NULL));

            //Menu Principal para escoger que integral evaluar
            cout<<"Bienvenido al programa Ejercicio 6 - Tarea 3: Aproximacion de Integrales por Montecarlo"<<endl;
            
            do
            {
                cout<<"Escoja que Integral desea evaluar:"<<endl;
                cout<<"\t1. S(log(x^2+4x-3)dx) desde 1 hasta 5"<<endl;
                cout<<"\t2. S(e^(x+2x^2)dx) desde -2 hasta 2"<<endl;
                cout<<"\t3. S((3x(1+x^2)^(-2))dx) desde 0 hasta +infinito"<<endl;
                cout<<"\n\t0. Salir"<<endl;
                cout<<"Integral a evaluar: ";
                cin>>choose;

                switch (choose)
                {
                case 1:
                {
                    a=1;
                    b=5;
                    for (int i = 0; i < k; i++)
                    {
                        u= (double)(rand()%(10000+1))/10000;             //Generacion de numeros aleatorios entre 0 y 1
                        y= (double)(a+((b-a)*u));                        //Cambio de variable para que este dentro de los limites 0 y 1
                        E+= log((y*y)+(4*y)-3);
                        
                    }

                    E*=(b-a)/k;
                    cout<<"El valor de la aproximacion de la integral es: "<<E<<endl;

                    
                    break;
                }
                case 2:
                {
                    a=(-2);
                    b=(2);
                    for (int i = 0; i < k; i++)
                    {
                        u= (double)(rand()%(1000000+1))/1000000;    //Generacion de numeros aleatorios entre 0 y 1
                        y= (double)(a+((b-a)*u));                         //Cambio de variable para que este dentro de los limites 0 y 1
                        E+= exp(y+(2*pow(y,2)));
                    }

                    E*=(b-a)/k;
                    cout<<"El valor de la aproximacion de la integral es: "<<E<<endl;
                    
                    break;
                }
                case 3:
                {
                    a=0;
                    //b= infinito;
                    for (int i = 0; i < k; i++)
                    {
                        u= double(1+rand()%100000)/100000;    //Generacion de numeros aleatorios entre 0 y 1
                        y= (1.0/u)-1;                         //Cambio de variable para que este dentro de los limites 0 y 1
                        E+= ((3*y)*pow(1+pow(y,2),(-2)))/(u*u);
                    }
                    E/=k;
                    cout<<"El valor de la aproximacion de la integral es: "<<E<<endl;
                    
                    break;
                }
                
                default:
                {
                    if (choose)
                    {
                        cout<<"El Valor Ingresado es invalido, por favor intente de nuevo"<<endl;
                    }else
                    {
                        cout<<"Saliendo... "<<endl;
                    }
                    
                    break;
                }    
                }
            } while (choose);
            break;
        }
        
        default:
            if (choose1)
                {
                    cout<<"El Valor Ingresado es invalido, por favor intente de nuevo"<<endl;
                }
            break;
        }
        
    } while(choose1);

    cout<<"Saliendo... "<<endl;
    return 0;
}