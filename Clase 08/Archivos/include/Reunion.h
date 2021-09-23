#ifndef REUNION_H
#define REUNION_H
#include "Fecha.h"
#include "Hora.h"

class Reunion
{
    public:
        Reunion();
        Reunion(Fecha fecha, Horario horario, int duracion);
        Reunion(Fecha fecha, Horario horario, string tema, string lugar, int duracion);
        Reunion(int dia, int mes, int anio, int hora, int minuto, string tema, string lugar, int duracion);
        Fecha getFecha();
        Horario getHorario();
        int getDuracion();
        string getTema();
        string getLugar();
        int getID();
        void setFecha(Fecha fecha);
        void setHorario(Horario horario);
        void setDuracion(int duracion);
        void setTema(string tema);
        void setLugar(string lugar);
        void setID(int ID);
        void cargar();
        void mostrar();
        bool guardarEnDisco();
        bool leerDeDisco(int nroRegistro);


    private:
        Fecha _fecha;
        Horario _horario;
        char _lugar[50];
        char _tema[140];
        int _duracion;
        int _id;
};

/// Funciones globales
int cantidadReuniones();
int buscarReunion(int ID);


#endif // REUNION_H
