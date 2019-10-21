// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {

    // Variables donde se almacenaran los coeficientes de la ecuacion cuadratica
    double factura = 0;
    double tiempo = 0;

    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\nUna vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   +++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a la Calculadora de Impuestos V1.0 +++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "    #####                                                                                            ###                                                        "<< endl;
    cout << "   #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #####  ######     #  #    # #####  #    # ######  ####  #####  ####   ####  "<< endl;
    cout << "   #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #    # #          #  ##  ## #    # #    # #      #        #   #    # #      "<< endl;
    cout << "   #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #    # #####      #  # ## # #    # #    # #####   ####    #   #    #  ####  "<< endl;
    cout << "   #       ###### #      #      #    # #      ###### #    # #    # #####  ######    #    # #          #  #    # #####  #    # #           #   #   #    #      # "<< endl;
    cout << "   #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #    #    # #          #  #    # #      #    # #      #    #   #   #    # #    # "<< endl;
    cout << "    #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #    #####  ######    ### #    # #       ####  ######  ####    #    ####   ####  "<< endl;
    cout << "\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n" << endl;
    cout << "   Este programa calcula la proyeccion de impuesto predial en un periodo definido de docenas de meses suponiendo un aumento del 2% cada 12 meses\n\n" << endl;
    cout << "   Para realizar el calculo se pide llene la siguiente informacion: \n\n" << endl;
    cout << "       - Valor total a pagar de los pasados 12 meses: ";
    cin >> factura;
    cout << "\n       - Periodo de tiempo en docenas de meses para la cual se desea hacer la proyeccion: ";
    cin >> tiempo;
    cout << "\n   Desea calcular el impuesto predial que pagara en " << tiempo << " docenas de meses, tomando en cuenta que su factura actual fue de " << factura << " dolares?\n" << endl;
    cout << "   Si los datos son correctos presione enter, caso contrario reinicie el programa" << endl;
    _getch();

    // Creacion del sistema de calculo usando la formula general y la libreria math.h
    double pago = factura*pow(1.02,tiempo);

    // Presentacion de resultados
    cout << "\n         El valor total a pagar en " << tiempo << " docenas de meses es de " << pago << " dolares\n" << endl;
    cout <<"\n   Gracias por usar Calculadora de Impuestos V1.0 \n      Presione cualquier tecla para concluir" << endl;
    _getch();

    return 0;
}
