#include <iostream>
using namespace std;
#include "../include/Temporizador.h"

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

void Temporizador::tic(){
    switch(_tipo){
    case 1:
        _segundos++;
        
        if(_segundos==60){
            _segundos = 0;
            _minutos++;
            
            if(_minutos == 60){
                _minutos = 0;
                _horas++;
            }
        }
        
        
        break;
    case 2:
        _segundos--;
       
       if(_segundos == -1){
            _segundos = 59;
            _minutos--;
            
            if(_minutos == -1){
                _minutos = 59;
                _horas--;
                if(_horas == -1){
                    _horas = _minutos = _segundos = 0;
                }
                
            }
            
       }
        
        break;
    }
}

int Temporizador::comparar(Temporizador obj){
    int t1, t2;
    
    t1 = _horas * 3600 + _minutos * 60 + _segundos;
    t2 = obj._horas * 3600 + obj._minutos * 60 + obj._segundos;
        
    if(t1 == t2){
        return 0;
    }
    else if(t1 > t2){
        return 1;
    }
    else{
        return -1;
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
