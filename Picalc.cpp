#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    int i=1,n;
    double sigma=0,pi;
    cout<<"El presente programa es capaz de aproximar el numero pi usando la forma sumatoria:\n    - pi= sqrt(E(6/(i^2))) desde i=1 hasta n. \nIngrese el grado de aproximacion deseado (n): ";
    cin>>n;

    for(i=1; i!=n; i++){
        sigma=sigma+(6/pow(i,2));
    }
    pi=sqrt(sigma);
    cout<<"El valor aproximado de pi usando el grado de aproximacion "<<n<<" es: "<<pi<<endl;
    system("pause");
    return 0;
}//Made by Favian Ramirez
