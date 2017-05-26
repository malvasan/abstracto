#include <iostream>
#include "gerente.h"
#include "Conserje.h"
using namespace std;

int main()
{
    char sexo[]="masculino";
    int peso=55;
    double altu=1.72;
    int ano=1999;
    int mes=6;
    int dia=10;
    char estric[]="si pe";
    int geren=10;

    gerente num(sexo,peso,altu,ano,mes,dia,estric,geren);

    num.imprimir();
    return 0;
}
