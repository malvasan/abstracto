#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"

class gerente:public Persona
{
    private:
        char *estricto;
        int *anos_en_la_gerencia;
    public:
        gerente();
        gerente(char *new_genero,int &new_peso,double &new_altura,int &ano_nacimiento,int &mes_nacimiento,int &dia_nacimiento,char *new_estricto,int &new_gerencia);
        ~gerente();
        void imprimir();
};

#endif // GERENTE_H
