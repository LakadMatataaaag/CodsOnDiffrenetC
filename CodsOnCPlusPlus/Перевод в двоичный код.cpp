#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include "Windows.h"
#include "conio.h"
#include <locale>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <string>
#include <cassert>
#include <sstream>
#include "Registration.h"
using namespace std;









void Print(string _string)
{
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
}

void disp_binart(unsigned u)
{
	register int t;
	for (t = 128; t > 0; t /= 2)
	{
		if (u & t)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
	cout << "\n";
}




int main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int test = 0;
	cin >> test;
	disp_binart(test);


	return 0;




}
