#include "lista.h"
#include <iostream>
// Erick Leonardo Cruz Gil

int main(){
	
	Lista<int> miLista;
	
	miLista.adjuntar(41);
	miLista.adjuntar(52);
	miLista.adjuntar(63);
	miLista.insertar(2, 74);
	miLista.adjuntar(99);
	miLista.insertar(0,30);
	miLista.contiene(50);
	
	cout << miLista.comoCadena() << endl;
	
	Lista<int>miLista2 = miLista;
	
	cout << miLista2.comoCadena() << endl;
	
	return 0;
}
