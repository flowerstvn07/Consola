#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>

using namespace std;

class Juego{
    public:
        Juego();
        Juego(string nombre_juego, string version);
        virtual ~Juego();
        virtual void iniciar() = 0;
        string getNombre();
        string getVersion();
    protected:
        string nombre_juego;
        string version;
    private:

};

#endif // JUEGO_H
