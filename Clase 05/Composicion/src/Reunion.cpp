#include <iostream>
using namespace std;
#include "Reunion.h"

Reunion::Reunion(){
    _duracion = 0;
}
Reunion::Reunion(Fecha fecha, Horario horario, int duracion){
    _fecha = fecha;
    _horario = horario;
    _duracion = duracion;
}
Reunion::Reunion(Fecha fecha, Horario horario, string tema, string lugar, int duracion){
    _fecha = fecha;
    _horario = horario;
    _duracion = duracion;
    _tema = tema;
    _lugar = lugar;
}
Reunion::Reunion(int dia, int mes, int anio, int hora, int minuto, string tema, string lugar, int duracion):_fecha(dia, mes, anio),_horario(hora, minuto)
{
    _tema = tema;
    _lugar = lugar;
    _duracion = duracion;
}
Fecha Reunion::getFecha(){
    return _fecha;
}
Horario Reunion::getHorario(){
    return _horario;
}
int Reunion::getDuracion(){
    return _duracion;
}
string Reunion::getTema(){
    return _tema;
}
string Reunion::getLugar(){
    return _lugar;
}
void Reunion::setFecha(Fecha fecha){
    _fecha = fecha;
}
void Reunion::setHorario(Horario horario){
    _horario = horario;
}
void Reunion::setDuracion(int duracion){
    _duracion = duracion;
}
void Reunion::setTema(string tema){
    _tema = tema;
}
void Reunion::setLugar(string lugar){
    _lugar = lugar;
}
void Reunion::cargar(){
}
void Reunion::mostrar(){
     cout << "Fecha   : ";
     _fecha.mostrar();
     cout << "Horario : ";
     _horario.mostrar();
     cout << "Lugar   : " << _lugar << endl;
     cout << "Tema    : " << _tema << endl;
     cout << "Duración: " << _duracion << " minutos" << endl;
}
