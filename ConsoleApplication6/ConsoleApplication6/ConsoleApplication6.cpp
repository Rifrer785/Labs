#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	long Y, X, k;
	cout << "Array Y:\t";
	cin >> Y;
	cout << sizeof(Y);
	cout << "\nArray X:\t";
	cin >> X;
	cout << endl;
	int* B = new int[X];
	int** arr = new int* [Y];
		for (int i = 0; i < Y; i++)
		{
			arr[i] = new int[X];
		}
		for ( int a = 0; a < Y; a++)
		{
			for (int b = 0; b < X; b++)
			{
				arr[a][b] = rand() % 2 + 2;
				printf_s("%3d", arr[a][b]);
			}
			cout << endl;
		}
		cout << "\nK:\t";
		cin >> k;
		cout << "\nB1:\n\n";
		for (int b = 0; b < Y; b++)
		{
			B[b] = arr[k - 1][b];
			printf_s("%3d", B[b]);
		}
		int q = 1, type = 0;
		cout << "\n\nChecking...\n";
		for (int b = 0; b < (X/2); b++)
		{
			printf_s("\n%4d = %d", arr[k - 1][b], arr[k - 1][X - q]);
			if (arr[k - 1][b] != arr[k - 1][X - q])
			{
				cout << "-false";
				type = 0;
				break;
			}
			else
			{
				cout << "-true";
				type = 1;
			}
				q++;
		}
		if (type == 1)
		{
			B[k - 1] = 1;
		}
		else
		{
			B[k - 1] = 0;
		}
		cout << "\n\nB2:\n\n";
		for (int b = 0; b < Y; b++)
		{
			printf_s("%3d", B[b]);
		}
}
