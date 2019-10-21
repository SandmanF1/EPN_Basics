// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {
    // Variables donde se almacenaran los coeficientes de la ecuacion cuadratica
    double a = 0;
    double b = 0;
    double c = 0;

    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\nUna vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a la Calculadora de Ecuaciones V1.0 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "    #####                                                                                            #######                                                           "<< endl;
    cout << "   #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #####  ######    #        ####  #    #   ##    ####  #  ####  #    # ######  ####  "<< endl;
    cout << "   #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #    # #         #       #    # #    #  #  #  #    # # #    # ##   # #      #      "<< endl;
    cout << "   #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #    # #####     #####   #      #    # #    # #      # #    # # #  # #####   ####  "<< endl;
    cout << "   #       ###### #      #      #    # #      ###### #    # #    # #####  ######    #    # #         #       #      #    # ###### #      # #    # #  # # #           # "<< endl;
    cout << "   #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #    #    # #         #       #    # #    # #    # #    # # #    # #   ## #      #    # "<< endl;
    cout << "    #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #    #####  ######    #######  ####   ####  #    #  ####  #  ####  #    # ######  ####  \n\n"<< endl;

    cout << "    #####                                                                  "<< endl;
    cout << "   #     # #    #   ##   #####  #####    ##   ##### #  ####    ##    ####  "<< endl;
    cout << "   #       #    #  #  #  #    # #    #  #  #    #   # #    #  #  #  #      "<< endl;
    cout << "   #       #    # #    # #    # #    # #    #   #   # #      #    #  ####  "<< endl;
    cout << "   #       #    # ###### #    # #####  ######   #   # #      ######      # "<< endl;
    cout << "   #     # #    # #    # #    # #   #  #    #   #   # #    # #    # #    # "<< endl;
    cout << "    #####   ####  #    # #####  #    # #    #   #   #  ####  #    #  ####                                                                            by Favian Ramirez \n\n"<< endl;
    cout << "   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a la Calculadora de Ecuaciones V1.0 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n" << endl;
    cout << "   Este programa calcula las raices reales de las ecuaciones de la forma aX^2 + bX + c \n" << endl;
    cout << "   Si las reices de la ecuacion no son reales se mostrara nan(ind), siglas de Not A Number, es decir, no es un numero.\n" << endl;
    cout << "   A continuacion se pedira que ingrese los coeficientes de la ecuacion, es decir: a, b, c\n\n   Se pide que se ingrese unicmente valores numericos \n " << endl;

    cout << "   Presione enter para continuar" << endl;
    _getch();

    // Inicio de la entrada de datos
    cout << "\n     - Ingrese el valor de a: ";
    cin >> a;
    cout << "\n     - Ingrese el valor de b: ";
    cin >> b;
    cout << "\n     - Ingrese el valor de c: ";
    cin >> c;
    cout << "\n   La ecuacion ingresada es: " << a << "(X^2) + " << b << "X + " << c << endl;
    cout << "\n   Si la informacion es correcta, presione enter para continuar, caso contrario reinicie el programa" << endl;
    _getch();

    // Creacion del sistema de calculo usando la formula general y la libreria math.h
    double X1 = (((-b)+(sqrt((pow(b,2))-(4*a*c))))/(2*a));
    double X2 = (((-b)-(sqrt((pow(b,2))-(4*a*c))))/(2*a));

    // Presentacion de resultados
    cout <<"\n    Su raiz real 1 es: " << X1 << endl;
    cout <<"\n    Su raiz real 2 es: " << X2 << endl;
    cout <<"\n  Gracias por usar Calculadora de Ecuaciones V1.0 \n     Presione cualquier tecla para concluir" << endl;
    _getch();


    return 0;
}
