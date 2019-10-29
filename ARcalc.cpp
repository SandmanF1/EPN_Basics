#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    char a1e1,a1e2,a1e3,a2e1,a2e2,a2e3,a3e1,a3e2,a3e3,a4e1,a4e2,a4e3,a5e1,a5e2,a5e3;
    int a1=0,a2=0,a3=0,a4=0,a5=0,x=0,y=0,z=0;
    cout<<"El presente programa determina el numero de alumnos que:\n\n   - Aprobaron todos sus examenes.\n\n   - Aprobaron al menos un examen.\n\n   -Aprobaron unicamente el ultimo examen."<<endl;
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
    cout<<"Total: "<<x<<endl;
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
    cout<<"Total: "<<y<<endl;
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
    cout<<"Total: "<<z<<"\n"<<endl;

    system("pause");
    return 0;
}//Made by Favian Ramirez
//VERSION PROVISIONAL v0.1
