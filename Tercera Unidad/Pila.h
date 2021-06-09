#ifndef pila_h
#define pila_h
#include "lista.h"


template<typename TIPODATO>
class Pila : private Lista<TIPODATO>{
	public:
		Pila();
		void push(TIPODATO item);
		TIPODATO pop();
		bool estaPilaVacia();
		string pilaComoCadena();
		TIPODATO obtenerV(int indice);
};

template<typename TIPODATO>
Pila<TIPODATO>::Pila(){
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
void Pila<TIPODATO>::push(TIPODATO item){
	this->insertar(0, item);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::obtenerV(int indice){
	this->obtener(indice);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop(){
	this->remover(0);
}

template<typename TIPODATO>
bool Pila<TIPODATO>::estaPilaVacia(){
	return this->estaVacia();
}
template<typename TIPODATO>
string Pila<TIPODATO>::pilaComoCadena(){
	return this->comoCadena();
}

#endif
