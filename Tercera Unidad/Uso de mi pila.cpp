#include <iostream>
#include "Pila.h"
// Erick Leonardo Cruz Gil

int main(){
	
	Pila<int> PilaC;
	PilaC.push(10);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(11);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(12);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(13);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(14);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(15);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.pop();
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(16);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(17);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(18);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(19);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	PilaC.push(20);
	cout << "La pila es " << PilaC.pilaComoCadena() << endl;
	
	
	return 0;
}




