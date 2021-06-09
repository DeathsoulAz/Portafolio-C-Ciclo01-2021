#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout << "Ingrese un numero entre 1 y 3: ";
	cin >> num;
	cout << "\n";
	
	switch(num){
		case 1:
			cout << "- Mas vale pajaro en mano que cien volandon. \n";
			break;
		case 2:
			cout << "- Ojos que no ven, corazon que no siente. \n";
			break;
		case 3:
			cout << "- No hay mal que por bien no venga. \n";
			break;
		default:
			cout << "- Por favor, ingresar un numero entre 1 y 3. \n";
	
	}
	
	return 0;
}

