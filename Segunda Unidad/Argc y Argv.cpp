#include <iostream>

// Erick Leonardo Cruz Gil CG100320

int main(int argc, char** argv){
	
	std::cout << "Tengo " << argc << " argumentos: " << std::endl;
	for(int i = 0; i < argc; i++){
		std::cout << argv[i] << std::endl;
	}
	return 0; 
}
