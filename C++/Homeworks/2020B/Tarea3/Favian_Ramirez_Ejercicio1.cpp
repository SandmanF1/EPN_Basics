#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n=0, aux;

    cout<<"Ingrese el n: ";
    cin>>n;

    int randomNumbers[n];

    srand(time(NULL));

    for (int i = 0; i <= n; i++)
    {
        randomNumbers[i]=(rand()%(((3*n)+10)-(n)+1))+(n);
    }

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(randomNumbers[i]<randomNumbers[j])
            {
                aux = randomNumbers[i];
                randomNumbers[i] = randomNumbers[j];
                randomNumbers[j] = aux;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout<< randomNumbers[i]<< "\t";
    }
    
    cout<<"\n\nLa diferencia entre el valor minimo y el valor maximo es: "<<randomNumbers[0]-randomNumbers[n]<<endl;
    cout<<"La suma de los 3 primeros numeros ordenados de forma descendente es: "<<randomNumbers[0]+randomNumbers[1]+randomNumbers[2]<<endl;


    return 0;
}