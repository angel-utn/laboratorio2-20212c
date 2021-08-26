#include <iostream>
using namespace std;

class Auto{
    private:
        int _velocidad;
    public:
        Auto();
        ~Auto();
        void acelerar(int valor);
        void mostrar();
        int getVelocidad();
};

void Auto::acelerar(int valor){
    if (valor > 0)
        _velocidad += valor;
}
void Auto::mostrar(){
    cout << _velocidad << endl;
}
int Auto::getVelocidad(){
    return _velocidad;
}
/// Constructor
Auto::Auto(){
    _velocidad = 0;
}
/// Destructor
Auto::~Auto(){
    cout << "Destruyendo el auto a " << _velocidad << " km/h" << endl;
}

int main()
{
    Auto a;
    a.acelerar(100);
    cout << a.getVelocidad() << endl;
    return 0;
}
