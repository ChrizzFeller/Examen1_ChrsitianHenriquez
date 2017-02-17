#include "EPF.h"

//Constructor
EPF::EPF() {
	nombre = "";
	simbolo = "";
	lema = "";
	cantidad = 0;
	ataque = 0;
	defesa = 0;	
}

//Destructor
EPF::~EPF {
}


//Nombre
EPF::setNombre(string nom) {
	nombre = nom;
}

EPF::getNombre() {
	return nombre;
}

//Simbolo
EPF::setSimbolo(string nom2) {
	simbolo = nom2;
}

EPF::getSimbolo() {
	return simbolo;
}

//Lema
EPF::setLema(string nom3) {
	lema = nom3;
}

EPF::getLema() {
	return lema;
}

//Cantidad
EPF::setCantidad(int num2) {
	cantidad = num2;
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
