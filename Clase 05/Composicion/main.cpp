#include <iostream>
using namespace std;
//#include "Fecha.h"
//#include "Hora.h"
#include "Reunion.h"

int main()
{
    Reunion r(2, 9, 2021, 19, 0, "Composición", "Zoom UTN", 120);
    r.mostrar();
    return 0;
}
