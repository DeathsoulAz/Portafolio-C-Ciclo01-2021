#include <iostream>

// Erick Leonardo Cruz Gil CG100320

using namespace std;

int main(){
	int c[5] = {16,25,37,14,95};
	int *p3;
	int *p4;
	p4 = c;
	p3 = &c[0];
	int sam;
	sam = *(p3+3);
	cout << "*p3 = " << *p3 << endl;
	cout << "sam = " << sam << endl;
	cout << "p4 = " << p4 << endl;
	cout << "c = " << c << endl;
	return 0;
}
