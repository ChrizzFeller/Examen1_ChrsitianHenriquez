//Clase Stark
#include "EPF.h"
#include <string>
#include <vector>

#ifndef STARK_H
#define STARK_H

using namespace std;

class Starks {
	
	private:
		string jefe;
		int lobos;
		string emblemaA;
		string lema;
		vector<EPF*> ejercitosPN;
		string guerreroM;
		int integrantes;
	
	public:
		Starks(string,int,string,string,vector<EPF*>,string,int);
		~Starks();
		//Ejercito de pequeñas familias nobles
		void setEjercito(EPF*);
                EPF* getEjercito(int);
};

#endif
