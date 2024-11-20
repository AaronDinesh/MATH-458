#include <cmath>
#include <iostream>


double df(double x);
double f(double x);

double derivative(double (*f)(double), double xi);

int main(int argc, char* argv[]){
	//Enter inital Guess
	double x_prev = 10.0;
	double x_curr = INFINITY;
	double tolerance = 0.0000001;
	int iter = 0;


	while(true){
		x_curr = x_prev - (f(x_prev)/derivative(f,x_prev));
		if(fabs(x_curr-x_prev) <= tolerance) break;
		x_prev = x_curr;
		std::cout << "Iteration " << iter << ": " << x_curr << std::endl;
		iter++;
	}

}


double f(double x){
	return exp(x) + pow(x, 3) - 5;
}

double df(double x){
	return exp(x) + 3*pow(x, 2);
}

double derivative(double (*f)(double), double xi){
	return (f(xi+0.001) - f(xi)) / 0.001; 
}
