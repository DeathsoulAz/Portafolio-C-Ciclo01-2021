#ifndef cola_h
#define cola_h
#include "lista.h"
// Erick Leonardo Cruz Gil

template<typename TIPODATO>
class Cola : private Lista<TIPODATO>{
	public:
		Cola();
		enqueue(TIPODATO item);
		TIPODATO dequeue();
		bool estaColaVacia();
		string colaComoCadena();
		TIPODATO obtenerB(int indice);
};

template<typename TIPODATO>
Cola<TIPODATO>::Cola(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Cola<TIPODATO>::enqueue(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::dequeue(){
	this->remover(0);
}

template<typename TIPODATO>
TIPODATO Cola<TIPODATO>::obtenerB(int indice){
	this->obtener(indice);
}

template<typename TIPODATO>
bool Cola<TIPODATO>::estaColaVacia(){
	return this->estaVacia();
}

template<typename TIPODATO>
string Cola<TIPODATO>::colaComoCadena(){
	return this->comoCadena();
}

#endif
