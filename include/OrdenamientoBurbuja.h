#ifndef ORDENAMIENTOBURBUJA_H
#define ORDENAMIENTOBURBUJA_H
#include "Juego.h"

class OrdenamientoBurbuja : public Juego{
    public:
        OrdenamientoBurbuja();
        OrdenamientoBurbuja(string nombre, string version);
        virtual ~OrdenamientoBurbuja();
        void iniciar();
    protected:

    private:
};

#endif // ORDENAMIENTOBURBUJA_H
