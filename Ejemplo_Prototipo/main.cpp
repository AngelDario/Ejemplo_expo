#include <iostream>
#include <string>
using namespace std;

class Perro{
    int edad;
    string raza;
public:
    Perro(){};
    Perro(int _edad, string _raza): edad(_edad), raza(_raza){};
    Perro(Perro &o){
        o.edad=edad;
        o.raza=raza;
    }
    void setEdad(int x){edad=x;}
    void setRaza(string _raza){raza=_raza;}
    void hablar(){cout<<"Guau guau";}
    void mostrarDatos(){cout<<"Edad: "<<edad<<endl; cout<<"Raza: "<< raza<<'\n'<<endl;}
};

int main()
{
    Perro p1(5, "chihuahua");
    Perro p2;
    p2=p1;
    p2.setEdad(8);
    p2.setRaza("Chusco");
    p1.mostrarDatos();
    p2.mostrarDatos();
}
