#include <iostream>
// Erick Leonardo Cruz Gil
using namespace std;

class Circulo{
	double radio;
	public:
		Circulo(double r) : radio(r){}
		double area() {return radio*radio*3.14159265;}
};

class Cilindro{
	Circulo base;
	double altura;
	public:
		Cilindro(double r, double h) : base(r), altura(h){}
		double volumen() {return base.area()*altura;}
};

int main(){
	Cilindro Akali (10,20);
	
	cout << "Volumen de el cilindro: " << Akali.volumen();
	
	return 0;
}
