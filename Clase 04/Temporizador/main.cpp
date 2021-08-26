/**
Realizar una clase llamada Temporizador que permita almacenar segundos, minutos y horas.

Deberá tener un constructor que pueda recibir tres enteros y establezca los valores de segundos, minutos y horas (en caso de ser valores válidos de lo contrario asignará 0:0:0)

Deberá tener un constructor que no reciba parámetros y establezca los valores iniciales del temporizador en 0:0:0

Deberá tener un método llamado mostrar que muestre el tiempo con el siguiente formato 00:00:00

Deberá tener un método llamado setTipo que definirá cómo gestionará el tiempo:
Tipo 1 - Aumenta un segundo por tic
Tipo 2 - Disminuye un segundo por tic

Deberá tener un método llamado tic que realice el paso del tiempo

Deberá tener un método llamado comparar que reciba otro objeto de tipo Temporizador y devuelva un número entero a partir de las siguientes condiciones:
 0  ---> Si ambos temporizadores son iguales
 1  ---> Si el objeto recibido como parámetro registra un menor tiempo
-1  ---> Si el objeto recibido como parámetro registra un mayor tiempo
*/
#include <iostream>
using namespace std;
#include "Temporizador.h"

int main()
{
    Temporizador t, t1(35, 12, 4);
    t.setTipo(1);
    t1.setTipo(2);

    return 0;
}
