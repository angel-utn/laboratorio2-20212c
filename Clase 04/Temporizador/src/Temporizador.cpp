#include <iostream>
using namespace std;
#include "Temporizador.h"

Temporizador::Temporizador()
{
    _horas = _minutos = _segundos = 0;
    _tipo = 1;
}

Temporizador::Temporizador(int horas, int minutos, int segundos){
    _horas = horas;
    _minutos = minutos;
    _segundos = segundos;

    if (horas < 0 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59){
        _horas = _minutos = _segundos = 0;
    }
}

void Temporizador::setTipo(int tipo){
    _tipo = tipo;
    if (tipo < 1 || tipo > 2){
        _tipo = 1;
    }
}

void Temporizador::mostrar(){
    if (_horas < 10){
        cout << "0";
    }
    cout << _horas << ":";

    if (_minutos < 10){
        cout << "0";
    }
    cout << _minutos << ":";

    if (_segundos < 10){
        cout << "0";
    }
    cout << _segundos;
    cout << endl;
}
