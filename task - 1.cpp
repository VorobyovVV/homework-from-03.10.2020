// ConsoleApplication24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


double f(double x=0) {
    return (2*x)-4;
}

int main()
{
	double  a,b;
	std::cin>> a >> b;
	double k=(a+b)/2;
	if(f(a)==0) std::cout<< a;
	if(f(b)==0) std::cout<< b;
	while(f(k)!=0 && a<=b)
	{

		if(f(k)>0) b=k;
		else a=k;
		k=(a+b)/2;
	}
	if(f(k)==0) std::cout<<k ;
	else std::cout<< " ";
	return 0;
}
