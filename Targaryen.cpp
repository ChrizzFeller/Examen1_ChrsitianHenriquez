#include "Targaryen.h"
#include <string>
#include <vector>

using namespace std;

//Constructor
Targaryen::Targaryen(string n1, string n2, string n3, int nu1, vector<ED*> temp, int nu2) {
        reina = n1;
        simbolo = n2;
        lema = n3;
	dragones = nu1;
        ejercitosD = temp;
        barcos = nu2;
}

//Destructor
Targaryen::~Targaryen() {
        //delete vector ejercitosD;
        //cout << "Liberando memoria";
}

//Ejercito de ...
void Targaryen::setEjercito(ED* temp) {
        ejercitosD.push_back(temp);
}

ED* Targaryen::getEjercito(int num) {
        return ejercitosD.at(num);
}

