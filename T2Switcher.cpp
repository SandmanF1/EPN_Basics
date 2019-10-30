#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    int chooser;
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"#######                                 #####               #####              "<<endl;
    cout<<"   #      ##   #####  ######   ##      #     #             #     #   #     #   "<<endl;
    cout<<"   #     #  #  #    # #       #  #           #             #         #     #   "<<endl;
    cout<<"   #    #    # #    # #####  #    #     #####     #####    #       ##### ##### "<<endl;
    cout<<"   #    ###### #####  #      ######    #                   #         #     #   "<<endl;
    cout<<"   #    #    # #   #  #      #    #    #                   #     #   #     #   "<<endl;
    cout<<"   #    #    # #    # ###### #    #    #######              #####              "<<endl;
    cout<<"+++++++++++++++++++++++++++++++ By Favian Ramirez +++++++++++++++++++++++++++++\n"<<endl;
    cout<<"Bienvenido a Tarea 2, este programa dispone de las siguientes funciones:\n\n\t1.- Encontrar el numero minimo y maximo de entre todos los ingresados.\n\t2.- Realizar 2 sumas iterativas.\n\t3.- Aproximar el valor de pi de acuerdo al n ingresado.\n\t4.- Analizar los numeros ingresados en busca de multiplos de 3, impares y primos.\n\t5.- Analizar los examenes de los alumnos en base a la aprobacion de su examen.\n"<<endl;
    cout<<"ingrese su eleccion (Solo numero): ";
    cin>>chooser;
    switch(chooser){
        case 1:{
            double numero,nmax,nmin;
            while(numero!=0){
                cout<<"\nIngrese un numero entero, 0 termina el programa: ";
                cin>> numero;
                if(numero>nmax){
                    nmax=numero;
                }
                if((numero<nmin || nmin==0) && numero!=0){
                    nmin=numero;
                }else{}
            }
            cout<<"\t- El numero maximo ingresado fue: "<<nmax<<endl;
            cout<<"\t- El numero minimo ingresado fue: "<<nmin<<endl;
        break;
        }
        case 2:{
            int n,i=1,f=1,suma1=0,suma2=0;
            cout<<"\nBienvenido, el presente programa esta hecho para resolver 2 sumas:\n\t- E (2i-1) desde i=1 hasta n.\n\t- E (i!) desde i=1 hasta n."<<endl;
            cout<<"\nIngresa el valor de n (entero positivo): ";
            cin>>n;
            while(i<=n){
                suma1=suma1+((2*i)-1);
                f=(f*i);
                suma2=(suma2+f);
                i+=1;
            }
            cout<<"    - El resultado de la suma 1 es: "<<suma1<<"\n    - El resultado de la suma 2 es: "<<suma2<<endl;
        break;
        }
        case 3:{
            int i=1,n;
            double sigma=0,pi,error;
            cout<<"\nEl presente programa es capaz de aproximar el numero pi usando la forma sumatoria:\n\n    - pi= sqrt(E(6/(i^2))) desde i=1 hasta n. \n\nIngrese el grado de aproximacion deseado (n): ";
            cin>>n;

            for(i=1; i<=n; i++){
                sigma=sigma+(6/pow(i,2));
            }
            pi=sqrt(sigma);
            error=3.14159265359-pi;
            cout<<"\nEl valor aproximado de pi usando el grado de aproximacion "<<n<<" es: "<<pi<<endl;
            cout<<"\nEl error en la aproximacion es: "<<error<<endl;
        break;
        }
        case 4:{
            int i,n,b=1,Nprime=0,Nmult3=0,Nimpar=0;
            cout<<"\nEl presente programa analiza el conjunto de numeros entre 1 y el numero dado n en busca de:\n\n  - El numero de multiplos de 3.\n\n  - La cantidad de numeros primos.\n\n  - La cantidad de numeros impares."<<endl;
            cout<<"\nIngrese un numero entero positivo (n): ";
            cin>>n;
            int c=n;
            for(n=1;n<=c;n++){
                i=2;
                b=1;
                for(i=2;i<n && b!=0;i++){
                    b=(n%i);
                    }
                if(b!=0){
                    Nprime+=1;
                }if(n%2!=0){
                    Nimpar+=1;
                }if(n%3==0){
                    Nmult3+=1;
                }
            }
            cout<<"\nExisten un total de:\n\n    - " <<Nprime<<" numero/s primo/s.\n\n    - "<<Nimpar<<" Numero/s Impar/es.\n\n    - "<<Nmult3<<" Multiplo/s de 3.\n\n desde el 0 hasta el numero dado\n\n";
        break;
        }
        case 5:{
            char a1e1,a1e2,a1e3,a2e1,a2e2,a2e3,a3e1,a3e2,a3e3,a4e1,a4e2,a4e3,a5e1,a5e2,a5e3;
            int a1=0,a2=0,a3=0,a4=0,a5=0,x=0,y=0,z=0;
            cout<<"\nEl presente programa determina el numero de alumnos que:\n\n   - Aprobaron todos sus examenes.\n\n   - Aprobaron al menos un examen.\n\n   -Aprobaron unicamente el ultimo examen."<<endl;
            cout<<"\nIngrese el A: Aprobado o R: Reprobado, de los alumnos (Mayusculas):\n\n    Alumno 1\n     - Examen 1: ";
            cin>>a1e1;
            if(a1e1=='A'){
                a1+=1;
            }else{}
            cout<<"     - Examen 2: ";
            cin>>a1e2;
            if(a1e2=='A'){
                a1+=2;
            }else{}
            cout<<"     - Examen 3: ";
            cin>>a1e3;
            if(a1e3=='A'){
                a1+=4;
            }else{}
            cout<<"\n\n    Alumno 2\n     - Examen 1: ";
            cin>>a2e1;
            if(a2e1=='A'){
                a2+=1;
            }else{}
            cout<<"     - Examen 2: ";
            cin>>a2e2;
            if(a2e2=='A'){
                a2+=2;
            }else{}
            cout<<"     - Examen 3: ";
            cin>>a2e3;
            if(a2e3=='A'){
                a2+=4;
            }else{}
            cout<<"\n\n    Alumno 3\n     - Examen 1: ";
            cin>>a3e1;
            if(a3e1=='A'){
                a3+=1;
            }else{}
            cout<<"     - Examen 2: ";
            cin>>a3e2;
            if(a3e2=='A'){
                a3+=2;
            }else{}
            cout<<"     - Examen 3: ";
            cin>>a3e3;
            if(a3e3=='A'){
                a3+=4;
            }else{}
            cout<<"\n\n    Alumno 4\n     - Examen 1: ";
            cin>>a4e1;
            if(a4e1=='A'){
                a4+=1;
            }else{}
            cout<<"     - Examen 2: ";
            cin>>a4e2;
            if(a4e2=='A'){
                a4+=2;
            }else{}
            cout<<"     - Examen 3: ";
            cin>>a4e3;
            if(a4e3=='A'){
                a4+=4;
            }else{}
            cout<<"\n\n    Alumno 5\n     - Examen 1: ";
            cin>>a5e1;
            if(a5e1=='A'){
                a5+=1;
            }else{}
            cout<<"     - Examen 2: ";
            cin>>a5e2;
            if(a5e2=='A'){
                a5+=2;
            }else{}
            cout<<"     - Examen 3: ";
            cin>>a5e3;
            if(a5e3=='A'){
                a5+=4;
            }else{}

            cout<<"Recuento\n\n    - Alumnos que aprobaron todos los examenes: "<<endl;
            if(a1==7){
                cout<<"         Alumno 1"<<endl;
                x++;
            }
            if(a2==7){
                cout<<"         Alumno 2"<<endl;
                x++;
            }
            if(a3==7){
                cout<<"         Alumno 3"<<endl;
                x++;
            }
            if(a4==7){
                cout<<"         Alumno 4"<<endl;
                x++;
            }
            if(a5==7){
                cout<<"         Alumno 5"<<endl;
                x++;
            }
            cout<<"\t\t\tTotal: "<<x<<endl;
            cout<<"\n    - Alumnos que aprobaron al menos un examen: "<<endl;
            if(a1!=0){
                cout<<"         Alumno 1"<<endl;
                y++;
            }
            if(a2!=0){
                cout<<"         Alumno 2"<<endl;
                y++;
            }
            if(a3!=0){
                cout<<"         Alumno 3"<<endl;
                y++;
            }
            if(a4!=0){
                cout<<"         Alumno 4"<<endl;
                y++;
            }
            if(a5!=0){
                cout<<"         Alumno 5"<<endl;
                y++;
            }
            cout<<"\t\t\tTotal: "<<y<<endl;
            cout<<"\n    - Alumnos que aprobaron unicamente el ultimo examen: "<<endl;
            if(a1==4){
                cout<<"         Alumno 1"<<endl;
                z++;
            }
            if(a2==4){
                cout<<"         Alumno 2"<<endl;
                z++;
            }
            if(a3==4){
                cout<<"         Alumno 3"<<endl;
                z++;
            }
            if(a4==4){
                cout<<"         Alumno 4"<<endl;
                z++;
            }
            if(a5==4){
                cout<<"         Alumno 5"<<endl;
                z++;
            }
            cout<<"\t\t\tTotal: "<<z<<"\n"<<endl;
        break;
        }
        default:
        cout<<"Opcion mas invalida que Lenin, adios"<<endl;
        return 0;
    }
    cout<<"\nGracias por usar este programa, que tenga un buen dia hasta que Skynet se revele ;D\n"<<endl;
    system("pause");
    return 0;
}
