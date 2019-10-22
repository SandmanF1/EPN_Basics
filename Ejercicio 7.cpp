// Declaracion de librerias a usar en el programa
// Se incluye la libreria conio.h para evitar que el programa termine hasta que se presione una tecla
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main () {
    // Declaracion de variables
    int s = 0; // Seleccion en la maquina
    int a = 0; // Monedas de 50 centavos
    int b = 0; // Monedas de 20 centavos
    int c = 0; // Monedas de 10 centavos
    int d = 0; // Monedas de 5 centavos
    double x = 0; // Cambio total
    double y = 0; // Dinero ingresado
    double z = 0; // Costo del producto


    // Texto de presentacion del programa y explicacion de su funcionamiento, esto es necesario ya que no hay manera de validar los datos por el momento
    cout << "   Bienvenido, para una mejor experiencia se recomienda abrir la consola en pantalla completa, gracias\n\n   Una vez hecho esto pulse enter para continuar.";
    _getch();
    cout << "\n\n   +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Bienvenido a Maquina Expendedora V1.0 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << endl;
    cout << "   +                #     #                                         #######                                                                                          +"<<endl;
    cout << "   +                ##   ##   ##    ####  #    # # #    #   ##      #       #    # #####  ###### #    # #####  ###### #####   ####  #####    ##                      +"<<endl;
    cout << "   +                # # # #  #  #  #    # #    # # ##   #  #  #     #        #  #  #    # #      ##   # #    # #      #    # #    # #    #  #  #                     +"<<endl;
    cout << "   +                #  #  # #    # #    # #    # # # #  # #    #    #####     ##   #    # #####  # #  # #    # #####  #    # #    # #    # #    #                    +"<<endl;
    cout << "   +                #     # ###### #  # # #    # # #  # # ######    #         ##   #####  #      #  # # #    # #      #    # #    # #####  ######                    +"<<endl;
    cout << "   +                #     # #    # #   #  #    # # #   ## #    #    #        #  #  #      #      #   ## #    # #      #    # #    # #   #  #    #                    +"<<endl;
    cout << "   +                #     # #    #  ### #  ####  # #    # #    #    ####### #    # #      ###### #    # #####  ###### #####   ####  #    # #    #                    +"<<endl;
    cout << "   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ By Favian Ramirez ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n" << endl;
    cout << "   El programa toma la cantidad de dinero ingresado, cobra por el producto escogido y da el cambio en la menor cantidad de monedas posible\n   Disfrute su compra!\n"<< endl;
    cout << "   Que desea comprar\n" << endl;
    cout << "       1.- Bebidas" << endl;
    cout << "       2.- Comida" << endl;
    cout << "       3.- Introduce tu el valor del producto\n" << endl;
    cout << "       0.- Salir" << endl;
    cout << "\n   Eleccion: ";
    cin >> s; // Inicio de la entrada de datos

    if(s==1){
            cout << "\n   Que desea beber?\n" << endl;
            cout << "       1.- Cafe ___________________________________________________________ $2.50" << endl;
            cout << "       2.- Te _____________________________________________________________ $2.25" << endl;
            cout << "       3.- Soda ___________________________________________________________ $1.00" << endl;
            cout << "       4.- Agua ___________________________________________________________ $0.50" << endl;
            cout << "       5.- Jugo de frutas _________________________________________________ $0.75\n" << endl;
            cout << "       0.- Salir" << endl;
            cout << "   Eleccion: ";
            cin >> s;
            if(s!=0){
                if (s>5 || s<0){
                    cout << "\n   Opcion Invalida!" << endl;
                    cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                    _getch();

                    return 0;

                } else {}
                cout << "\n   Ingrese su dinero: ";
                cin >> y;
                if(s==1){
                    z = 2.5;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==2){
                    z = 2.25;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==3){
                    z = 1;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==4){
                    z = 0.5;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==5){
                    z = 0.75;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else {}
                x = y-z;
                cout << "\n    Su cambio es $" << x;
                x *= 10;
                a = x/5; x = x - (a * 5);
                b = x/2; x = x - (b * 2);
                c = x/1; x = x - (c * 1);
                d = x/0.5; x = x - (d * 0.5);

                cout << ", repartido en: " << endl;
                cout << "\n       - Monedas de 50 Centavos: " << a << endl;
                cout << "\n       - Monedas de 20 Centavos: " << b << endl;
                cout << "\n       - Monedas de 10 Centavos: " << c << endl;
                cout << "\n       - Monedas de 05 Centavos: " << d << endl;
                cout << "\n Que disfrute su comida!" << endl;
                cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                _getch();


                return 0;
            } else {
                return 0;
            }

    } else if(s==2){
            cout << "\n   Que desea comer?\n" << endl;
            cout << "       1.- Frituras ________________________________________________________ $0.75" << endl;
            cout << "       2.- Cupcake _________________________________________________________ $2.00" << endl;
            cout << "       3.- Galletas ________________________________________________________ $1.00" << endl;
            cout << "       4.- Barra de Chocolate ______________________________________________ $0.80" << endl;
            cout << "       5.- Bolsa de Caramelos ______________________________________________ $3.65" << endl;
            cout << "       6.- Happy Brownie ___________________________________________________ $5.25\n" << endl;
            cout << "       0.- Salir\n" << endl;
            cout << "   Eleccion: ";
            cin >> s;
            if(s!=0){
                if (s>6 || s<0){
                    cout << "\n   Opcion Invalida!" << endl;
                    cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                    _getch();

                    return 0;

                } else {}
                cout << "\n   Ingrese su dinero: ";
                cin >> y;
                if(s==1){
                    z = 0.75;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==2){
                    z = 2;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==3){
                    z = 1;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==4){
                    z = 0.8;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==5){
                    z = 3.65;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else if(s==6){
                    z = 5.25;
                    if (y<z) {
                        cout << "\n   Dinero insuficiente!" << endl;
                        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                        _getch();

                        return 0;

                    } else {}

                } else {}
                x = y-z;
                cout << "\n    Su cambio es $" << x;
                x *= 10;
                a = x/5; x = x - (a * 5);
                b = x/2; x = x - (b * 2);
                c = x/1; x = x - (c * 1);
                d = x/0.5; x = x - (d * 0.5);

                cout << ", repartido en: " << endl;
                cout << "\n       - Monedas de 50 Centavos: " << a << endl;
                cout << "\n       - Monedas de 20 Centavos: " << b << endl;
                cout << "\n       - Monedas de 10 Centavos: " << c << endl;
                cout << "\n       - Monedas de 05 Centavos: " << d << endl;
                cout << "\n Que disfrute su comida!" << endl;
                cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
                _getch();


                return 0;
            } else {
                return 0;
            }
    } else if (s==0){
            return 0;
    } else if (s==3) {
        cout << "\n   ingrese el valor del producto: ";
        cin >> z;
        cout << "\n\n   Ingrese su dinero: ";
        cin >> y;
        x = y-z;
        cout << "\n    Su cambio es $" << x;
        x *= 10;
        a = x/5; x = x - (a * 5);
        b = x/2; x = x - (b * 2);
        c = x/1; x = x - (c * 1);
        d = x/0.5; x = x - (d * 0.5);

        cout << ", repartido en: " << endl;
        cout << "\n       - Monedas de 50 Centavos: " << a << endl;
        cout << "\n       - Monedas de 20 Centavos: " << b << endl;
        cout << "\n       - Monedas de 10 Centavos: " << c << endl;
        cout << "\n       - Monedas de 05 Centavos: " << d << endl;
        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
        _getch();

    return 0;
    } else {
        cout << "\n   Opcion Invalida!" << endl;
        cout << "\n   Gracias por usar Maquina Expendedora V1.0 \n    Presione cualquier tecla para concluir" << endl;
        _getch();

        return 0;
    }
}
