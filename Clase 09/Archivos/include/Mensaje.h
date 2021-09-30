#ifndef MENSAJE_H
#define MENSAJE_H
#include "rlutil.h"

class Mensaje
{
    public:
        enum class TipoMensaje{
            Info,
            Exito,
            Error
        };
        Mensaje(string mensaje, TipoMensaje tipoMensaje = TipoMensaje::Info , int x=1, int y=24);
        void mostrar();

    private:
        TipoMensaje _tipoMensaje;
        string _mensaje;
        int _x, _y;
};

#endif // MENSAJE_H
