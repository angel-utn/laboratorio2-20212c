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
        void setFecha(Fecha fecha);
        void setHorario(Horario horario);
        void setDuracion(int duracion);
        void setTema(string tema);
        void setLugar(string lugar);
        void cargar();
        void mostrar();


    private:
        Fecha _fecha;
        Horario _horario;
        string _lugar;
        string _tema;
        int _duracion;
};

#endif // REUNION_H
