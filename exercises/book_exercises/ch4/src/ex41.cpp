#include <iostream>


int main(int argc, char* argv[]){
	int p = 5;
	int* p_j = &p;
	*p_j *= 5;
	int* p_k = new int;
	*p_k = p;
	*p_j = 0;

	std::cout << "p: " << p << " *p_j: " << *p_j << " *p_k: " << *p_k << std::endl;
	
	return 0;
}
