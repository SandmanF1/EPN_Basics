// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {
    // Declaracion de variables
    double dia = 0;
    double pi = 3.14159265359;

    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "   Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\n   Una vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a la Calculadora de Ecuaciones V1.0 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    cout << "   + ######                                                                                                                                                                   +"<<endl;
    cout << "   + #     # ###### #####  # #    # ###### ##### #####   ####     #   #      ##   #####  ######   ##      #####  ###### #          ####  # #####   ####  #    # #       ####  +"<<endl;
    cout << "   + #     # #      #    # # ##  ## #        #   #    # #    #     # #      #  #  #    # #       #  #     #    # #      #         #    # # #    # #    # #    # #      #    # +"<<endl;
    cout << "   + ######  #####  #    # # # ## # #####    #   #    # #    #      #      #    # #    # #####  #    #    #    # #####  #         #      # #    # #      #    # #      #    # +"<<endl;
    cout << "   + #       #      #####  # #    # #        #   #####  #    #      #      ###### #####  #      ######    #    # #      #         #      # #####  #      #    # #      #    # +"<<endl;
    cout << "   + #       #      #   #  # #    # #        #   #   #  #    #      #      #    # #   #  #      #    #    #    # #      #         #    # # #   #  #    # #    # #      #    # +"<<endl;
    cout << "   + #       ###### #    # # #    # ######   #   #    #  ####       #      #    # #    # ###### #    #    #####  ###### ######     ####  # #    #  ####   ####  ######  ####  +"<<endl;
    cout << "   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "   El siguiente programa calcula el perimetro y el area de un circulo a partir del valor del diametro del mismo \n" << endl;

    // Inicio de la entrada de datos
    cout << "   Ingrese el valor requerido\n" << endl;
    cout << "       - Diametro: ";
    cin >> dia;

    cout << "\n   Si la informacion es correcta, presione enter para continuar, caso contrario reinicie el programa" << endl;
    _getch();

    // Creacion del sistema de calculo
    double rad = dia*0.5;
    double per = 2*pi*rad;
    double are = pi*rad*rad;

    // Presentacion de resultados
    cout << "\n       - El area del circulo es: " << are << " unidades" << endl;
    cout << "\n       - El perimetro del circulo es: " << per << " unidades" << endl;


    cout <<"\n   Gracias por usar Perimetro y Area del Circulo V1.0 \n       Presione cualquier tecla para concluir" << endl;
    _getch();


    return 0;
}
