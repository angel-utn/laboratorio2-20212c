/**
Realizar una clase llamada Temporizador que permita almacenar segundos, minutos y horas.

Deber� tener un constructor que pueda recibir tres enteros y establezca los valores de segundos, minutos y horas (en caso de ser valores v�lidos de lo contrario asignar� 0:0:0)

Deber� tener un constructor que no reciba par�metros y establezca los valores iniciales del temporizador en 0:0:0

Deber� tener un m�todo llamado mostrar que muestre el tiempo con el siguiente formato 00:00:00

Deber� tener un m�todo llamado setTipo que definir� c�mo gestionar� el tiempo:
Tipo 1 - Aumenta un segundo por tic
Tipo 2 - Disminuye un segundo por tic

Deber� tener un m�todo llamado tic que realice el paso del tiempo

Deber� tener un m�todo llamado comparar que reciba otro objeto de tipo 
Temporizador y devuelva un n�mero entero a partir de las siguientes 
condiciones:
 0  ---> Si ambos temporizadores son iguales
 1  ---> Si el objeto recibido como par�metro registra un menor tiempo
-1  ---> Si el objeto recibido como par�metro registra un mayor tiempo
*/
#include <iostream>
using namespace std;
#include "include/Temporizador.h"

int main()
{
    Temporizador t(0,0,0);
    Temporizador t2(0,0,0);
    
    cout << "Comparar: " << t.comparar(t2) << endl << endl;
    
    //cout << "Horas: " << t._horas << endl;
    
    
    
    t.setTipo(2);
    t.mostrar();
    
    t.tic();
    cout << endl << "Utilizo el TIC" << endl<< endl;
    t.mostrar();
    
    
    
    
    return 0;
}
