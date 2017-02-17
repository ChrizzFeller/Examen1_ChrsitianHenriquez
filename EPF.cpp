#include "EPF.h"

using namespace std;

//Constructor
EPF::EPF() {
	nombre = "";
	simbolo = "";
	lema = "";
	cantidad = 0;
	ataque = 0;
	defensa = 0;	
}

//Destructor
EPF::~EPF() {
}


//Nombre
void EPF::setNombre(string nom) {
	nombre = nom;
}

string EPF::getNombre() {
	return nombre;
}

//Simbolo
void EPF::setSimbolo(string nom2) {
	simbolo = nom2;
}

string EPF::getSimbolo() {
	return simbolo;
}

//Lema
void EPF::setLema(string nom3) {
	lema = nom3;
}

string EPF::getLema() {
	return lema;
}

//Cantidad
void EPF::setCantidad(int num2) {
	cantidad = num2;
}

int EPF::getCantidad() {
	return cantidad;
}

//Ataque
void EPF::setAtaque(int num) {
        ataque = num;
}

int EPF::getAtaque() {
        return ataque;
}

//Defensa
void EPF::setDefensa(int num1) {
        defensa = num1;
}

int EPF::getDefensa() {
        return defensa;
}
