//Clase Guardia Real
#include <string>

using namespace std;

#ifndef EGR_H
#define EGR_h

class EGR {
	
	private:
		string nombre;
		string simbolo;
		string lema;
		int cantidad;
		int ataque;
		int defensa;
		
	public:
		EGR();
		~EGR();
		//Nombre
                void setNombre(string);
                string getNombre();
                //Simbolo
                void setSimbolo(string);
                string getSimbolo();
                //Lema
                void setLema(string);
                string getLema();
                //Ataque
                void setAtaque(int);
                int getAtaque();
                //Defensa
                void setDefensa(int);
                int getDefensa();
};

#endif
