//Clase Familia Noble
#include <string>

#ifndef EPF_H
#define EPF_H

using namespace std;

class EPF {

	private:
		string nombre;
		string simbolo;
		string lema;
		int cantidad;
		int ataque;
		int defensa;
		
	public:
		EPF(string, string, string, int, int, int);
		~EPF();
		//Nombre
                void setNombre(string);
                string getNombre();
                //Simbolo
                void setSimbolo(string);
                string getSimbolo();
                //Lema
                void setLema(string);
                string getLema();
                //Cantidad
                void setCantidad(int);
                int getCantidad();
                //Ataque
                void setAtaque(int);
                int getAtaque();
                //Defensa
                void setDefensa(int);
                int getDefensa();

};

#endif 
