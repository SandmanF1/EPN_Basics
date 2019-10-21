// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main () {
    // Variables donde se almacenaran los coeficientes de la ecuacion cuadratica
    double D = 0;
    double P = 0;
    double F = 0;

    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\nUna vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a la Calculadora de Ecuaciones V1.0 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "    #####                                                                                            #     #                        #######                        "<< endl;
    cout << "   #     #   ##   #       ####  #    # #        ##   #####   ####  #####    ##      #####  ######    ##    #  ####  #####   ##      #       # #    #   ##   #      "<< endl;
    cout << "   #        #  #  #      #    # #    # #       #  #  #    # #    # #    #  #  #     #    # #         # #   # #    #   #    #  #     #       # ##   #  #  #  #      "<< endl;
    cout << "   #       #    # #      #      #    # #      #    # #    # #    # #    # #    #    #    # #####     #  #  # #    #   #   #    #    #####   # # #  # #    # #      "<< endl;
    cout << "   #       ###### #      #      #    # #      ###### #    # #    # #####  ######    #    # #         #   # # #    #   #   ######    #       # #  # # ###### #      "<< endl;
    cout << "   #     # #    # #      #    # #    # #      #    # #    # #    # #   #  #    #    #    # #         #    ## #    #   #   #    #    #       # #   ## #    # #      "<< endl;
    cout << "    #####  #    # ######  ####   ####  ###### #    # #####   ####  #    # #    #    #####  ######    #     #  ####    #   #    #    #       # #    # #    # ###### "<< endl;
    cout << "\n\n   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "   El programa calcula la nota final usando la ponderacion: \n        - 20% Deberes. \n        - 35% Evaluacion Parcial. \n        - 45% Evaluacion Final. \n" << endl;
    cout << "   A continuacion, por favor ingrese las calificaciones requeridas: \n" << endl;

    // Inicio de la entrada de datos
    cout << "       - Deberes: ";
    cin >> D;
    cout << "\n       - Evaluacion Parcial: ";
    cin >> P;
    cout << "\n       - Evaluacion Final: ";
    cin >> F;
    cout << "\n   Si la informacion es correcta, presione enter para continuar, caso contrario reinicie el programa" << endl;
    _getch();

    // Creacion del sistema de calculo
    double grade = (D*0.20)+(P*0.35)+(F*0.45);

    // Presentacion de resultados
    cout << "\n   La calificacion en la materia de programacion del estudiante es: " << grade << " puntos." << endl;

    cout <<"\n   Gracias por usar Calculadora de Ecuaciones V1.0 \n      Presione cualquier tecla para concluir" << endl;
    _getch();


    return 0;
}

