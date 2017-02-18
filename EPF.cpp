#include "EPF.h"

using namespace std;

//Constructor
EPF::EPF(string n1, string n2, string n3, int nu1, int nu2, int nu3) {
	nombre = n1;
	simbolo = n2;
	lema = n3;
	cantidad = nu1;
	ataque = nu2;
	defensa = nu3;	
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
