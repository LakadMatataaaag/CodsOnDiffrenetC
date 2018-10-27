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





void Print(string _string)
{
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
}

float sum(float a, float b)
{
	return a + b;
}

float dif(float a, float b)
{
	return a - b;
}

float du(float a, float b)
{
	return a * b;
}

float div(float a, float b)
{
	return a / b;
}

float ex(float a, float b)
{
	if (b == 0)
	{
		return 1;
	}
	else
	{
		return a * ex(a, b - 1);
	}
}
float expo(float a, float b)
{
	return 1 / ex(a, -b);
}

float mod(float a)
{
	if (a >= 0)
	{
		return a;
	}
	else
	{
		return -a;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "\t\t\t\t\t\t\t";
	Print("Калькулятор\n");
	cout << "\t\t\t\t\t\t\t";
	Print("Загрузка данных....\n");
	cout << "\t\t\t\t\t\t\t";
	Sleep(2000);
	Print("Успешно. Действия на выбор\n");
	cout << "\t\t\t\t\t\t\t";
	Print("1.Умножение\n");
	cout << "\t\t\t\t\t\t\t";
	Print("2.Деление\n");
	cout << "\t\t\t\t\t\t\t";
	Print("3.Сложение\n");
	cout << "\t\t\t\t\t\t\t";
	Print("4.Вычитание\n");
	cout << "\t\t\t\t\t\t\t";
	Print("5.Возведение в степень\n");
	cout << "\t\t\t\t\t\t\t";
	Print("6.Модуль числа\n");
	cout << "\t\t\t\t\t\t\t";
	Print("7.Возведение в отрицательную степень\n");
	cout << "\t\t\t\t\t\t\t";
	Print("8.Выйти из программы\n");
	float ac = 0;
	float bb = 0;
	bool choice = true;


		int choiced = 0;
;

		while (choiced == 0)
		{
			cout << "\t\t\t\t\t\t\t";
			Print("Выберите действие:\n");
			int ace = 0;
			cout << "\t\t\t\t\t\t\t";
			cin >> ace;

			switch (ace)
			{
			case 1:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = du(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 2:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = div(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 3:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = sum(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 4:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = dif(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 5:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = ex(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 6:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите число:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = mod(ac);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 7:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Введите числа:\n");
				cout << "\t\t\t\t\t\t\t";
				cin >> ac;
				cout << "\t\t\t\t\t\t\t";
				cin >> bb;
				cout << "\t\t\t\t\t\t\t";
				Print("Результат равен - ");
				float rez = expo(ac, bb);
				cout << rez << endl;
				choiced = 0;
				break;
			}
			case 8:
			{
				choiced = 1;
				break;
				cout << "\t\t\t\t\t\t\t";
			}
			default:
			{
				cout << "\t\t\t\t\t\t\t";
				Print("Пункта нет в меню\n");
				break;
			}
			}




		}


	return 0;
}
