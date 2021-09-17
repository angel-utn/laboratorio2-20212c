#include <iostream>
using namespace std;
#include "Reunion.h"

int main()
{
    Reunion r;
    //ToDo: Leer de disco pueda leer cualquier registro del archivo
    r.leerDeDisco();
    r.mostrar();
    cout << endl;
    r.leerDeDisco();
    r.mostrar();
    cout << endl;

    return 0;
}
