#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H


class Temporizador
{
    public:
        Temporizador();
        Temporizador(int horas, int minutos, int segundos);
        void setTipo(int tipo);
        void mostrar();
        
        void tic();
        int comparar(Temporizador obj);

    private:
        int _horas, _minutos, _segundos, _tipo;
};

#endif // TEMPORIZADOR_H
