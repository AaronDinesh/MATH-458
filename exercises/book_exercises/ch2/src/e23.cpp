#include <iostream>


int main(int argc, char* argv[]){
	int sum = 0;
	int current_number = 0;

	std::cout << "Enter a number: ";
	std::cin >> current_number;

	while(current_number != -1){
		if(current_number == -2){
			std::cout << "Resetting sum to 0." << std::endl;
			sum = 0;
			goto enter_new_number;
		}	


		sum += current_number;
		
		if(sum >= 100){
			std::cout << "The sum is too large. Exiting early.\n";
			goto end;
		}


		enter_new_number:
		std::cout << "Current sum: " << sum << std::endl;
		std::cout << "Enter a number: ";
		std::cin >> current_number;
	}
	
	std::cout << "Sum: " << sum <<std::endl;



	end:
	return 0;
}
