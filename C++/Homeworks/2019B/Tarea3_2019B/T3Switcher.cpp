#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<string>
using namespace std;

struct giro{
    int etapa;
    int horas;
    int minutos;
    int segundos;
};
struct fecha{
    int year,month,day;
};

struct polit{
    string nombre;
    int cedula;
    char genero;
    int votos;
    fecha nacimiento;
};

struct persona{
    string nombre;
    double peso;
    double estatura;
};

int main(){
    //Declaración de variables generales
    int jump_to=0;

    cout<<"Bienvenido, para una mejor experiencia se recomienda usar la consola en pantalla completa.\nUna vez hecho esto ";
    system("pause");
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"#######                                 #####  "<<endl;
    cout<<"   #      ##   #####  ######   ##      #     # "<<endl;
    cout<<"   #     #  #  #    # #       #  #           # "<<endl;
    cout<<"   #    #    # #    # #####  #    #     #####  "<<endl;
    cout<<"   #    ###### #####  #      ######          # "<<endl;
    cout<<"   #    #    # #   #  #      #    #    #     # "<<endl;
    cout<<"   #    #    # #    # ###### #    #     #####  "<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;

    cout<<"Este programa consiste en 5 modulos con una función especifica:"<<endl;
    cout<<"\t1.- Multiplicar matrices cuadrada de orden n."<<endl;
    cout<<"\t2.- Calcular el determinante de una matriz."<<endl;
    cout<<"\t3.- Analisis de tour de ciclismo."<<endl;
    cout<<"\t4.- Analisis de votacion electronica EPN."<<endl;
    cout<<"\t5.- Analisis de Indice de Masa Corporal.\n\n"<<endl;
    cout<<"Elija el programa que desea ejecutar: ";
    cin>>jump_to;

    switch(jump_to){
        case 1:{
            int n;

            system("cls");
            cout<<"Has seleccionado -Multiplicadora de Matrices Cuadradas de Orden n- Bienvenido"<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<" #     #                                                                                                #     #                                            "<<endl;
            cout<<" ##   ## #    # #      ##### # #####  #      #  ####    ##    ####  #  ####  #    #    #####  ######    ##   ##   ##   ##### #####  #  ####  ######  ####  "<<endl;
            cout<<" # # # # #    # #        #   # #    # #      # #    #  #  #  #    # # #    # ##   #    #    # #         # # # #  #  #    #   #    # # #    # #      #      "<<endl;
            cout<<" #  #  # #    # #        #   # #    # #      # #      #    # #      # #    # # #  #    #    # #####     #  #  # #    #   #   #    # # #      #####   ####  "<<endl;
            cout<<" #     # #    # #        #   # #####  #      # #      ###### #      # #    # #  # #    #    # #         #     # ######   #   #####  # #      #           # "<<endl;
            cout<<" #     # #    # #        #   # #      #      # #    # #    # #    # # #    # #   ##    #    # #         #     # #    #   #   #   #  # #    # #      #    # "<<endl;
            cout<<" #     #  ####  ######   #   # #      ###### #  ####  #    #  ####  #  ####  #    #    #####  ######    #     # #    #   #   #    # #  ####  ######  ####  "<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\n\nIngrese el orden de la matriz cuadrada: \n";
            cin>>n;
            double matrix1[n][n],matrix2[n][n],matrix3[n][n];
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<"\nIngrese el valor "<<i+1<<"x"<<j+1<<" de la matriz 1: ";
                    cin>>matrix1[i][j];
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<"\nIngrese el valor "<<i+1<<"x"<<j+1<<" de la matriz 2: ";
                    cin>>matrix2[i][j];
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    for(int k=0;k<n;k++){
                        matrix3[i][j]+=(matrix1[i][k]*matrix2[k][j]);
                    }
                }
            }
            cout<<"\n\nLa matriz resultante es: \n"<<endl;
            for(int i=0; i<n; i++){
                cout<<"\n\t\t|";
                for(int j=0; j<n; j++){
                    cout<<matrix3[i][j];
                    //Estos solo son separadores para que la matriz se vea mejor
                    if(matrix3[i][j]/10<1){
                        cout<<"   |";
                    }else if (matrix3[i][j]/10>1 && matrix3[i][j]/10<10){
                        cout<<"  |";
                    }else if (matrix3[i][j]/10>10 && matrix3[i][j]/10<100){
                        cout<<" |";
                    }else if (matrix3[i][j]/10>100 && matrix3[i][j]/10<1000){
                        cout<<"|";
                    }else{}
                }
            }
            cout<<"\n\nGracias por usar este programa, adios."<<endl;
            system("pause"); //Agrego un system pause para evitar que el programa ya compilado se cierre, si se ejecuta desde codeblocks o similar esto no es necesario
            break;
        }
        case 2:{
            system("cls");
            cout<<"Has seleccionado -Calculadora del Determinande de una Matriz- Bienvenido"<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<" ######                                                                                                             #     #                              "<<endl;
            cout<<" #     # ###### ##### ###### #####  #    # # #    #   ##   #    # ##### ######    #####  ######    #        ##      ##   ##   ##   ##### #####  # ###### "<<endl;
            cout<<" #     # #        #   #      #    # ##  ## # ##   #  #  #  ##   #   #   #         #    # #         #       #  #     # # # #  #  #    #   #    # #     #  "<<endl;
            cout<<" #     # #####    #   #####  #    # # ## # # # #  # #    # # #  #   #   #####     #    # #####     #      #    #    #  #  # #    #   #   #    # #    #   "<<endl;
            cout<<" #     # #        #   #      #####  #    # # #  # # ###### #  # #   #   #         #    # #         #      ######    #     # ######   #   #####  #   #    "<<endl;
            cout<<" #     # #        #   #      #   #  #    # # #   ## #    # #   ##   #   #         #    # #         #      #    #    #     # #    #   #   #   #  #  #     "<<endl;
            cout<<" ######  ######   #   ###### #    # #    # # #    # #    # #    #   #   ######    #####  ######    ###### #    #    #     # #    #   #   #    # # ###### "<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"\n\nEste programa calcula unicamente el determinante de una matriz 3x3.\nA continuacion defina la matriz deseada:\n"<<endl;
            double matrix[3][3];
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout<<"Ingrese el valor "<<i+1<<"x"<<j+1<<" de la matriz 1: ";
                    cin>>matrix[i][j];
                    }
                }
            long double det=(matrix[0][0]*matrix[1][1]*matrix[2][2])+(matrix[0][1]*matrix[1][2]*matrix[2][0])+(matrix[0][2]*matrix[1][0]*matrix[2][1])-(matrix[2][0]*matrix[1][1]*matrix[0][2])-(matrix[2][1]*matrix[1][2]*matrix[0][0])-(matrix[2][2]*matrix[1][0]*matrix[0][1]);
            cout<<"El determinante de la matriz es: "<<det<<endl;

            system("pause");
            break;
        }
        case 3:{
            system("cls");
            int t_total=0,t_min=0,t_max=0,t_etapa=0,h_totales=0,m_totales=0,s_totales=0;

            cout<<"Has seleccionado -Analizador de Tour de Ciclismo- Bienvenido"<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<" #######            #####                                      ######                                       "<<endl;
            cout<<" #       #         #     # # #####   ####     #####  ######    #     # #  ####  #    #   ##   #####  #####  "<<endl;
            cout<<" #       #         #       # #    # #    #    #    # #         #     # # #    # #    #  #  #  #    # #    # "<<endl;
            cout<<" #####   #         #  #### # #    # #    #    #    # #####     ######  # #      ###### #    # #    # #    # "<<endl;
            cout<<" #       #         #     # # #####  #    #    #    # #         #   #   # #      #    # ###### #####  #    # "<<endl;
            cout<<" #       #         #     # # #   #  #    #    #    # #         #    #  # #    # #    # #    # #   #  #    # "<<endl;
            cout<<" ####### ######     #####  # #    #  ####     #####  ######    #     # #  ####  #    # #    # #    # #####  "<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

            cout<<"Este programa sirve para calcular el total de tiempo empleado en el Giro dItalia asi como el mayor y menor tiempo.\nEl giro de italia consiste en 21 etapas las cuales acumulan mas de 4000 kilometros, a continuacion se pedira que ingreses los valores respectivos a cada etapa."<<endl;
            giro Richard[3];
                for(int i=0; i<3; i++){
                    cout<<"\n\tEtapa: ";
                    cin>>Richard[i].etapa;
                    cout<<"\n\tHoras: ";
                    cin>>Richard[i].horas;
                    cout<<"\n\tMinutos: ";
                    cin>>Richard[i].minutos;
                    cout<<"\n\tSegundos: ";
                    cin>>Richard[i].segundos;
                }
                for(int i=0; i<3; i++){
                    t_total+=(Richard[i].horas*3600)+(Richard[i].minutos*60)+(Richard[i].segundos);
                    t_etapa=(Richard[i].horas*3600)+(Richard[i].minutos*60)+(Richard[i].segundos);

                    if(t_etapa<t_min || t_min==0){
                        t_min=t_etapa;
                    }else{}

                    if(t_etapa>t_max){
                        t_max=t_etapa;
                    }else{}
                }
                h_totales=t_total/3600;
                m_totales=(t_total%3600)/60;
                s_totales=(t_total%3600)%60;
                cout<<"El tiempo total empleado por el ciclista en completar todas las etapas del Giro dItalia fue de: "<<t_total<<" segundos, o: "<<h_totales<<" horas, "<<m_totales<<" Minutos, "<<s_totales<<" Segundos."<<endl;

            system("pause");
            break;
        }
        case 4:{
            system("cls");
            int x=0,n=4,voto=0,v_blanco=0,v_nulo=0;
            polit epn[n];
            cout<<"Has seleccionado -Analizador de Votacion Electronica de la EPN- Bienvenido"<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<" ### ### #     #                                                          ### ###    ####### ######  #     # "<<endl;
            cout<<" ### ### #     #  ####  #####   ##    ####  #  ####  #    # ######  ####  ### ###    #       #     # ##    # "<<endl;
            cout<<"  #   #  #     # #    #   #    #  #  #    # # #    # ##   # #      #       #   #     #       #     # # #   # "<<endl;
            cout<<"         #     # #    #   #   #    # #      # #    # # #  # #####   ####             #####   ######  #  #  # "<<endl;
            cout<<"          #   #  #    #   #   ###### #      # #    # #  # # #           #            #       #       #   # # "<<endl;
            cout<<"           # #   #    #   #   #    # #    # # #    # #   ## #      #    #            #       #       #    ## "<<endl;
            cout<<"            #     ####    #   #    #  ####  #  ####  #    # ######  ####             ####### #       #     # "<<endl;
            cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"Este programa sirve para mediar las (muchas comillas) votaciones que se realizan en la Escuela Politecnica Nacional\nPara esta simulacion puede ingresar usted los candidatos (1) o usar los predefinidos (2). \nQue desea hacer: ";
            cin>>x;
            if(x==1){
                cout<<"Cuantos candidatos desea ingresar?: ";
                cin>>n;
                n=n-1;
                for(int i=0; i<n; i++){
                cout<<"Ingrese los datos de los candidatos"<<endl;
                cout<<"Nombre del candidato(use guion bajo, no espacio) "<<i+1<<" : ";
                cin>>epn[i].nombre;
                cout<<"Ingrese el numero de cedula del candidato "<<i+1<<" : ";
                cin>>epn[i].cedula;
                cout<<"Ingrese el genero (M | F) del candidato "<<i+1<<" : ";
                cin>>epn[i].genero;
                cout<<"Ingrese la fecha de nacimiento del candidato "<<i+1<<" : "<<endl;
                cout<<"\tYear: ";
                cin>>epn[i].nacimiento.year;
                cout<<"\tMonth: ";
                cin>>epn[i].nacimiento.month;
                cout<<"\tDay: ";
                cin>>epn[i].nacimiento.day;
                }
                cout<<"Los candidatos para la elección son:"<<endl;
                for(int i=0; i<n; i++){
                    cout<<"\n\t"<<i+1<<" "<<epn[i].nombre;
                }

            }else if(x==2){
                epn[0].nombre="Benito Mussolini";
                epn[1].nombre="Adolf Hitler";
                epn[2].nombre="Augusto Pinochet";
                epn[3].nombre="Fulgencio Batista";
                epn[4].nombre="Cynthia Viteria";
                for(int i=0; i<=n; i++){
                    cout<<"\n\t"<<i+1<<" "<<epn[i].nombre;
                }
            }else{
                cout<<"Opcion Invalida, muchas gracias por usar este programa"<<endl;
                return 0;
            }
            cout<<"\n\nRecuerde el numero, se usara para la votacion"<<endl;
            cout<<"\nLa votacion se realiza de la siguiente manera: "<<endl;
            cout<<"\tSi el numero es 0, el voto se considera voto en blanco."<<endl;
            cout<<"\tSi el numero esta en el intervalo [1,n], siendo n el numero de candidatos, el voto se contabilizará como voto para el candidato correspondiente."<<endl;
            cout<<"\tSi el numero es -1, significa que la votacion ha finalizado."<<endl;
            cout<<"\tSi el numero es ditinto a los anteriores, el voto se considera voto nulo."<<endl;
            cout<<"\nSabiendo esto, procedamos a las votaciones."<<endl;
            for(int i=0; i<n; i++){
                epn[i].votos=0;
            }
            while(voto!=-1){
                cout<<"Votante, realice su voto: ";
                cin>>voto;
                if(voto==0){
                    v_blanco+=1;
                    cout<<"\tHas Votado por en Blanco"<<endl;
                }else if(voto>=1 && voto<=(n+1)){
                    epn[voto-1].votos+=1;
                    cout<<"\tHas Votado por "<<epn[voto-1].nombre<<endl;
                }else if(voto==(-1)){

                }else{
                    v_nulo+=1;
                    cout<<"\tHas Votado por Nulo"<<endl;
                }

            }
            cout<<"El resultado de las votaciones fue: "<<endl;
            cout<<"\tVotos en Blanco: "<<v_blanco<<endl;
            cout<<"\tVotos Nulos: "<<v_nulo<<endl;
            for(int i=0; i<=n; i++){
                cout<<"\tVotos por "<<epn[i].nombre<<": "<<epn[i].votos<<endl;
            }
            cout<<"Gracias por ser parte de esta farsa, al igual que en la realidad."<<endl;
            system("pause");
            break;
        }
        case 5:{
            system("cls");
            int x=0,n=4,imc_max=0,imc_min=0;
            double imc=0,a_med=0;
            persona paciente[n];
            cout<<"Has seleccionado -Analizador de Indice de Masa Corporal- Bienvenido"<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<" ###                                                   #     #                          #####                                                   "<<endl;
            cout<<"  #  #    # #####  #  ####  ######    #####  ######    ##   ##   ##    ####    ##      #     #  ####  #####  #####   ####  #####    ##   #      "<<endl;
            cout<<"  #  ##   # #    # # #    # #         #    # #         # # # #  #  #  #       #  #     #       #    # #    # #    # #    # #    #  #  #  #      "<<endl;
            cout<<"  #  # #  # #    # # #      #####     #    # #####     #  #  # #    #  ####  #    #    #       #    # #    # #    # #    # #    # #    # #      "<<endl;
            cout<<"  #  #  # # #    # # #      #         #    # #         #     # ######      # ######    #       #    # #####  #####  #    # #####  ###### #      "<<endl;
            cout<<"  #  #   ## #    # # #    # #         #    # #         #     # #    # #    # #    #    #     # #    # #   #  #      #    # #   #  #    # #      "<<endl;
            cout<<" ### #    # #####  #  ####  ######    #####  ######    #     # #    #  ####  #    #     #####   ####  #    # #       ####  #    # #    # ###### "<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"Este programa realiza un analisis de los datos de peso (Kg) y estatura de cada persona ingresada o predefinida y entrega:"<<endl;
            cout<<"\t-Los datos ingresados."<<endl;
            cout<<"\t-El Indice de masa Corporal."<<endl;
            cout<<"\t-El nombre de la persona con menor y mayor indice de masa corporal."<<endl;
            cout<<"\t-Un listado de las persona cuya estatura supera la media."<<endl;
            cout<<"Desea usar los datos predefinidos (1) o ingresar manualmente los datos (2): ";
            cin>>x;
            if(x==1){
                paciente[0].nombre="Goku";
                paciente[0].estatura=175;
                paciente[0].peso=90;
                paciente[1].nombre="Vegeta";
                paciente[1].estatura=164;
                paciente[1].peso=85;
                paciente[2].nombre="Krillin";
                paciente[2].estatura=153;
                paciente[2].peso=65;
                paciente[3].nombre="Yajirobe";
                paciente[3].estatura=165;
                paciente[3].peso=90;
                a_med= 164.25;
            }else if(x==2){
                cout<<"Cuantas personas desea ingresar: ";
                cin>>n;
                for(int i=0; i<n; i++){
                    cout<<"\nIngrese los datos de la persona "<<i+1<<endl;
                    cout<<"\tNombre(use guion bajo para espacios): ";
                    cin>>paciente[i].nombre;
                    cout<<"\tEstatura: ";
                    cin>>paciente[i].estatura;
                    cout<<"\tPeso: ";
                    cin>>paciente[i].peso;
                    a_med+=paciente[i].estatura;
                }
                a_med= a_med/n;
            }else{
                cout<<"Opcion Invalida. Gracias por usar este programa, adios"<<endl;
                return 0;
            }
            cout<<"\nPersonas Ingresadas:"<<endl;
            for(int i=0; i<n; i++){
                cout<<"\n\tNombre: "<<paciente[i].nombre<<endl;
                cout<<"\n\tEstatura: "<<paciente[i].estatura<<endl;
                cout<<"\n\tPeso: "<<paciente[i].peso<<endl;
                imc=(paciente[i].peso/pow((paciente[i].estatura),2));
                cout<<"\n\tIndice de Masa Corporal: "<<imc<<endl;
                if(imc>imc_max){
                    imc_max=i;
                }
                if(imc<imc_min){
                    imc_min=i;
                }else{}
            }
            cout<<"La persona con mayor Indice de Masa Corporal fue: "<<paciente[imc_max].nombre<<endl;
            cout<<"La persona con Menor Indice de Masa Corporal fue: "<<paciente[imc_min].nombre<<endl;
            for(int i=0; i<n; i++){
                if(paciente[i].estatura>a_med){
                    cout<<paciente[i].nombre<<" Supera la media de estatura con: "<<paciente[i].estatura<<endl;
                    }
            }
            cout<<"La media de estatura fue: "<<a_med<<endl;
            break;
        }
        default:
            cout<<"Opcion invalida, gracias por usar T3Switcher by Favian Ramirez"<<endl;
            return 0;
    }
    return 0;
}

