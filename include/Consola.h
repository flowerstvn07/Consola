#ifndef CONSOLA_H
#define CONSOLA_H
#include "Juego.h"
#define TAM 5

class Consola{
    public:
        Consola();
        virtual ~Consola();
        void cargar();
        void menu();
    protected:

    private:
        string nombre;
        string version;
        string marca;
        int limite_juegos;
        Juego* discoduro[TAM];
        void jugar(int);
};

#endif // CONSOLA_H
