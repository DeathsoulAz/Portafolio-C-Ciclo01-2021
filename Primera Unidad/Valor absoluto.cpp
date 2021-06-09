#include <iostream>
using namespace std;

int absoluto(int var){
	if(var <0){
		var = -var;
	}
	return var;
}

double absoluto(double var){
	if (var <0)
		var = -var;
	return var;
}

int main(){
	
	int num1 = -496;
	double numd = -1354.268;
	
	cout << "El valor absoluto de: " << num1 << " es = " << absoluto(num1) << endl;
	cout << "El valor absoluto de: " << numd << " es = " << absoluto(numd) << endl;
	return 0;  
}
