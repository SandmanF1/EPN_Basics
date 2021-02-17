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
void amigos(int n);
//Funciones Sudoku
bool checkrow(int M[9][9], int n);
bool checkcolumn(int M[9][9], int n);
bool checkbox(int M[9][9], int n, int m);
bool checkall(int M [9][9]);

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
            int n;
            cout<<"Ejercicio "<<choose<<": Programa que recibe un entero positivo n y encuentra los pares de numeros amigos a y n en el intervalo [2,n]"<<endl;
            cout<<"Ingrese el n que desea usar: ";
            cin>>n;
            amigos(n);

            break;
        }
        case 5:
        {
            cout<<"Ejercicio "<<choose<<": Programa que comprueba si es valido el relleno de un sudoku"<<endl;
            cout<<"Bienvenido a Super Sudoku El Loco, diviertete rellenando, las reglas ya las conoces asi que no te hagas el loco"<<endl;
            int M[9][9];
            int x=0, y=0;
            bool seguir=1;
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    M[i][j]=0;
                }
                
            }
            while (seguir)
            {
                /* Aquí le mando un sudoku bien resuleto para que no se rompa la cabeza, profe jajaja, pero recuerde que es hacer trampa 
                M[0][0]=9;
                M[0][1]=6;
                M[0][2]=3;
                M[0][3]=1;
                M[0][4]=7;
                M[0][5]=4;
                M[0][6]=2;
                M[0][7]=5;
                M[0][8]=8;
                M[1][0]=1;
                M[1][1]=7;
                M[1][2]=8;
                M[1][3]=3;
                M[1][4]=2;
                M[1][5]=5;
                M[1][6]=6;
                M[1][7]=4;
                M[1][8]=9;
                M[2][0]=2;
                M[2][1]=5;
                M[2][2]=4;
                M[2][3]=6;
                M[2][4]=8;
                M[2][5]=9;
                M[2][6]=7;
                M[2][7]=3;
                M[2][8]=1;
                M[3][0]=8;
                M[3][1]=2;
                M[3][2]=1;
                M[3][3]=4;
                M[3][4]=3;
                M[3][5]=7;
                M[3][6]=5;
                M[3][7]=9;
                M[3][8]=6;
                M[4][0]=4;
                M[4][1]=9;
                M[4][2]=6;
                M[4][3]=8;
                M[4][4]=5;
                M[4][5]=2;
                M[4][6]=3;
                M[4][7]=1;
                M[4][8]=7;
                M[5][0]=7;
                M[5][1]=3;
                M[5][2]=5;
                M[5][3]=9;
                M[5][4]=6;
                M[5][5]=1;
                M[5][6]=8;
                M[5][7]=2;
                M[5][8]=4;
                M[6][0]=5;
                M[6][1]=8;
                M[6][2]=9;
                M[6][3]=7;
                M[6][4]=1;
                M[6][5]=3;
                M[6][6]=4;
                M[6][7]=6;
                M[6][8]=2;
                M[7][0]=3;
                M[7][1]=1;
                M[7][2]=7;
                M[7][3]=2;
                M[7][4]=4;
                M[7][5]=6;
                M[7][6]=9;
                M[7][7]=8;
                M[7][8]=5;
                M[8][0]=6;
                M[8][1]=4;
                M[8][2]=2;
                M[8][3]=5;
                M[8][4]=9;
                M[8][5]=8;
                M[8][6]=1;
                M[8][7]=7;
                M[8][8]=3;
                */
                
                cout<<"Tu sudoku actualmente es:\n"<<endl;
                //Dibujado del tablero
                cout<<"\t \t| "<<M[0][0]<<" "<<M[0][1]<<" "<<M[0][2]<<" | "<<M[0][3]<<" "<<M[0][4]<<" "<<M[0][5]<<" | "<<M[0][6]<<" "<<M[0][7]<<" "<<M[0][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[1][0]<<" "<<M[1][1]<<" "<<M[1][2]<<" | "<<M[1][3]<<" "<<M[1][4]<<" "<<M[1][5]<<" | "<<M[1][6]<<" "<<M[1][7]<<" "<<M[1][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[2][0]<<" "<<M[2][1]<<" "<<M[2][2]<<" | "<<M[2][3]<<" "<<M[2][4]<<" "<<M[2][5]<<" | "<<M[2][6]<<" "<<M[2][7]<<" "<<M[2][8]<<" | "<<endl;
                cout<<"\t \t|-------|-------|-------|"<<endl;
                cout<<"\t \t| "<<M[3][0]<<" "<<M[3][1]<<" "<<M[3][2]<<" | "<<M[3][3]<<" "<<M[3][4]<<" "<<M[3][5]<<" | "<<M[3][6]<<" "<<M[3][7]<<" "<<M[3][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[4][0]<<" "<<M[4][1]<<" "<<M[4][2]<<" | "<<M[4][3]<<" "<<M[4][4]<<" "<<M[4][5]<<" | "<<M[4][6]<<" "<<M[4][7]<<" "<<M[4][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[5][0]<<" "<<M[5][1]<<" "<<M[5][2]<<" | "<<M[5][3]<<" "<<M[5][4]<<" "<<M[5][5]<<" | "<<M[5][6]<<" "<<M[5][7]<<" "<<M[5][8]<<" | "<<endl;
                cout<<"\t \t|-------|-------|-------|"<<endl;
                cout<<"\t \t| "<<M[6][0]<<" "<<M[6][1]<<" "<<M[6][2]<<" | "<<M[6][3]<<" "<<M[6][4]<<" "<<M[6][5]<<" | "<<M[6][6]<<" "<<M[6][7]<<" "<<M[6][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[7][0]<<" "<<M[7][1]<<" "<<M[7][2]<<" | "<<M[7][3]<<" "<<M[7][4]<<" "<<M[7][5]<<" | "<<M[7][6]<<" "<<M[7][7]<<" "<<M[7][8]<<" | "<<endl;
                cout<<"\t \t| "<<M[8][0]<<" "<<M[8][1]<<" "<<M[8][2]<<" | "<<M[8][3]<<" "<<M[8][4]<<" "<<M[8][5]<<" | "<<M[8][6]<<" "<<M[8][7]<<" "<<M[8][8]<<" | \n"<<endl;

                cout<<"Deseas cambiar algo?(1/0): ";
                cin>>seguir;
                if (!seguir)
                {
                    break;
                }
                
                cout<<"Fila: ";
                cin>>x;
                cout<<"Columna: ";
                cin>>y;
                cout<<"Nuevo valor: ";
                cin>>M[x][y];
            }
            
            if (checkall(M))
            {
                cout<<"Felicidades, ganaste!"<<endl;
            }else
            {
                cout<<"Que pena, perdiste, aqui solo tienes una oportunidad de enviarlo asi que te toca hacerlo todo de nuevo\n"<<endl;
            }
            
            

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

void amigos(int n){
    int divisores=0;
    int divisores2=0;
    for (int i = 2; i <= n; i++)
    {
        divisores=0;
        divisores2=0;
        for (int j = 1; j < i; j++)
        {
            if (i%j==0)
            {
                divisores+=j;
            }
            
        }
        for (int j = 1; j < divisores; j++)
        {
            if (divisores%j==0)
            {
                divisores2+=j;
            }
            
        }
        if (divisores2==i && divisores!=i)
        {
            cout<<i<<" y "<<divisores<<" son numeros amigos!"<<endl;
            i=divisores+1; //Esta linea es para eviar que se repitan pares de numeros amigos
        }
        
    }
    cout<<"\n"<<endl;
};
//Funciones Sudoku
bool checkrow(int M[9][9], int n){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (M[n][j]==M[n][i] && i!=j)
            {
                return 0;
            }
            
        }
        
    }
    return 1;
};

bool checkcolumn(int M[9][9], int n){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (M[j][n]==M[i][n] && i!=j)
            {
                return 0;
            }
            
        }
        
    }
    return 1;
};

bool checkbox(int M[9][9], int n, int m){
    for (int i = n; i <= (n+2); i++)
    {
        for (int j = m; j <= (m+2); j++)
        {
            for (int k = n; k <= (n+2); k++)
            {
                for (int l = m; l <= (m+2); l++)
                {
                    if (M[i][j]==M[k][l] && i!=k && j!=l)
                    {
                        return 0;
                    }
                    
                }
                
            }
            
        }
        
    }
    return 1;
};

bool checkall(int M [9][9]){
    for (int i = 0; i < 9; i++)
    {
        if (!checkrow(M, i))
        {
            return 0;
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
        if (!checkcolumn(M, i))
        {
            return 0;
        }
    }
    for (int i = 0; i < 9; i+=3)
    {
        for (int j = 0; j < 9; j+=3)
        {
            if (!checkbox(M, i, j))
            {
                return 0;
            }
            
        }
    }
    return 1;
};