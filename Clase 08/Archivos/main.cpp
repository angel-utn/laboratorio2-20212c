#include <iostream>
using namespace std;
#include "Reunion.h"

int main()
{
    Reunion r;
    /*int i=0, cant = cantidadReuniones();

    cout << "Listado con un for" << endl;
    cout << "-------------------------------" << endl;
    for(i =0; i<cant; i++){
        r.leerDeDisco(i);
        r.mostrar();
    }*/
    int ID, p;
    cout << "ID a buscar: ";
    cin >> ID;

    p = buscarReunion(ID);

    if (p >= 0){
        r.leerDeDisco(p);
        r.mostrar();
    }
    else{
        cout << "No existe el registro con ID " << ID << endl;
    }



    return 0;
}
