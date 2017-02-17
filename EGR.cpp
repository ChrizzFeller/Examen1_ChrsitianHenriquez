#include "EGR.h"

//Constructor
EGR::EGR() {
        nombre = "";
        simbolo = "";
        lema = "";
        ataque = 0;
        defensa = 0;
}

//Destructor
EGR:~EGR() {
}

//Nombre
void EGR::setNombre(string nom) {
        nombre = nom;
}

string EGR::getNombre() {
        return nombre;
}

//Simbolo
void EGR::setSimbolo(string nom2) {
        simbolo = nom2;
}

string EGR::getSimbolo() {
        return simbolo;
}

//Lema
void EGR::setLema(string nom3) {
        lema = nom3;
}

string EGR::getLema() {
        return lema;
}

//Ataque
void ED::setAtaque(int num) {
        ataque = num;
}

int ED::getAtaque() {
        return ataque;
}

//Defensa
void ED::setDefensa(int num1) {
        defensa = num1;
}

int ED::getDefensa() {
 	return defensa;
}
