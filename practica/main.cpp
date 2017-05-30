#include <iostream>
#include <vector>
using namespace std;
/*
class Widget{
public:
    virtual int f(){return 1;}
};
class Gadget:public Widget{
public:
    virtual int f(){return 2;}
};
class Gizmo:public Widget{
public:
    virtual int f(){return 3;}
};

void get(Widget *w)
{
    cout<<w->f()<<" ";
}
*/
class Avion{
public:
    virtual void imprimir()=0;
};
class A1:public Avion{
public:
    void imprimir(){
        cout<<"Soy el avion A1"<<endl;
    }
};
class A2:public Avion{
public:
    void imprimir()
    {
        cout<<"Soy el avion A2"<<endl;
    }
};

class Torre{
public:
    vector<Avion *> arr;

    void agregar(Avion *w)
    {
        arr.push_back(w);
    }
    void imp()
    {
        for(int i=0;i<3;++i)
            arr[i]->imprimir();
    }

};
int main()
{
    Torre to;
    A1 al;
    A2 ala;
    to.agregar(&al);
    to.agregar(&ala);
    to.imp();
    /*
    vector<Widget *> arr;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    arr.push_back(&wid);
    arr.push_back(&gad);
    arr.push_back(&giz);
    for (int i=0;i<3;++i)
        get(arr[i]);
    return 0;
    */


}
