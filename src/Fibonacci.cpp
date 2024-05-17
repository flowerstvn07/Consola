#include "Fibonacci.h"
#include <iostream>

Fibonacci::Fibonacci(){
    //ctor
}

Fibonacci::~Fibonacci(){
    //dtor
}

Fibonacci::Fibonacci(string nombre, string version) : Juego(nombre, version){
}

void Fibonacci::iniciar(){
    cout << "\t\t\t..." << endl;
    int num;
    cout << "\nDigite el numero de terminos que desea generar: ";
    cin >> num;

    int t1 = 0, t2 = 1;
    cout << "\n\tSerie de Fibonacci de " << num << " terminos:" << endl;
    cout << endl;
    for (int i = 1; i <= num; ++i) {
        cout << t1 << "\t";
        int siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }
    cout << "\n" << endl;
}
