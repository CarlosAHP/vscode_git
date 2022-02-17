#include "cliente.cpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string nit, nombres, apellidos, direccion;
    int telefono; 

    cout<<"ingresar nit: ";
    cin>>nit;

    cout<<"ingresar Nombres: ";
    cin>>nombres;

     cout<<"ingresar Apellidos: ";
    cin>>apellidos;

     cout<<"ingresar direccion: ";
    cin>> direccion;

    cout<<"ingresar Telefono: ";
    cin>> telefono;

    // instancia de un objeto 
    cliente obj = cliente(nombres, apellidos,direccion, telefono, nit); 

    cout<<"Datos del cliente:  "<<obj.getnit()<<", "<<obj.getapellidos()<<", "<<obj.getdireccion()<<", "<<obj.gettelefono();

/*forma2
    cliente obj = cliente();
    obj.setnit (nit);
    obj.setnombres(nombres);
    obj.setapellidos(apellidos);
    obj.setdireccion(direccion);
    obj.settelefono(telefono);
    obj.mostrar(); */

    system ("pause");
    return 0;
}

//gir vscode