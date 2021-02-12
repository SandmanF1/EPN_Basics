#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int pow_fun(int valor){
    return pow(valor,2)-4;
};

int sum_fun(int registro){
    int res;
    res=18 - 2*pow_fun(registro);
    return 5+res;
}

int main(){
    int n=4;
    cout<<"Resultado: "<<sum_fun(n)<<endl;

    return 0;
}