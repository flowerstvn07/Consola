#ifndef MAYORTRESNUMEROS_H
#define MAYORTRESNUMEROS_H
#include "Juego.h"

class MayorTresNumeros : public Juego{
    public:
        MayorTresNumeros();
        MayorTresNumeros(string nombre, string version);
        virtual ~MayorTresNumeros();
        void iniciar();
    protected:

    private:
};

#endif // MAYORTRESNUMEROS_H
