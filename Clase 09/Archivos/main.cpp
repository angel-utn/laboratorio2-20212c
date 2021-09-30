#include <iostream>
using namespace std;
#include "rlutil.h"
#include "Mensaje.h"
#include "ReunionManager.h"

int main()
{
    int opcion;
    while(true){
        rlutil::cls();
        rlutil::setColor(rlutil::WHITE);

        cout << "Menú principal" << endl;
        cout << "----------------------------" << endl;
        cout << "1) Cargar reunión" << endl;
        cout << "2) Modificar reunión" << endl;
        cout << "3) Mostrar reunión x ID" << endl;
        cout << "4) Mostrar reuniones" << endl;
        cout << "5) Reporte reuniones" << endl;
        cout << "----------------------------" << endl;
        cout << "0) Salir" << endl << endl;
        cout << "Opción: ";
        cin >> opcion;


        switch(opcion){
            case 1:
                if (ReunionManager::cargar() == true){
                    Mensaje msj("La reunión se grabó correctamente", Mensaje::TipoMensaje::Exito);
                    msj.mostrar();
                }
            break;
            case 2:
                if (ReunionManager::modificar() == true){
                    Mensaje msj("La reunión se grabó correctamente", Mensaje::TipoMensaje::Exito);
                    msj.mostrar();
                }
            break;
            case 3:
                ReunionManager::mostrar_x_ID();
            break;
            case 4:
                ReunionManager::mostrarTodas();
            break;
            case 5:
                ReunionManager::reporte();
            break;
            case 0:
                return 0;
            break;
            default:
                Mensaje msj(">>>> Opción incorrecta                 ", Mensaje::TipoMensaje::Error);
                msj.mostrar();
            break;
        }
        cin.ignore();
        rlutil::anykey();
    }
    return 0;
}
