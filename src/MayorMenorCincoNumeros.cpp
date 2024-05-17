#include "MayorMenorCincoNumeros.h"
#include <iostream>
#include <algorithm>
#include <vector>

MayorMenorCincoNumeros::MayorMenorCincoNumeros(){
    //ctor
}

MayorMenorCincoNumeros::~MayorMenorCincoNumeros(){
    //dtor
}

MayorMenorCincoNumeros::MayorMenorCincoNumeros(string nombre, string version) : Juego(nombre, version){
}

void MayorMenorCincoNumeros::iniciar(){
    cout << "\t\t\t\t\t..." << endl;
    int menor, mayor;
    vector<int> numeros(5);

    cout << "\nDigite 5 numeros:" << endl;
    for(int i = 0; i < 5; ++i){
        cin >> numeros[i];
    }

    menor = *min_element(numeros.begin(), numeros.end());
    mayor = *max_element(numeros.begin(), numeros.end());

    cout << "\nEl menor es: " << menor << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << endl;
}
