#include <iostream>
#include <stack>
using namespace std;
// Erick Leonardo Cruz Gil
void imprimir(stack <double> mystack){
	stack <double> segundaPila = mystack;
	cout << "_TOP_" << endl;
	while (!segundaPila.empty()){
		cout << "|" << segundaPila.top() << "|" << endl;
		segundaPila.pop();
	}
	cout << "_BOT_" << endl << endl;
}

int main(){
	
	stack <double> mystack;
	double valor; 
	
	mystack.push(1.2);
	imprimir(mystack);
	mystack.push(25);
	imprimir(mystack);
	mystack.push(78);
	imprimir(mystack);
	mystack.push(13);
	imprimir(mystack);
	mystack.push(15.4);
	imprimir(mystack);
	mystack.push(98.5);
	imprimir(mystack);
	mystack.push(85);
	imprimir(mystack);
	mystack.push(1.3);
	imprimir(mystack);
	mystack.push(24);
	imprimir(mystack);
	mystack.push(3.25);
	imprimir(mystack);
	
	cout << "Tamanio de cola " << mystack.size() << endl;
	
	cout << "*** Inicia proceso de extracción: *** " << endl;
	
	while(!mystack.empty()){
		imprimir(mystack);
		mystack.pop();
	}
	return 0;
}
