#include "Conserje.h"

Conserje::Conserje()
{
    genero=new char[0];
    genero="";
    peso=new int;
    peso=0;
    altura=new double;
    altura=0;
    horas_trabajo=new int;
    horas_trabajo=0;
    amable=new char[0];
    amable="";
    Birthday();
}

Conserje::Conserje(char *new_genero,int &new_peso,double &new_altura,int &ano_nacimiento,int &mes_nacimiento,int &dia_nacimiento,char *new_amable,int &new_horas_trabajo)
{
    genero=new char[10];
    genero=new_genero;
    peso=new int;
    peso=&new_peso;
    altura=new double;
    altura=&new_altura;
    amable=new char[8];
    amable=new_amable;
    horas_trabajo=new int;
    horas_trabajo=&new_horas_trabajo;
    edad.ano=ano_nacimiento;
    edad.mes=mes_nacimiento;
    edad.dia=dia_nacimiento;
}

Conserje::~Conserje()
{
    delete genero;
    delete peso;
    delete altura;
    delete horas_trabajo;
    delete amable;

}

void Conserje::imprimir()
{
    cout<<"Su genero es:"<<*genero<<endl;
    cout<<"Su peso es:"<<*peso<<endl;
    cout<<"Su altura es:"<<*altura<<endl;
    cout<<"Su estricto es:"<<*horas_trabajo<<endl;
    cout<<"Su peso es:"<<*amable<<endl;
    edad.cal_edad();
}
