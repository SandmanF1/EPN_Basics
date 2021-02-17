//Inclusion de librerias
#include<iostream>
#include<cmath>

//Declaracion de variables globales
//int m; deprecated

//Definicion de espacio de nombres
using namespace std;

//Declaracion de Funciones +++++++++++++++++++++++++++++++++++++++++++++++++++++
//Funcion que divide usando restas sucesivas
void division(int dividendo, int divisor, int &cociente, int &residuo);
//Funcion que genera un vector de longitud 16 con valores aleatorios en el intervalo [-8.25; 12.75]
void generar(int v[], int dim);
//Funcion que genera una matriz de dimension mxn=16 con los elementos del vector generado por la funcion generar
void matriz(int M[][16], int v[], int fila, int columna);//Lo siento pero un m no declarado o variable no se admite en un arreglo estatico
void Serie(int n, double &S, double &z);
void sumarFilasImpares(int M[][16], int fila, int columna, int &suma);
//Funciones Sudoku
//Fin Declaracion de Funciones -------------------------------------------------

//Funcion Principal
int main(){
    int choose=0;
    do{
        cout<<"Bienvenido a mi programa Hoja de Ejercicios 5\nA continuacion escoge que ejercicio deseas ejecutar:"<<endl;
        cout<<"\t1. Ejercicio 1: Division entera y residuo"<<endl;
        cout<<"\t2. Ejercicio 2: Generador de vetor de longitud 16"<<endl;
        cout<<"\t3. Ejercicio 3: Sucesion numerica"<<endl;
        cout<<"\t4. Ejercicio 4: Numeros Amigos"<<endl;
        cout<<"\t5. Ejercicio 5: Sudoku"<<endl;
        cout<<"\n\t0. Salir"<<endl;
        cout<<"\nEleccion: ";
        cin>>choose;
        switch (choose)
        {
        case 1:
        {
            cout<<"Ejercicio "<<choose<<": Programa que obtiene la division entera y el residuo tras emplear restas sucesivas"<<endl;
            int cociente=0, residuo=0, dividendo=0, divisor=0;
            cout<<"Ingrese el dividendo: ";
            cin>>dividendo;
            cout<<"Ingrese el divisor: ";
            cin>>divisor;
            division(dividendo, divisor, cociente, residuo);
            cout<<"El cociente es: "<<cociente<<endl;
            cout<<"El residuo es: "<<residuo<<"\n"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Ejercicio "<<choose<<": Programa que genera un vector de longitud 16 cuyos elementos estan en el intervalo [-8.25; 12.75] y que sirve de base para una matriz nxm de la cual se calcula la suma de las filas impares"<<endl;
            const int dim=16;
            int m=0, n=0, suma=0;
            int v[dim];
            generar(v, dim);
            while(n*m!=16){
                cout<<"Ingrese dos valores m y n que multiplicados den 16"<<endl;
                cout<<"m: ";
                cin>>m;
                cout<<"n: ";
                cin>>n;
                if (n*m!=16)
                {
                    cout<<"Lo siento, los valores no dan 16, te ayudaria pero no me pagan lo suficiente y ya son las 3am :(, intenta nuevamente"<<endl;
                }
            }
            int M[16][16];
            generar(v,dim);
            matriz(M, v, m, n);
            sumarFilasImpares(M, m, n, suma);
            cout<<"El resultado de la suma es: "<<suma<<"\n"<<endl;
            break;
        }
        case 3:  
        {
            cout<<"Ejercicio "<<choose<<": Programa que recibe un entero positivo n y devuelve Sn y z=(1/Sn)*Sumatoria desde i=1 hasta n de (-1)^i*Si"<<endl;
            double Sn=0, z=0;
            int n=0;
            cout<<"Ingrese el valor de n: ";
            cin>>n;
            Serie(n, Sn, z);
            cout<<"El valor final de la serie Sn fue: "<<Sn<<endl;
            cout<<"El valor final de la serie z fue: "<<z<<endl;
            break;
        }
        case 4:
        {
            cout<<"Ejercicio "<<choose<<": Programa que recibe un entero positivo n y encuentra los pares de numeros amigos a y n en el intervalo [2,n]"<<endl;


            break;
        }
        case 5:
        {
            cout<<"Ejercicio "<<choose<<": Programa que comprueba si es valido el relleno de un sudoku"<<endl;


            break;
        }
        default:
            if (choose)
            {
                cout<<"El valor ingresado es incorrecto, intente nuevamente"<<endl;
            }
            
            break;
        }
    }while(choose);
    cout<<"Saliendo..."<<endl;
    
    return 0;
}

//Definicion de Funciones
void division(int dividendo, int divisor, int &cociente, int &residuo){
    cout<<"Proceso de division iniciado con dividendo= "<<dividendo<<" y divisor= "<<divisor<<endl;
    do
    {
        cout<<"\t"<<dividendo<<"\t- "<<divisor<<endl;
        dividendo-=divisor;
        cociente++;
    } while (dividendo>divisor);
    residuo=dividendo;
};

void generar(int v[], int dim){
    cout<<"Generando vector..."<<endl;
    for (int i = 0; i < dim; i++)
    {
        v[i]=(rand()%((1275)-(-825)+1))+(-825); //En la hoja me pide declarar el vector como int y me da un intervalo decimal, yo solo obedezco
        v[i]/=100;                              //Tambien me da parametros que no son punteros, como dije, yo solo obedezco
        cout<<"Elemento "<<i+1<<": "<<v[i]<<endl;
    }
    
};

void matriz(int M[][16], int v[], int fila, int columna){
    cout<<"Generando Matriz..."<<endl;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            M[i][j]=v[rand()%(16)];
            cout<<"\t"<<M[i][j];
        }
        cout<<"\n";
    }
    
};

void sumarFilasImpares(int M[][16], int fila, int columna, int &suma){ //Pide implementar una funcion por eso no lo hago en la misma funcion matriz
    cout<<"Sumando Filas..."<<endl;
    for (int i = 0; i < fila; i++)
    {
        if (i%2)
        {
            for (int j = 0; j < columna; j++)
            {
                suma+=M[i][j];
            }
        }
    }
};

void Serie(int n, double &S, double &z){
    for (int i = 1; i <= n; i++)
    {
        S=double(pow((-1),i)/i);
        z+=pow((-1), i)*S;
    }
    z*=(1.0/S);
};
//Funciones Sudoku