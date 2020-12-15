#include <iostream>
#include <stdarg.h>

double average(double x, ...) {
	va_list args;
	va_start(args, x);
	double  s = x, k = 0;
	int n = 0;
	while (s != -1.0) {
		k += s;
		++n;
		s = va_arg(args, double);
	}
	va_end(args);
	k /= n;
	return k;
}
int even_count(int N, int x, ...) {
	va_list args;
	va_start(args, x);
	int s = x, n = 0;
	while (N--) {
		if (s % 2 == 0) {
			++n;
		}
		s = va_arg(args, int);
	}
	va_end(args);
	return n;
}
int main()
{
	std::cout << average(2.0, 4.0, -1.0) << std::endl;
	std::cout << average( 4.0, 5.0, 1.0, 3.0, 0.0, 6.0, 3.0, -1.0 ) << std::endl;
	std::cout << even_count(7.0, 1.0, 2.0, 3.0, 4.0, 3.0, 2.0, 1.0 ) << std::endl;

}