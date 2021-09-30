#include <iostream>
using namespace std;
#include "Mensaje.h"
#include "Reunion.h"
#include "ReunionManager.h"
#include "rlutil.h"

bool ReunionManager::cargar()
{
    bool ok;
    rlutil::cls();
    cout << "Cargar una nueva reunión" << endl;
    cout << "-----------------------------" << endl;
    Reunion r;
    r.cargar();
    ok = r.guardarEnDisco();
    return ok;
}
bool ReunionManager::modificar()
{
    bool ok = false;
    rlutil::cls();
    cout << "Modificar una reunión" << endl;
    cout << "-----------------------------" << endl;
    int ID, pos;
    cout << "ID a buscar: ";
    cin >> ID;
    pos = buscarReunion(ID);
    if (pos >= 0){
        int duracion;
        Reunion r;
        r.leerDeDisco(pos);
        cout << endl;
        cout << "Modificando reunión " << r.getTema() << " de duración " << r.getDuracion() << endl << endl;
        cout << "Ingresar nueva duración: ";
        cin >> duracion;
        r.setDuracion(duracion);
        ok = r.guardarEnDisco(pos);
    }
    return ok;
}
void ReunionManager::mostrar_x_ID()
{
    rlutil::cls();
    cout << "Mostrar una reunión" << endl;
    cout << "----------------------------------" << endl;
    int ID, pos;
    cout << "ID a buscar: ";
    cin >> ID;
    pos = buscarReunion(ID);
    if (pos >= 0){
        Reunion r;
        r.leerDeDisco(pos);
        cout << endl;
        rlutil::setColor(rlutil::LIGHTBLUE);
        r.mostrar();
    }
    else{
        Mensaje m(">>>> La reunión buscada no existe", Mensaje::TipoMensaje::Error);
        m.mostrar();
    }
}
void ReunionManager::mostrarTodas()
{
    rlutil::cls();
    cout << "Listado de reuniones" << endl;
    cout << "----------------------------------" << endl;
    int i, cant = cantidadReuniones();
    Reunion r;
    for(i=0; i<cant; i++){
        r.leerDeDisco(i);
        r.mostrar();
    }
}
void ReunionManager::reporte(){
    int cant = cantidadReuniones();
    if (cant == 0){
        return;
    }
    // Pedimos memoria
    Reunion *lista = nullptr;
    lista = new Reunion[cant];
    if (lista == nullptr){
        return;
    }
    // Leemos archivo completo
    for(int i=0; i<cant; i++){
        lista[i].leerDeDisco(i);
    }
    // Ordenamos vector
    int i, j, posMin;
    Reunion aux;
    for(i=0; i<cant-1; i++){
        posMin = i;

        for(j=i+1; j<cant; j++){
            if (lista[j].getDuracion() < lista[posMin].getDuracion()){
                posMin = j;
            }
        }
        aux = lista[i];
        lista[i] = lista[posMin];
        lista[posMin] = aux;
    }
    // Mostramos vector
    rlutil::cls();
    rlutil::locate(1, 1);
    cout << "Tema";
    rlutil::locate(40, 1);
    cout << "Duración";
    rlutil::locate(1, 2);
    cout << "------------------------------------------------------------" << endl;
    for(i=0; i<cant; i++){
        rlutil::locate(1, i+3);
        cout << lista[i].getTema();
        rlutil::locate(40, i+3);
        cout << lista[i].getDuracion() << endl;
    }

    delete lista;
}
