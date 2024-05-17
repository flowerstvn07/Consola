#ifndef MAYORMENORCINCONUMEROS_H
#define MAYORMENORCINCONUMEROS_H
#include "Juego.h"

class MayorMenorCincoNumeros : public Juego{
    public:
        MayorMenorCincoNumeros();
        MayorMenorCincoNumeros(string nombre, string version);
        virtual ~MayorMenorCincoNumeros();
        void iniciar();
    protected:

    private:
};

#endif // MAYORMENORCINCONUMEROS_H
