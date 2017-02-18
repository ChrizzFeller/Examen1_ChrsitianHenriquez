#include "ED.h"

using namespace std;

//Constructor
ED::ED(string n1, string n2, string n3, string n4, int nu1, int nu2) {
	nombre = n1;
	jefe = n2;
	nombreC = n3;
	colorC = n4;
	ataque = nu1;
	defensa = nu2;
}

//Destructor
ED::~ED() {
}

//Nombre
void ED::setNombre(string nom) {
	nombre = nom;
}

string ED::getNombre() {
	return nombre;
}

//Jefe
void ED::setJefe(string nom2) {
	jefe = nom2;
}

string ED::getJefe() {
	return jefe;
}

//Nombre del Caballero
void ED::setNombreC(string nom3) {
	nombreC = nom3;
}

string ED::getNombreC() {
	return nombreC;
}

//Color de Cabello
void ED::setColorC(string nom4) {
	colorC = nom4;
}

string ED::getColorC() {
	return colorC;
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
