#include <iostream>


int main(int argc, char* argv[]){
	
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	std::cout << "a: " << a << " b: " << b <<std::endl;

	*(&a) = *(&b) ^ *(&a);
	*(&b) = *(&a) ^ *(&b);
	*(&a) = *(&b) ^ *(&a);

	std::cout << "a: " << a << " b: " << b <<std::endl;

	return 0;
}
