#include "Consola.h"
#include <iostream>
#include "Fibonacci.h"
#include "ConjeturaUlam.h"
#include "OrdenamientoBurbuja.h"
#include "MayorTresNumeros.h"
#include "MayorMenorCincoNumeros.h"

Consola::Consola() : nombre("GAMERPRO"), version("1.0"), marca("SAITAMA JUEGOS"), limite_juegos(5){
    cargar();
    menu();
}

Consola::~Consola(){
    //dtor
}

void Consola::cargar(){
    discoduro[0] = new Fibonacci("Serie de Fibonacci", "1.0");
    discoduro[1] = new ConjeturaUlam("Conjetura de Ulam", "1.3");
    discoduro[2] = new OrdenamientoBurbuja("Ordenamiento numerico metodo burbuja", "4.1");
    discoduro[3] = new MayorTresNumeros("Hallar el mayor de 3 numeros", "5.8");
    discoduro[4] = new MayorMenorCincoNumeros("Hallar el mayor y menor de 5 numeros", "10.2");
}

void Consola::menu(){
    cout << "***** BIENVENIDO A " << this->nombre <<", " << this->version <<", " << this->marca<< " *****" << endl;
    cout << endl;
    cout << "\tLista de juegos disponibles:" << endl;
    cout << "\n------------------------------------------------------" << endl;
    for(int i = 0; i < this->limite_juegos; ++i){
        cout << i + 1 << ". " << discoduro[i]->getNombre() << " - Version " << discoduro[i]->getVersion() << endl;
    }
    cout << "6. Salir" << endl;
    cout << "------------------------------------------------------" << endl;

    int opcion;
    cout << "\nSeleccione una opcion: ";
    cin >> opcion;

    if(opcion >= 1 && opcion <= this->limite_juegos){
        jugar(opcion - 1);
    }
    else if(opcion != 6){
        cout << "\n\tOpcion invalida\n" << endl;
        system("pause");
        system("cls");
        this->menu();
    }
    else{
        cout << "\n\tSaliendo de " << this->nombre << "..." << endl;
    }
}

void Consola::jugar(int opcion){
    cout << "\n\tIniciando " << discoduro[opcion]->getNombre() << " - Version " << discoduro[opcion]->getVersion() << endl;
    discoduro[opcion]->iniciar();
    system("pause");
    system("cls");
    this->menu();
}
