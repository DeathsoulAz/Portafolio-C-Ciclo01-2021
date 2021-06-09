#include <iostream>
#include "Cola.h"
// Erick Leonardo Cruz Gil
int main(){
	
	Cola<int> ColaC;
	ColaC.enqueue(10);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(11);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(12);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(13);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(14);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(15);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.dequeue();
	cout << "La cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(16);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(17);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(18);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(19);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.enqueue(20);
	cout << "La Cola es " << ColaC.colaComoCadena() << endl;
	ColaC.estaColaVacia();
	
	return 0;
}
