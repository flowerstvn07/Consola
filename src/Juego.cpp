#include "Juego.h"
#include <iostream>

Juego::Juego(){
    //ctor
}

Juego::Juego(string nombre_juego, string version){
    this->nombre_juego = nombre_juego;
    this->version = version;
}

Juego::~Juego(){
    //dtor
}

string Juego::getNombre(){
    return this->nombre_juego;
}

string Juego::getVersion(){
    return this->version;
}

