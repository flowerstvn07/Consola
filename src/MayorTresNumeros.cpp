#include "MayorTresNumeros.h"
#include <iostream>
#include <algorithm>

MayorTresNumeros::MayorTresNumeros(){
    //ctor
}

MayorTresNumeros::~MayorTresNumeros(){
    //dtor
}

MayorTresNumeros::MayorTresNumeros(string nombre, string version) : Juego(nombre, version){
}

void MayorTresNumeros::iniciar(){
    cout << "\t\t\t\t..." << endl;
    int num1, num2, num3, mayor;
    cout << "\nDigite el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    mayor = max({num1, num2, num3});

    cout << "\nEl mayor es: " << mayor << endl;
    cout << endl;
}
