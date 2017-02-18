#include "EGR.h"

using namespace std;

//Constructor
EGR::EGR(string n1, string n2, int nu1, int nu2, int nu3) {
        nombre = n1;
        edad = nu1;
        tipo = n2;
        ataque = nu2;
        defensa = nu3;
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
