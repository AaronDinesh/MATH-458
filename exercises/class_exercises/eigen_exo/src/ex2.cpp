#include "Eigen/Dense"
#include "Eigen/LU"
#include "Eigen/SparseLU"
#include "Eigen/Sparse"
#include <iostream>


int main(){
  const int MAT_ROWS = 10;
  const int MAT_COLS = MAT_ROWS;

  Eigen::Matrix<double, MAT_ROWS, MAT_COLS> A = Eigen::Matrix<double, MAT_ROWS, MAT_COLS>::Zero();
  Eigen::Matrix<double, MAT_ROWS, 1> b = Eigen::Matrix<double, MAT_ROWS, 1>::Random();

  A.coeffRef(0, 0) = 2;
  A.coeffRef(0, 1) = -1;
  
  for(int i = 1; i < MAT_ROWS-1; i++){
    A.coeffRef(i, i-1) = -1;
    A.coeffRef(i, i) = 2;
    A.coeffRef(i, i+1) = -1;
  }

  A.coeffRef(MAT_ROWS-1, MAT_ROWS-2) = -1;
  A.coeffRef(MAT_ROWS-1, MAT_ROWS-1) = 2;
  auto A_det = A.determinant();

  std::cout << "The det of A is: " << A_det << std::endl;

  if(A_det == 0){
    std::cout << "The matrix A is not invertible since det(A)=0. Exiting." << std::endl;
    return 0;
  }else{
    std::cout << "The matrix is invertible. Solving the system..." << std::endl;
  }
  
  Eigen::Vector<double,MAT_ROWS> x = A.colPivHouseholderQr().solve(b);

  std::cout << "The solution to the system is x = [" << x.transpose() << "]\n";
  double error = ((A*x) - b).squaredNorm();
  std::cout << "The error in the solution is: " << error << std::endl;
  
  std::cout << "Now using sparse matrices..." << std::endl;

  Eigen::SparseMatrix<double> A_sparse(MAT_ROWS, MAT_COLS);

  A_sparse.insert(0, 0) = 2;
  A_sparse.insert(0, 1) = -1;
  
  for(int i = 1; i < MAT_ROWS-1; i++){
    A_sparse.insert(i, i-1) = -1;
    A_sparse.insert(i, i) = 2;
    A_sparse.insert(i, i+1) = -1;
  }

  A_sparse.insert(MAT_ROWS-1, MAT_ROWS-2) = -1;
  A_sparse.insert(MAT_ROWS-1, MAT_ROWS-1) = 2;
  
  A_sparse.makeCompressed();
  Eigen::SparseLU<Eigen::SparseMatrix<double>> sparse_lu_solver;
  sparse_lu_solver.analyzePattern(A_sparse);
  sparse_lu_solver.factorize(A_sparse);

  auto x_sparse_solution = sparse_lu_solver.solve(b);

  std::cout << "The solution to the system is x = [" << x_sparse_solution.transpose() << "]\n";


  return 0;
}
