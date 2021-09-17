#include <iostream>
using namespace std;
//#include "Fecha.h"
//#include "Hora.h"
#include "Reunion.h"

int main()
{
    Reunion r(2, 9, 2021, 19, 0, "Composición", "Zoom UTN", 120);
    Persona aux("Molina", "Lucia", 22);
    r.addParticipante(aux);
    r.addParticipante("Gomez", "Leandro", 45);
    cout << "Cantidad: " << r.getCantidadParticipantes();

    cout << endl << "Listado de participantes" << endl;
    cout << "---------------------------" << endl;
    for(int i=0; i<r.getCantidadParticipantes(); i++){
       r.getPersona(i).mostrar();
       cout << endl;
    }

    return 0;
}
