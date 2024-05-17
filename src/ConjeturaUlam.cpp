#include "ConjeturaUlam.h"
#include <iostream>

ConjeturaUlam::ConjeturaUlam(){
    //ctor
}

ConjeturaUlam::~ConjeturaUlam(){
    //dtor
}

ConjeturaUlam::ConjeturaUlam(string nombre, string version) : Juego(nombre, version){
}

void ConjeturaUlam::iniciar(){
    cout << "\t\t\t..." << endl;
    int num;
    cout << "\nIngrese un numero: ";
    cin >> num;

    cout << "\n\tSecuencia de Ulam para " << num << ":" << "\n" << endl;
    while(num != 1){
        cout << num << "\t";
        if(num % 2 == 0){
            num = num / 2;
        }
        else{
            num = 3 * num + 1;
        }
    }
    cout << "1";
    cout << "\n" << endl;
}
