#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    public:
        Persona();
        Persona(string apellidos, string nombres, int edad);
        void setApellidos(string apellidos);
        void setNombres(string nombres);
        string getApellidos();
        string getNombres();
        void mostrar();

    private:
        string _apellidos, _nombres;
        int _edad;
};

#endif // PERSONA_H
