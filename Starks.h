//Clase Stark
#include "EPF.h"
#include <string>
#include <vector>

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
		//Jefe
		void setJefe(string);
                string getJefe();
		//Cantidad de Lobos
		void setLobos(int);
                int getLobos();
		//Animal Emblema
		void setEmblema(string);
                string getEmblema();
		//Lema
		void setLema(string);
                string getLema();
		//Ejercito de pequeñas familias nobles
		void setEjercito(EPF*);
                string getEjercito(int);
		//Guerrero mas valioso
		void setGuerrero(string);
                string getGuerrero();
		//Cantidad de Integrantes
		void setIntegrantes(int);
                int getIntegrantes();
};

#endif
