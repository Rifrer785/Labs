#include <iostream>

using namespace std;

long double kor(double n, int i)
{
	if (i == n) { return sqrt(n); }
	return sqrt(i + kor(n, i + 1));

}


int main()
{

    double a = 0;
    int i = 1, n = 0;
	cin >> n;
	for  (i = n; i > 0; i--)
	{
		a = sqrt(i + a);
	}
	cout << a << endl;
	cout << kor(n, 1) << endl;
}