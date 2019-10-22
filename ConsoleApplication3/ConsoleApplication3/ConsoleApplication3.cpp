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


int main()
{
	double a, b, h, n, x, s, y, p, z;
	int k;
	cout << "enter a,b,h,n\n";
	scanf_s("%lf%lf%lf%lf", &a, &b, &h, &n);
	for (x = a; x <= b; x += h)
	{
		y = exp(x * cos(M_PI / 4)) * cos(x * sin(M_PI / 4));
		s = p = 0;
		for (k = 0; k <= n; k++)
		{
			p = cos(k * M_PI / 4) * pow(x, k) / fact(k);
			s += p;
		}
		z = fabs(y - s);
		printf("\nx=%-10.2lf S(x)=%-10.5lf Y(x)=%-10.5lf |Y(x)-S(x)|=%-10.5lf", x, s, y, z);
	}
}