#include <iostream>
#include <iomanip>

// Erick Leonardo Cruz Gil CG100320

int main(int argc, const char * argv[]){
	
	using namespace std;
	
	int numeros[10];
	
	for(int i = 0; i < 10; i++){
		numeros[i] = 10 * (i+1);
	}
	
	cout << "Indice\tValor\n------\t-----\n";
	for(int i = 0; i < 10; i++){
		cout << setw(6) << i << "\t" << setw(5) << numeros[i] << endl;
	}
	return 0;
}

