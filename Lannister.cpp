#include "Lannister.h"
#include <string>
#include <vector>

using namespace std;

//Constructor
Lannister::Lannister(string n1, string n2, string n3, vector<EGR*> temp,int nu0 ,int nu2, int nu3) {
        jefe = n1;
        animal = n2;
        lema = n3;
        ejercitosGR = temp;
	cantidadD = nu0;
        fuerza = nu2;
        integrantes = nu3;
}

//Destructor
Lannister::~Lannister() {
        //delete vector ejercitosPN;
        //cout << "Liberando memoria";
}

//Ejercito de ...
void Lannister::setEjercito2(EGR* temp) {
        ejercitosGR.push_back(temp);
}

EGR* Lannister::getEjercito2(int num) {
        return ejercitosGR.at(num);
}
