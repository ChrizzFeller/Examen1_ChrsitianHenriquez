//Clase Familia Noble
#include <string>

#ifndef EPF_H
#define EPF_H

class EPF {

	private:
		string nombre;
		string simbolo;
		string lema;
		int cantidad;
		int ataque;
		int defensa;
		
	public:
		EPF();
		~EPF();
		//Nombre
                void setNombre(string);
                string getNombre();
                //Simbolo
                void setSimbolo(string);
                string getSimbolo();
                //Lema
                void seLema(string);
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
