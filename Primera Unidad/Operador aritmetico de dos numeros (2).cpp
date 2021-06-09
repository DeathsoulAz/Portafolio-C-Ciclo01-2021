#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Primer numero: ";
	cin >> x;
	
	cout << "Segundo numero: ";
	cin >> y;
	
	x += y;
	cout << "Suma: " << x << endl; 
	
	x -= y;
	cout << "Resta: " << x << endl;
	
	x *= y;
	cout << "Multiplicacion: " << x << endl;
	
	x /= y;
	cout << "Division: " << x << endl;
	
	x %= y; 
	cout << "Residuo: " << x << endl;
	
	return 0;
	
}
