#include "Starks.h"
#include <string>
#include <vector>

using namespace std;

//Constructor
Starks::Starks(string n1, int nu1, string n2, string n3, vector<EPF*> temp, string n4, int nu2) {
	jefe = n1;
	lobos = nu1;
	emblemaA = n2;
	lema = n3;
	ejercitosPN = temp;
	guerreroM = n4;
	integrantes = nu2;
}

//Destructor
Starks::~Starks() {
	//delete vector ejercitosPN;
	//cout << "Liberando memoria";
}

//Ejercito de ...
void Starks::setEjercito(EPF* temp) {
	ejercitosPN.push_back(temp);
}

EPF* Starks::getEjercito(int num) {
	return ejercitosPN.at(num);
}
