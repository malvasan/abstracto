#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"

class Conserje:public Persona
{
    private:
        int *horas_trabajo;
        char *amable;
    public:
        Conserje();
        Conserje(char *new_genero,int &new_peso,double &new_altura,int &ano_nacimiento,int &mes_nacimiento,int &dia_nacimiento,char *amable,int &horas_trabajo);
        ~Conserje();
        void imprimir();

};

#endif // CONSERJE_H
