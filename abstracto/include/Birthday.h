#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#define ANO 2017
#define MES 5
#define DIA 26
#include <iostream>

using namespace std;
class Birthday
{
    public:
        int ano;
        int mes;
        int dia;

        Birthday();
        ~Birthday();
        int cal_edad();
};

#endif // BIRTHDAY_H
