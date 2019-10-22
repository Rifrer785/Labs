#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	double a, b, x, z, y, f;
	int type;
	cout << "input a, b, z \n";
	scanf_s("%lf%lf%lf", &a, &b, &z);
	cout << "input program code: 1- f(x)=2x, 2- f(x)= x^2, 3- f(x)= x/3 \n";
	cout << M_PI;
	cin >> type;
	while (type != 1 && type != 2 && type != 3)
	{
		cout << "input program code: 1- f(x)=2x, 2- f(x)= x^2, 3- f(x)= x/3 \n";
		cin >> type;
	}
	if (z < 1)
	{
		x = z;
		cout << "x=z" << endl;
	}
	else
	{

		x = pow(z, 3 / 2.);
		cout << "z^(3/2)" << endl ;
	}
	if (type == 1)
	{
		f = 2 * x;
	}
	else
	{
		if (type == 2)
		{
			f = pow(x, 2);
		}
		else
		{
			if (type == 3)
			{
				f = (x / 3);
			}
		}
	}
	y = (-M_PI * f) + (a * pow(cos(pow(x, 3)), 2)) + (b * pow(sin(pow(x, 2)), 3));
	printf("%lf", y);


}