// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {

    // Variables donde se almacenaran los coeficientes de la ecuacion cuadratica
    double X = 0;
    double Y = 0;


    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\nUna vez hecho esto pulse enter para continuar.";
    _getch();

    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido al Generador de Valores de la funcion V1.0 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;

    cout <<"     #####                                                                              #     #                                                                             "<< endl;
    cout <<"    #     # ###### #    # ###### #####    ##   #####   ####  #####     #####  ######    #     #   ##   #       ####  #####  ######  ####     #####  ######    #        ##   "<< endl;
    cout <<"    #       #      ##   # #      #    #  #  #  #    # #    # #    #    #    # #         #     #  #  #  #      #    # #    # #      #         #    # #         #       #  #  "<< endl;
    cout <<"    #  #### #####  # #  # #####  #    # #    # #    # #    # #    #    #    # #####     #     # #    # #      #    # #    # #####   ####     #    # #####     #      #    # "<< endl;
    cout <<"    #     # #      #  # # #      #####  ###### #    # #    # #####     #    # #          #   #  ###### #      #    # #####  #           #    #    # #         #      ###### "<< endl;
    cout <<"    #     # #      #   ## #      #   #  #    # #    # #    # #   #     #    # #           # #   #    # #      #    # #   #  #      #    #    #    # #         #      #    # "<< endl;
    cout <<"     #####  ###### #    # ###### #    # #    # #####   ####  #    #    #####  ######       #    #    # ######  ####  #    # ######  ####     #####  ######    ###### #    # "<< endl;

    cout <<"    #######                                      "<< endl;
    cout <<"    #       #    # #    #  ####  #  ####  #    # "<< endl;
    cout <<"    #       #    # ##   # #    # # #    # ##   # "<< endl;
    cout <<"    #####   #    # # #  # #      # #    # # #  # "<< endl;
    cout <<"    #       #    # #  # # #      # #    # #  # # "<< endl;
    cout <<"    #       #    # #   ## #    # # #    # #   ## "<< endl;
    cout <<"    #        ####  #    #  ####  #  ####  #    # "<< endl;

    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n" << endl;

    cout << "   Este programa calcula el valor de la funcion para valores de X y Y dados, solo ingrese los datos a continuacion: \n" << endl;


    // Inicio de la entrada de datos
    cout << "       - Valor de X: ";
    cin >> X;
    cout << "\n       - Valor de Y: ";
    cin >> Y;
    cout << "\n   Usted ingreso los datos X = " << X << " y Y = " << Y << endl;
    cout << "\n   Si la informacion es correcta, presione enter para continuar, caso contrario reinicie el programa\n" << endl;
    _getch();


    // Creacion del sistema de calculo usando la formula general y la libreria math.h
    double Fx = (sqrt(pow(X,3)))/(pow(Y,2)-1);


    // Presentacion de resultados
    cout << "   El valor de la funcion en X = " << X << " y Y = " << Y << " es:\n\n    - F(x,y) = " << Fx << endl;


    cout <<"\n  Gracias por usar Calculadora de Ecuaciones V1.0 \n     Presione cualquier tecla para concluir" << endl;
    _getch();

    return 0;
}
