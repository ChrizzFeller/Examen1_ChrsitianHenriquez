//Clase Stark
#include "EPF.h"
#include <string>
#include <vector>

using namespace std;

#ifndef STARKS_H
#define STARKS_H

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
		void setEjercito1(EPF*);
                EPF* getEjercito1(int);
};

#endif
