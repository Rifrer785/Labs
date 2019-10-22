#include <stdio.h>
#include <conio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

long double fact(int N)
{
	if (N == 0)
	{
		return 1;
	}
	else
	{
		return N * fact(N - 1);
	}
}
typedef double(*Fun)(double);
double S(double);
double Y(double);
double Z(double);
void Out_Rez(Fun, Fun, Fun, double, double, double);

int main()
{
	double a, b, h;
	cout << "enter a,b,h\n";
	scanf_s("%lf%lf%lf", &a, &b, &h);
	Out_Rez(S, Y, Z, a, b, h);
}
double S(double x)
{
	double s = 0, p = 0;
	for (int k = 0; k <= 10; k++)
	{
		p= cos(k * M_PI / 4) * pow(x, k) / fact(k);
		s += p;
	}
	return s;
}
double Y(double x)
{
	return (exp(x * cos(M_PI / 4)) * cos(x * sin(M_PI / 4)));
}
double Z(double x)
{
	return (fabs(Y(x) - S(x)));
}
void Out_Rez(Fun f, Fun q, Fun l, double a, double b, double h)
{
	for (double x = a; x <= b; x += h)
	{
		printf("x=%8.2lfS(x)=%8.4lfY(x)=%8.4lf|S(x)-Y(x)|=%8.4lf\n", x, f(x), q(x), l(x));
	}
	
}
