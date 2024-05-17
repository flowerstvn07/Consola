#ifndef CONJETURAULAM_H
#define CONJETURAULAM_H
#include "Juego.h"

class ConjeturaUlam : public Juego{
    public:
        ConjeturaUlam();
        ConjeturaUlam(string nombre, string version);
        virtual ~ConjeturaUlam();
        void iniciar();
    protected:

    private:
};

#endif // CONJETURAULAM_H
