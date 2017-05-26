#include "gerente.h"

gerente::gerente()
{
    genero=new char[0];
    genero="";
    peso=new int;
    peso=0;
    altura=new double;
    altura=0;
    estricto=new char[8];
    estricto="No lo se";
    anos_en_la_gerencia=new int;
    anos_en_la_gerencia=0;
    Birthday();
}
gerente::gerente(char *new_genero,int &new_peso,double &new_altura,int &ano_nacimiento,int &mes_nacimiento,int &dia_nacimiento,char *new_estricto,int &new_gerencia)
{
    genero=new char[10];
    genero=new_genero;
    peso=new int;
    peso=&new_peso;
    altura=new double;
    altura=&new_altura;
    estricto=new char[8];
    estricto=new_estricto;
    anos_en_la_gerencia=new int;
    anos_en_la_gerencia=&new_gerencia;
    edad.ano=ano_nacimiento;
    edad.mes=mes_nacimiento;
    edad.dia=dia_nacimiento;
}
gerente::~gerente()
{
    delete genero;
    delete peso;
    delete altura;
    delete estricto;
    delete anos_en_la_gerencia;

}

void gerente::imprimir()
{
    cout<<"Su genero es:"<<genero<<endl;
    cout<<"Su peso es:"<<*peso<<endl;
    cout<<"Su altura es:"<<*altura<<endl;
    cout<<"Es estricto:"<<estricto<<endl;
    cout<<"Su peso es:"<<*anos_en_la_gerencia<<endl;
    edad.cal_edad();

}
