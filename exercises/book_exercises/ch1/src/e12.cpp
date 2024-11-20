#include <iostream>


int main(int argc, char* argv[]){
	int a = 0;
	int b = 0;

	std::cout << "Enter two numbers: \n";
	std::cin >> a;
	std::cin >> b;
	std::cout << "The product of these are: " << a*b << std::endl;

	return 0;
}
