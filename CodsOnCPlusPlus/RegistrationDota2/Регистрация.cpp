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
void reverse(char *s)
{
	if (*s)
		reverse(s + 1);
	else
		return;
	cout << *s;
}








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
	string name;
	int age = 0;
	long numberz = 0;
	int mmr = 0;
	int position = 0;
	Registration test;
	test.Hello();
	Registration(name, position, numberz, age, mmr);
	

	return 0;
}






