//Las lineas de codigo comentadas son exclusivas para OS Windows, no uso flags por estar fuera del temario.
//Si usa un sistema Windows recomiendo descomentar las funciones system() para una mejor visualizacion del programa.

#include <iostream>
//#include <stdlib.h>
#include <cmath>

using namespace std;

// Generar un menú para que el usuario
// 1) Ingrese un valor n > 5 y se contabilice los numeros primos en el intervalo
// [2,n];
// 2) Ingresar dos enteros b > a > 3 y contabilizar los numeros primos en el
// intervalo [a,b];
// 3) Ingresa un valor n>3 y genera un vector aleatorio de longitud n con datos en el
// intervalo [n, n^2] y contabiliza los numeros primos.
// n=4 7 15 8 11  [4, 16]

bool EsPrimo(int x);


int main(){

    //Definición de variables globales
    int opcion;

    //Comienza el menu
    do
    {
        //system("cls");
        cout << "\n\t\tPrograma que contabiliza numeros primos" << endl;
        cout << "\t\t---------------------------------------" << endl;
        cout << "\t1) Conteo en el intervalo [2,n] con n > 5." << endl;
        cout << "\t2) Conteo en el intervalo [a,b] con b > a > 3." << endl;
        cout << "\t3) Conteo en el intervalo [n,n^2], con vector aleatorio de longitud n.\n" << endl;
        cout << "\t0) Salir." <<endl,
        cout << "\nIngrese la opcion : ";
        cin >> opcion;

        switch(opcion){
            case 1:{
                //Declaracion de variables locales
                int n, nprimos=0;

                //Ingreso de datos
                cout << "Ingrese un valor de (n > 5) : ";
                cin >> n;

                //Comprobacion en el intervalo
                if(n > 1){
                    for(int j=2; j<=n; j++){
                        if(EsPrimo(j)){
                            nprimos++;
                            cout << j << " Es Primo!"<<endl;
                        }
                    }
                } else {
                    cout << "Valor de n ingresado no es valido" << endl;
                };
                
                //Presentacion de resultados
                cout << "El total de primos encontrados es : " << nprimos << endl;

                //system("pause");
                
                break;
            }
            
            case 2:{
                //declaracion de variables locales
                int a, b, nprimos=0;

                //Ingreso de Datos
                cout << "Ingrese un valor para a > 3: ";
                cin >> a;
                cout << "Ingrese un valor para b > a > 3: ";
                cin >> b;

                //Comprobacion en el intervalo
                if (a>3)
                {
                    if (b>a)
                    {
                        for (int i = a; i <= b; i++)
                        {
                            if (EsPrimo(i))
                            {
                                nprimos++;
                                cout << i << " Es Primo!" << endl;
                            }
                            
                        }
                        
                    }else
                    {
                        cout << "Error: El valor ingresado para b no es mayor que a, ingrese un valor b>a" << endl;
                    }
                    
                    
                }else
                {
                    cout << "Error; El valor ingresado para a no es mayor que 3, ingrese un valor a>3" << endl;
                }
                
                

                //Presentacion de resultados
                cout << "El total de numeros primos en el intervalo es: " << nprimos<<endl;
                //system("pause");
                break;
            }
            
            case 3:{
                //declaracion de variables locales
                int n, nprimos=0, ver;

                //Ingreso de Datos
                cout << "Ingrese un valor n > 3 para el tamanio del vector: ";
                cin >> n;
                int primeColletion[n];  //Declaración fuera de lugar para capturar el valor de n (c++20), caso contrario el proceso es mas tedioso.

                //Comprobacion en el intervalo y relleno del vector
                if (n>3)
                {
                    for (int i = 0; i < n; i++)
                    {
                        primeColletion[i]= (rand()%((n*n)-(n)+1))+(n);
                        if (EsPrimo(primeColletion[i]))
                        {
                            cout << "\t" << primeColletion[i] << " Es Primo!" << endl;
                            nprimos++;
                        }
                        
                    }
                    
                }else
                {
                    cout << "Error: El valor de n no es mayor que 3, por favor ingrese un valor n > 3" << endl;
                }
                
                
                //Presentacion de resultados
                cout << "El total de numeros primos encopntrados es: " << nprimos << endl;
                cout << "Si desea ver el vector completo ingrese un numero diferente de 0, caso contrario ingrese 0: ";
                cin >> ver;

                if (ver)
                {
                    for (int i = 0; i <= n; i++)
                    {
                        cout << primeColletion[i] << "\t";
                    }
                    //system("pause");
                }else
                {
                    cout << "Saliendo... "<<endl;
                }
                
                
                break;
            }
            default:
            {   
                if (opcion)
                {
                    cout << "La opcion ingresada no es valida, intente de nuevo" << endl;
                }else
                {
                    cout << "Saliendo..." << endl;
                }
                break;
            }
                
        }
        
        
    } while (opcion);
    
    return 0;
}

bool EsPrimo(int x){
    bool respuesta=false;
    int ndiv=0;
    for(int j=1; j<=x; j++){
        if(x % j == 0){
            ndiv++;
        }
    };
    if(ndiv==2){
        respuesta=true;
    }
    return respuesta;
};

//Código hecho por Favían Ramirez, derechos reservados.