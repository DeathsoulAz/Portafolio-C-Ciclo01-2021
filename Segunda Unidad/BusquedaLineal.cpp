#include <iostream>
#include <array>

using namespace std;

// Erick Leonardo Cruz Gil CG100320

int main(){
	
	array<int,5> numeros = {3,5,1,4,2};
	int valorBuscado = 4;
	int indice = -1;
	
	for(int i = 0; i <= numeros.size(); i++){
		if(numeros[i] == valorBuscado){
			indice = i;
			break;
		}
	}
	cout << "Indice del valor " << valorBuscado << " : " << indice << endl;
	return 0;
}
