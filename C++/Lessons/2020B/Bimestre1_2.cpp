#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int scope_fun(int n){
    int var;
    var= 3*n + 2*pow(-1,n);
    return var;
};

int main(){

    int var=2;
    if(scope_fun(var)>=5){
        var++;
    }else
    {
        var--;
    }
    cout<<"El valor almacenado en var es: "<<var<<endl;

    return 0;
}