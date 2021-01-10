#include <iostream>
#include <cmath>
using namespace std;

int main(){
    bool valor;

    valor = (true || !(false && true)) || (!false && (!true || false));
    cout <<"resultado: "<< valor << endl;

    return 0;
}