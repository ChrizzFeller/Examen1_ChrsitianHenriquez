//Clase dothraki
#include <string>

#ifndef ED_H
#define ED_H

using namespace std;

class ED {

	private:
		string nombre;
		string jefe;
		string nombreC;
		string colorC;
		int ataque;
		int defensa;

	public:
		ED(string, string, string, string, int, int);
		~ED();
		//Nombre
		void setNombre(string);
		string getNombre();
		//Jefe
		void setJefe(string);
		string getJefe();
		//Nombre del Caballero
		void setNombreC(string);
		string getNombreC();
		//Color de Cabello
		void setColorC(string);
		string getColorC();
		//Ataque
		void setAtaque(int);
		int getAtaque();
		//Defensa
		void setDefensa(int);
		int getDefensa();
};

#endif
