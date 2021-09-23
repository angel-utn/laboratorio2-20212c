#include <iostream>
using namespace std;
#include "Hora.h"

Horario::Horario(int hora, int minuto){
    _hora = hora;
    _minuto = minuto;
}
Horario::Horario(){
    time_t t;
    struct tm *f;
    time(&t);
    f = localtime(&t);
    _hora = f->tm_hour;
    _minuto = f->tm_min;
}
int  Horario::getHora(){
    return _hora;
}
int  Horario::getMinuto(){
    return _minuto;
}
void Horario::setHora(int hora){
    _hora = hora;
}
void Horario::setMinuto(int minuto){
    _minuto = minuto;
}
void Horario::mostrar(){
    if (_hora < 10){
        cout << "0";
    }
    cout << _hora << ":";
    if (_minuto < 10){
    cout << "0";
    }
    cout << _minuto << endl;
}
