#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	char str[200];
	int len = 0, n = 0;
	cin.getline (str,200);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			n++;
		}
		else
		{
			n = 0;
		}
		if (n > len)
		{
			len = n;
		}
	}
	cout <<"\n" << len;
}