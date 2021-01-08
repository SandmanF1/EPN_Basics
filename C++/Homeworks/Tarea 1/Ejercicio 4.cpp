// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {
    // Variable donde se almacenara la temperatura
    double Temp = 0;

    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\nUna vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a Conversor de Temperatura V1.0 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;

    cout << "     #####                                                                              #######                                                                      "<< endl;
    cout << "    #     #  ####  #    # #    # ###### #####   ####   ####  #####     #####  ######       #    ###### #    # #####  ###### #####    ##   ##### #    # #####    ##   "<< endl;
    cout << "    #       #    # ##   # #    # #      #    # #      #    # #    #    #    # #            #    #      ##  ## #    # #      #    #  #  #    #   #    # #    #  #  #  "<< endl;
    cout << "    #       #    # # #  # #    # #####  #    #  ####  #    # #    #    #    # #####        #    #####  # ## # #    # #####  #    # #    #   #   #    # #    # #    # "<< endl;
    cout << "    #       #    # #  # # #    # #      #####       # #    # #####     #    # #            #    #      #    # #####  #      #####  ######   #   #    # #####  ###### "<< endl;
    cout << "    #     # #    # #   ##  #  #  #      #   #  #    # #    # #   #     #    # #            #    #      #    # #      #      #   #  #    #   #   #    # #   #  #    # "<< endl;
    cout << "     #####   ####  #    #   ##   ###### #    #  ####   ####  #    #    #####  ######       #    ###### #    # #      ###### #    # #    #   #    ####  #    # #    # "<< endl;
    cout << "\n\n   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n\n" << endl;
    cout << "   Este programa transforma la temperatura media ingresada en grados celcius a grados Fahrenheit, Kelvin y Rankine\n";
    cout << "\n   Para evitar un mal funcionamiento se pide ingresar unicamente valores numericos" << endl;

    // Inicio de la entrada de datos
    cout << "\n   Ingrese la temperatura media de Quito en grados celcius: ";
    cin >> Temp;
    cout << "\n   Si la informacion es correcta, presione enter para continuar, caso contrario reinicie el programa" << endl;
    _getch();

    // Creacion del sistema de calculo
    double Fa = ((Temp * 1.8) + 32);
    double Ke = (Temp + 273.15);
    double Ra = (Ke * 1.8);

    // Presentacion de resultados
    cout << "\n       - Temperatura media de Quito en grados Fahrenheit: " << Fa << endl;
    cout << "\n       - Temperatura media de Quito en grados Kelvin: " << Ke << endl;
    cout << "\n       - Temperatura media de Quito en grados Rankine: " << Ra << endl;
    cout << "\n   Gracias por usar Conversor de Temperatura V1.0 \n      Presione cualquier tecla para concluir" << endl;
    _getch();

    return 0;
}
