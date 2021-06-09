#include <iostream>
using namespace std;

// Erick Leonardo Cruz Gil CG100320

int main(){
	
	int test[3][2]= {{2,-5},
	                 {4, 0},
	                 {9, 1}};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << "test[" << i << "][" << j << "J = " << test[i][j] << endl;
		}
	}
	return 0;
}
