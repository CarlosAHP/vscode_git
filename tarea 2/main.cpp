#include "propietario.cpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string nit, nombres, apellidos, direccion;
    int telefono; 


    cout<<"ingresar Nombres: ";
    cin>>nombres;

     cout<<"ingresar Apellidos: ";
    cin>>apellidos;

     cout<<"ingresar direccion: ";
    cin>> direccion;

    cout<<"ingresar Telefono: ";
    cin>> telefono;

    // instancia de un objeto 
    propietario obj = propietario(nombres, apellidos,direccion, telefono, nit); 

    cout<<"Datos del propietario:  "<<obj.getnombres()<<", "<<obj.getapellidos()<<", "<<obj.getdireccion()<<", "<<obj.gettelefono();

     cout<<"Ingrese nombre a modificar: ";
	cin>>nombres;
	obj.setnombres(nombres);
	obj.mostrar();

    cout<<"Ingrese apellido a modificar: ";
	cin>>apellidos;
	obj.setnombres(apellidos);
	obj.mostrar();

    cout<<"Ingrese direccion a modificar: ";
    cin>>direccion;
    obj.setdireccion(direccion);
    obj.mostrar();

    cout<<"Ingrese telefono a modificar: ";
    cin>>telefono;
    obj.settelefono(telefono);
    obj.mostrar();

    system ("pause");
    return 0;

}
