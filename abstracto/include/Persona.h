#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "Birthday.h"

using namespace std;

class Persona
{
    protected:
        char *genero;
        Birthday edad;
        int *peso;
        double *altura;

    public:
        Persona();
        virtual ~Persona();
        virtual void imprimir()=0;

};

#endif // PERSONA_H
