#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n;

    srand(time(NULL));

    cout<<"Ingrese un entero n>5: ";
    cin>>n;
    int randomNumbers[(2*n)+3];

    for (int i = 0; i <= (2*n)+3; i++)
    {
        randomNumbers[i]=(rand()%((1000)-(10)+1))+(10);
    }

    cout<<"El vector generado fue: "<<endl;
    for (int i = 0; i <= (2*n)+3; i++)
    {
        cout<<randomNumbers[i]<<"\t";
    }
    

    return 0;
}