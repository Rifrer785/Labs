#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <random>
#include <ctime>


using namespace std;
int main()
{

	srand(time(0));
	int n, sum = 0, tip;
	cout << "Vvedite dlinu massiva\n";
	cin >> n;
	int* a = new int[n];
	cout << "viberite sposob vvoda\n" << "1- sluchayniy\n" << "2- ruchnoi\n";
	cin >> tip;
	while (tip != 1 && tip != 2)
	{
		cout << "viberite sposob vvoda\n" << "1- sluchayniy\n" << "2- ruchnoi\n";
		cin >> tip;
	}
	if (tip == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << (a[i] = rand() % 10 - 5) << " ";
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	int k = n - 1;
	while (a[k] < 0)
	{
		k--;
	}
	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}
	cout << "\nSum=" << sum;


}

