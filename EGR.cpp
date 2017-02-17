#include "EGR.h"

using namespace std;

//Constructor
EGR::EGR() {
        nombre = "";
        edad = 0;
        tipo = "";
        ataque = 0;
        defensa = 0;
}

//Destructor
EGR::~EGR() {
}

//Nombre
void EGR::setNombre(string nom) {
        nombre = nom;
}

string EGR::getNombre() {
        return nombre;
}

//Edad
void EGR::setEdad(int num2) {
        edad = num2;
}

int EGR::getEdad() {
        return edad;
}

//Tipo de Soldado
void EGR::setTipo(string nom3) {
        tipo = nom3;
}

string EGR::getTipo() {
        return tipo;
}

//Ataque
void EGR::setAtaque(int num) {
        ataque = num;
}

int EGR::getAtaque() {
        return ataque;
}

//Defensa
void EGR::setDefensa(int num1) {
        defensa = num1;
}

int EGR::getDefensa() {
 	return defensa;
}
