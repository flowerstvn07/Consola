#ifndef FIBONACCI_H
#define FIBONACCI_H
#include "Juego.h"

class Fibonacci : public Juego{
    public:
        Fibonacci();
        Fibonacci(string nombre,string version);
        virtual ~Fibonacci();
        void iniciar();
    protected:

    private:
};

#endif // FIBONACCI_H
