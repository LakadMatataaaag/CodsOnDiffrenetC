#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include "Windows.h"
#include "conio.h"
#include <clocale>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <string>
#include <cassert>
#include <sstream>
using namespace std;



void Print(string _string)
{
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(3);
		cout << (*s)[i];
	}
}


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int flag = 0;
	Print("Для выхода из приложения нажмите Enter\n");

	int button = 0;
	Print("Игрок номер 1, Бросьте кости\n");
	button = _getch();
	srand(time(0));
	int number1 = 1 + rand() % 12;
	Print("Выпало ");
	cout << number1 << endl;
	Print("Игрок номер два, Бросьте кости\n");
	button = _getch();
	srand(time(0));
	int number2 = 1 + rand() % 12;
	Print("Выпало ");
	cout << number2 << endl;
	if (number1 > number2)
	{
		Print("Игрок номер 1 победил\n");
		exit(0);
	}
	else if (number2 > number1)
	{
		Print("Игрок номер 2 победил\n");
		exit(0);
	}
	else if (number1 == number2 || number2 == number1)
	{
		Print("Ничья\n");
		exit(0);
	}


	return 0;
}
