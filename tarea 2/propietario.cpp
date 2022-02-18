#include "persona.cpp"
#include <iostream>
#include <indexsrv.h>

using namespace std;

class propietario: persona
{
    //atributos
private: 
        string nit;

    //constructor

public:
    propietario(){
    }
    propietario(string nom, string ape, string dir, int tel, string n) : persona(nom, ape,dir, tel){
       nit = n;
    }
    //metodos 
    // set (modificar )

    void setnombres (string nom){  nombres = nom;}
    void setapellidos (string ape){ apellidos  = ape;}
    void setdireccion (string dir){  direccion = dir;}
    void settelefono (int tel){  telefono = tel;}

    // get mostrar 

    string getnombres(){return nombres;}
    string getapellidos(){return apellidos;}
    string getdireccion(){return direccion;}
    int gettelefono(){return telefono;}

    //metodos 
    void mostrar(){
        cout<<"             " <<endl;
        cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;

    }
};

