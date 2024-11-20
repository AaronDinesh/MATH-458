#include <iostream>


void print_mat(double (*arr)[3], int width, int height);


int main(int argc, char* argv[]){
	
	double u[3] = {1.0, 2.0, 3.0};
	
	double v[3] = {6.0, 5.0, 4.0};
	
	double A[3][3] = {{1.0, 5.0, 0.0},
										{7.0, 1.0, 2.0},
										{0.0, 0.0, 1.0}};

	double B[3][3] = {{-2.0, 0.0, 1.0},
										{ 1.0, 0.0, 0.0},
										{ 4.0, 1.0, 0.0}};

	double w[3];

	for(int i=0; i<3; i++){
		w[i] = u[i] - 3.0*v[i];
	}
	

	double x[3];
	double y[3];
	double z[3];
	double C[3][3];
	double D[3][3];

	
	for(int i=0; i<3; i++){
		x[i] = u[i] - v[i];
		y[i] = A[i][0] * u[0] + A[i][1]*u[1] + A[i][2]*u[2];
		z[i] = y[i] - v[i];
		
		C[i][0] = 4*A[i][0] - 3*B[i][0];
		C[i][1] = 4*A[i][1] - 3*B[i][1];
		C[i][2] = 4*A[i][2] - 3*B[i][2];
	}
	

	
	print_mat(C, 3, 3);
	return 0;
}


void print_mat(double(* arr)[3], int width, int height){
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			std::cout << "[" << arr[i][j] << "]";
		}
		std::cout << std::endl;
	}
}



