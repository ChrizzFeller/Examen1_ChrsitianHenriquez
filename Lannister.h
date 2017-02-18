//Clase lannister
#include <string>
#include <vector>
#include "EGR.h"

#ifndef LANNISTER_H
#define LANNISTER_H

using namespace std;

class Lannister {
	private:
		string jefe;
		string animal;
		string lema;
		vector<EGR*> ejercitosGR;
		int cantidadD;
		int fuerza;
		int integrantes;

	public:
		Lannister(string, string, string, vector<EGR*>, int, int, int);
		~Lannister();
		//Ejercitos de Guardias Reales
		void setEjercito2(EGR*);
		EGR* getEjercito2(int);

};

#endif
