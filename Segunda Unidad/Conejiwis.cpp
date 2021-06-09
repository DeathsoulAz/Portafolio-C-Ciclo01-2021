#include <iostream>

// Erick Leonardo Cruz Gil CG100320

using namespace std;

int conejos(int n){
	
	if (n<=2){
		return(1);
	} else {
		return conejos(n-1) + conejos(n-2);
	}
}

int main() {
	int num, valor;
	cout << "Ingrese  el numeros de conejos incial: ";
	cin >> valor;
	num = conejos(valor);
	cout << "El numeros de parejas de conejitos resultantes es: " << num << endl;
	return 0;
}
