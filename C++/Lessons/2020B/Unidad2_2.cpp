#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=5, b=4, c=10;

    if (floor(c/b) != (a-2))
    {
        if ((a+b) >=5)
        {
            cout << "Resultado : " << 1 << endl;
        }else
        {
            cout << "Resultado: " << 2 << endl;
        }
    }else
    {
        if (c/a<= b/3)
        {
            cout << "Resultado: "<< 3 << endl;
        }else
        {
            cout << "Resultado: "<< 4 << endl;
        }
    }
    return 0;
}