#ifndef HORA_H
#define HORA_H

class Horario
{
    public:
        Horario(int hora, int minuto);
        Horario();
        int getHora();
        int getMinuto();
        void setHora(int hora);
        void setMinuto(int minuto);
        void mostrar();

    private:
        int _hora, _minuto;
};

#endif // HORA_H
