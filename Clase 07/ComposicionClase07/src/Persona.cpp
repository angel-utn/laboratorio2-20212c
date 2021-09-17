#include <iostream>
using namespace std;
#include "Persona.h"

Persona::Persona(){
    _apellidos = "Sin apellido";
    _nombres = "Sin nombre";
}
Persona::Persona(string apellidos, string nombres, int edad)
{
    _apellidos = apellidos;
    _nombres = nombres;
    _edad = edad;
}
void Persona::setApellidos(string apellidos){
    _apellidos = apellidos;
}
void Persona::setNombres(string nombres){
    _nombres = nombres;
}
string Persona::getApellidos(){
    return _apellidos;
}
string Persona::getNombres(){
    return _nombres;
}
void Persona::mostrar(){
    cout << "Apellidos: " << _apellidos << endl;
    cout << "Nombres  : " << _nombres << endl;
    cout << "Edad     : " << _edad << endl;
}















