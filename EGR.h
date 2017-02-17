//Clase Guardia Real
#include <string>

using namespace std;

#ifndef EGR_H
#define EGR_h

class EGR {
	
	private:
		string nombre;
		int edad;
		string tipo;
		int ataque;
		int defensa;
		
	public:
		EGR();
		~EGR();
		//Nombre
                void setNombre(string);
                string getNombre();
                //Edad
                void setEdad(int);
                int getEdad();
                //Tipo
                void setTipo(string);
                string getTipo();
                //Ataque
                void setAtaque(int);
                int getAtaque();
                //Defensa
                void setDefensa(int);
                int getDefensa();
};

#endif