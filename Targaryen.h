//Clase Targaryen
#include "ED.h"
#include <string>
#include <vector>

#ifndef TARGARYEN_H
#define TARGARYEN_H

using namespace std;

class Targaryen {

        private:
                string reina;
                string simbolo;
                string lema;
		int dragones;
                vector<ED*> ejercitosD;
                int barcos;

        public:
                Targaryen(string,string,string,int,vector<ED*>,int);
                ~Targaryen();
                //Ejercito de pequeñas familias nobles
                void setEjercito3(ED*);
                ED* getEjercito3(int);
};

#endif

