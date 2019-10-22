#include <string.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int n, i, l=0, r = 0;
	cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << (a[i] = rand() % 2);
		r+=1;
		if (r > l)
		{
			l = r;
		}
		if (rand() % 6 > 4)
		{
			cout << " ";
			r = 0;
		}
		
	}
	cout << "\n"<<l;
}
