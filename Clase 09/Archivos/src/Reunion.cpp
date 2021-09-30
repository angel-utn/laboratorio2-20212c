#include <iostream>
using namespace std;
#include <cstring>
#include <cstdio>
#include "Reunion.h"

Reunion::Reunion(){
    _duracion = 0;
}
Reunion::Reunion(Fecha fecha, Horario horario, int duracion){
    _id = -1;
    _fecha = fecha;
    _horario = horario;
    _duracion = duracion;
}
Reunion::Reunion(Fecha fecha, Horario horario, string tema, string lugar, int duracion){
    _id = -1;
    _fecha = fecha;
    _horario = horario;
    _duracion = duracion;
    strcpy(_tema, tema.c_str());
    strcpy(_lugar, lugar.c_str());
}
Reunion::Reunion(int dia, int mes, int anio, int hora, int minuto, string tema, string lugar, int duracion):_fecha(dia, mes, anio),_horario(hora, minuto)
{
    _id = -1;
    strcpy(_tema, tema.c_str());
    strcpy(_lugar, lugar.c_str());
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
    string tema = _tema;
    return tema;
}
string Reunion::getLugar(){
    string lugar = _lugar;
    return lugar;
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
    strcpy(_tema, tema.c_str());
}
void Reunion::setLugar(string lugar){
    strcpy(_lugar, lugar.c_str());
}
void Reunion::setID(int ID){
    _id = ID;
}
int Reunion::getID(){
    return _id;
}
void Reunion::cargar(){
    cout << "ID: ";
    cin >> _id;
    cout << "Fecha: ";
    int dia, mes, anio;
    cin >> dia >> mes >> anio;
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
    cout << "Horario: ";
    int hora, minuto;
    cin >> hora >> minuto;
    _horario.setHora(hora);
    _horario.setMinuto(minuto);
    cout << "Tema: ";
    cin.ignore();
    string tema;
    getline(cin, tema);
    string lugar;
    cout << "Lugar: ";
    getline(cin, lugar);
    setTema(tema);
    setLugar(lugar);
    cout << "Duración: ";
    cin >> _duracion;
}
void Reunion::mostrar(){
     cout << "ID      : ";
     cout << _id << endl;
     cout << "Fecha   : ";
     _fecha.mostrar();
     cout << "Horario : ";
     _horario.mostrar();
     cout << "Lugar   : " << _lugar << endl;
     cout << "Tema    : " << _tema << endl;
     cout << "Duración: " << _duracion << " minutos" << endl << endl;
}
bool Reunion::guardarEnDisco(){
    FILE *p;
    p = fopen("reuniones.dat", "ab");
    if (p == NULL){
        return false;
    }
    bool ok;
    ok = fwrite(this, sizeof(Reunion), 1, p);
    fclose(p);
    return ok;
}
bool Reunion::guardarEnDisco(int pos){
    FILE *p;
    p = fopen("reuniones.dat", "rb+");
    if (p == NULL){
        return false;
    }
    bool ok;
    fseek(p, pos * sizeof(Reunion), SEEK_SET);
    ok = fwrite(this, sizeof(Reunion), 1, p);
    fclose(p);
    return ok;
}
bool Reunion::leerDeDisco(int nroRegistro){
    FILE *p;
    p = fopen("reuniones.dat", "rb");
    if (p == NULL){
        return false;
    }
    fseek(p, nroRegistro * sizeof(Reunion), SEEK_SET);
    bool ok;
    ok = fread(this, sizeof(Reunion), 1, p);
    fclose(p);
    return ok;
}

/// Funciones globales
int cantidadReuniones(){
    int bytes, cant;
    FILE *p;
    p = fopen("reuniones.dat", "rb");
    if (p == NULL){
        return 0;
    }
    fseek(p, 0, SEEK_END);
    bytes = ftell(p);
    fclose(p);
    cant = bytes / sizeof(Reunion);
    return cant;
}
int buscarReunion(int ID){
    Reunion r;
    int i, cant = cantidadReuniones();
    for(i =0; i<cant; i++){
        r.leerDeDisco(i);
        if (ID == r.getID()){
            return i;
        }
    }
    return -1;
}






