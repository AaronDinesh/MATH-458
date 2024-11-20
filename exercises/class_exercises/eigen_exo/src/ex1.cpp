#include "Eigen/Dense"
#include <iostream>

int main(){
  	const int MAT_ROWS = 10;
  	const int MAT_COLS = 3;
	Eigen::Array<double, MAT_ROWS, MAT_COLS> A;
  	A.setRandom(MAT_ROWS, MAT_COLS); 

	//std::cout << "Matrix A: " << std::endl << A << std::endl; 
  	Eigen::Vector3d v = Eigen::Vector3d::Ones();
  	Eigen::Array<double, MAT_ROWS, MAT_COLS> cross_prod = A.rowwise().cross(v.transpose());
 	//std::cout << "Matrix-Vec Cross Product: " << std::endl << cross_prod << std::endl;
	Eigen::Array<double, 1, -1> reshaped_product = cross_prod.reshaped().transpose();
	//std::cout << "Reshaped Matrix" << std::endl << reshaped_product << std::endl;
	
	Eigen::Array<double, MAT_ROWS, 12> B;
	B.setRandom();
	int row_idx = 0;
	std::cout << "B: \n" << B << std::endl;
	Eigen::Array<double, MAT_ROWS, 3> mat_vec_results = Eigen::Array<double, MAT_ROWS, 3>::Zero();
	for(auto row : B.rowwise()){
		Eigen::Matrix<double, 3, 3> M = row.head(9).reshaped(3,3).eval();
		Eigen::Vector3d v = row.tail(3).eval();
		mat_vec_results.block<1, 3>(row_idx, 0) = (M*v).transpose();	
		row_idx++;
	}
	std::cout << "MatVecResult: \n" << mat_vec_results << std::endl;	
	return 0;
}
