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
using namespace std;




void code(const char *str);




void Print(string _string)
{
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
}


int main()
{
	setlocale(LC_ALL, "rus");
	code("Опзбдс");
	cout << endl;

	return 0;
}


void code(const char *str)
{
	while (*str)
	{
		cout << (char)(*str + 1);
		str++;
	}
}
