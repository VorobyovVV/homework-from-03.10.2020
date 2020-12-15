#include <iostream>
#include <cmath>

double fx(double x) {
	return 2 * x - 1; 
}
double derivative(double x) {
	return 2; 
}
typedef double(*fun)(double x);
double fsolve(fun fx, fun derivative, double x0) {
	double x1 = x0 - fx(x0) / derivative(x0);
	while (fabs(x1 - x0) > 0.000001) {
		x0 = x1;
		x1 = x0 - fx(x0) / derivative(x0);
	}
	return x1;
}

int main() {
	std::cout << fsolve(fx, derivative, 10);
	return 0;
}