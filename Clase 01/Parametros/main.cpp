#include <iostream>
using namespace std;

/*
    Sólo lo intercambia dentro de la función
*/
void intercambiar_x_valor(int c, int d){
    int aux;
    aux = c;
    c = d;
    d = aux;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
}

/*
    Intercambia haciendo uso de las direcciones de las variables originales.
*/
void intercambiar_x_direccion(int *c, int *d){
    int aux;
    aux = *c;
    *c = *d;
    *d = aux;
    cout << "C: " << *c << endl;
    cout << "D: " << *d << endl;
}

/*
    Intercambia haciendo uso de las referencias de las variables originales.
*/
void intercambiar_x_referencia(int &c, int &d){
    int aux;
    aux = c;
    c = d;
    d = aux;
    cout << "C: " << c << endl;
    cout << "D: " << d << endl;
}

int main()
{
    /*
    int var = 1000;
    int *p;
    p = &var; // p está apuntando a var

       // & --> Operador de dirección
       // * --> Operador de indirección

    cout << "Valor de var     : " << var << endl;
    cout << "Dirección de var : " << &var << endl;
    cout << "Valor de p       : " << p << endl;
    cout << "Indirección de p : " << *p << endl;
    *p = 1;
    cout << "Valor de var     : " << var << endl;
    */
    int a = 500, b = 1000;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << endl;
    intercambiar_x_referencia(a, b);
    cout << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}
