#include <iostream>
#include <string>
#include <vector>
#include "ED.h"
#include "EGR.h"
#include "EPF.h"
#include "Lannister.h"
#include "Starks.h"
#include "Targaryen.h"

using namespace std;

int menu();

int main() {
	string jefe, emblema, lema, guerrero;
	int lobos, integrantes1;
	cout << "Ingrese el nombre del jefe." <<  "\n";
	cin >> jefe;
	cout << "Ingrese el animal emblema." <<  "\n";
	cin >> emblema;
	cout << "Ingrese el lema" <<  "\n";
	cin >> lema;
	cout << "Ingrese el guerrero mas valioso." <<  "\n";
	cin >> guerrero;
	cout << "Ingrese la cantidad de lobos." <<  "\n";
	cin >> lobos;
	cout << "Ingrese la cantidad de integrantes." <<  "\n";
	cin >> integrantes1;
	vector<EPF*> ejercito1;
	Starks* stark = new Starks(jefe, lobos, emblema, lema, ejercito1, guerrero, integrantes1);
	cout << "La familia Stark fue creada." <<  "\n";

        int dinero, integrantes2, fuerza;
        cout << "Ingrese el nombre del jefe." <<  "\n";
        cin >> jefe;
        cout << "Ingrese el animal emblema." <<  "\n";
        cin >> emblema;
        cout << "Ingrese el lema" <<  "\n";
        cin >> lema;
        cout << "Ingrese la cantidad de dinero." <<  "\n";
        cin >> dinero;
        cout << "Ingrese la cantidad de integrantes." <<  "\n";
        cin >> integrantes2;
	cout << "Ingrese la fuerza de la montaña." <<  "\n";
	cin >> fuerza;
        vector<EGR*> ejercito2;
        Lannister* lannister = new Lannister(jefe, emblema, lema, ejercito2, dinero, fuerza ,integrantes2);
	cout << "La familia Lannister ha sido creada." <<  "\n";

	string reina;
        int dragones, barcos;
        cout << "Ingrese el nombre de la reina." <<  "\n";
        cin >> reina;
        cout << "Ingrese el animal emblema." <<  "\n";
        cin >> emblema;
        cout << "Ingrese el lema" <<  "\n";
        cin >> lema;
        cout << "Ingrese la cantidad de dragones." <<  "\n";
        cin >> dragones;
        cout << "Ingrese la cantidad de barcos." <<  "\n";
        cin >> barcos;
        vector<ED*> ejercito3;
        Targaryen* targaryen = new Targaryen(reina, emblema, lema, dragones, ejercito3, barcos);
	cout << "Familia Targaryen creada!"  <<  "\n";

	int res = 0, resp;
	while (res > 0 || res < 5) {
		resp = menu();
		//Agregar
		if (resp == 1) {
			cout << "Que desea agregar?\n";
			cout << "1) Pequeña familia noble\n";
			cout << "2) Dothraki\n";
			cout << "3) Guardia Real\n";
			int resp3;
			cin >> resp3;
			if (resp3 == 1) {
				string nombre, simbolo, lema2;
				int cantidad, atk, def;
				cout << "Ingrese el nombre de la familia." <<  "\n";
        			cin >> nombre;
        			cout << "Ingrese el nombre del simbolo." <<  "\n";
        			cin >> simbolo;
       				cout << "Ingrese el lema" <<  "\n";
        			cin >> lema2;
        			cout << "Ingrese la cantidad de personas." <<  "\n";
        			cin >> cantidad;
        			cout << "Ingrese el ataque." <<  "\n";
	        		cin >> atk;
				cout << "Ingrese la defensa." <<  "\n";
                                cin >> def;
				EPF* familia = new EPF(nombre, simbolo, lema, cantidad, atk, def);
 				cout << "Familia creada!" << endl;
				Starks::setEjercito1(familia);
			} else if (resp3 == 2) {
				string nombre2, tipo;
                                int edad, atk2, def2;
                                cout << "Ingrese el nombre del soldado." <<  "\n";
                                cin >> nombre2;
                                cout << "Ingrese el tipo de soldado." <<  "\n";
                                cin >> tipo;
                                cout << "Ingrese la edad del soldado." <<  "\n";
                                cin >> edad;
                                cout << "Ingrese el ataque." <<  "\n";
                                cin >> atk2;
                                cout << "Ingrese la defensa." <<  "\n";
                                cin >> def2;
                                EGR* soldado = new EGR(nombre2, tipo, edad, atk2, def2);
                                cout << "Soldado creada!" << endl;
                                Lannister::setEjercito2(soldado);
			} else if (resp3 == 3) {
				string nombre2, jefeB, caballo, color;
                                int atk3, def3;
                                cout << "Ingrese el nombre del dothraki." <<  "\n";
                                cin >> nombre2;
                                cout << "Ingrese el nombre del jefe." <<  "\n";
                                cin >> jefeB;
                                cout << "Ingrese el nombre del caballo" <<  "\n";
                                cin >> caballo;
                                cout << "Ingrese el color de su cabello." <<  "\n";
                                cin >> color;
                                cout << "Ingrese el ataque." <<  "\n";
                                cin >> atk3;
                                cout << "Ingrese la defensa." <<  "\n";
                                cin >> def3;
                                ED* guerrero = new ED(nombre2, jefeB, caballo, color, atk3, def3);
                                cout << "Dothraki creado!" << endl;
                                Targaruen::setEjercito3(guerrero);
			}
		//Listar
		} else if (resp == 2) {
		
		//Eliminar
		} else if (resp == 3) {
		
		//Simular
		} else if (resp == 4) {

		}
	}
	return 0;
}

int menu() {
        cout << "-------Menu-------\n";
        cout << "1) Agregar\n";
        cout << "2) Listar\n";
        cout << "3) Eliminar\n";
	cout << "4) Simular\n";
	cout << "5) Salir\n";
        int resp;
        cin >> resp;
}
