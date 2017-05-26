#include "Persona.h"

Persona::Persona()
{
    genero=new char[0];
    genero="";
    peso=new int;
    peso=0;
    altura=new double;
    altura=0;
    Birthday();
}

Persona::~Persona()
{
    delete genero;
    delete peso;
    delete altura;

}
