#include "Birthday.h"

Birthday::Birthday()
{
    ano=0;
    mes=0;
    dia=0;
}

Birthday::~Birthday()
{
    cout<<"Se elimino Birthday"<<endl;
}

int Birthday::cal_edad()
{
    cout<<"Tiene "<<ANO-ano<<" anos, con "<<MES-mes<<" meses y "<<DIA-dia<<" dias "<<endl;
}
