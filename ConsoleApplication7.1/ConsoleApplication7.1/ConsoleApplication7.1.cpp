#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	string s;
	int len=0, a=0;
	getline(cin, s);
	for (int i=0; i < (s.length()); i++)
	{
		a++;
		if (s[i] == ' ')
		{
			a=0;
		}
		if (a>len)
		{
			len = a;
		}
	}
	cout << len;
}