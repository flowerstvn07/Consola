#include "OrdenamientoBurbuja.h"
#include <iostream>
#include <vector>
#include <algorithm>

OrdenamientoBurbuja::OrdenamientoBurbuja(){
    //ctor
}

OrdenamientoBurbuja::~OrdenamientoBurbuja(){
    //dtor
}

OrdenamientoBurbuja::OrdenamientoBurbuja(string nombre, string version) : Juego(nombre, version){
}

void OrdenamientoBurbuja::iniciar(){
    cout << "\t\t\t\t..." << endl;
    int num;
    cout << "\nDigite la cantidad de numeros: ";
    cin >> num;

    vector<int> numeros(num);

    cout << "Digite los " << num << " numeros:" << endl;
    for(int i = 0; i < num; ++i){
        cin >> numeros[i];
    }

    for(int i = 0; i < num - 1; ++i){
        for(int j = 0; j < num - i - 1; ++j){
            if(numeros[j] > numeros[j + 1]){
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    cout << "\n\tNumeros ordenados:" << endl;
    cout << endl;
    for(int i = 0; i < num; ++i){
        cout << numeros[i] << "\t";
    }
    cout << "\n" << endl;
}
