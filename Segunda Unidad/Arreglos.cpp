#include <iostream>
using namespace std;

// Erick Leonardo Cruz Gil CG100320
	
void imprimirArreglo(int numeros[]){
	for (int i = 0; i<5; ++i){
		cout << "numeros[" << i << "] : ";
		cout << numeros[i] << " " << endl;
	}
	cout << endl;
}

int main(){
	
	int numeros[5] = {19,10,8,17,9};
	
	imprimirArreglo(numeros);
	
	numeros[3] = 35;
	
	imprimirArreglo(numeros);
	
	cout << "Ingrese el valor de numeros[4] ";
	cin >> numeros[4];
	
	imprimirArreglo(numeros);
	
	cout << endl;
	for (int n : numeros){
		cout << n << " " << endl;
	}
	
	return 0;
}
