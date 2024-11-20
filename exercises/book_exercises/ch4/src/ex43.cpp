#include <iostream>




int main(int argc, char* argv[]){
	const int MATRIX_SIZE = 3;

	double* x = new double[MATRIX_SIZE];
	double* y = new	double[MATRIX_SIZE];

	for(int i=0; i<MATRIX_SIZE; i++){
		x[i] = 1;
		y[i] = 1;

	}

	delete[] x;
	delete[] y;

	return 0;
}
