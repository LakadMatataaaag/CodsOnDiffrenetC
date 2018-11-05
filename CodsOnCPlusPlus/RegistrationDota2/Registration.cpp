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



void Registration::Print(string _string)
{
	
	
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
	
}

Registration::Registration()
{
}

void Registration::Hello()
{
	Print("Добро пожаловать на турнир по Dota 2. Приступайте к регистрации и заполните поля ниже.\n");
}

Registration::Registration(string name, int position, long numberz, int age, int mmr)
{
	this -> age = age;
	this -> position = position;
	this -> numberz = numberz;
	this -> mmr = mmr;
	Print("Введите свое имя:\n");
	cin >> name;
	Print(name);
	Print(" , введите номер позиции, на которой вы будете играть.\n1. Керри\n2. Мид\n3. Оффлайн\n4. Саппорт 4 позиции\n5. Саппорт 5 позиции\n");
	cin >> position;
	while (position >= 6 || position < 0)
	{
		position = 0;
		Print("Позиция отсутствует в списке\n");
		cin >> position;
	}
	Print(name);
	Print(" , введите номер зачетки\n");
	cin >> numberz;
	while (numberz > 9999999999 || numberz < 1000000000 || numberz < 0)
	{
		numberz = 0;
		Print("Номер зачетки неккоректен!\n");
		cin >> numberz;
	}
	Print(name);
	Print(" , введите свой ммр\n");
	cin >> mmr;
	while (mmr >= 10000 || mmr <= 0)
	{
		mmr = 0;
		Print("Такого ММРа не существует.\n");
		cin >> mmr;
	}
	Print("Полные данные внизу:\n");
	cout << "Имя - " << name << endl << "Номер позиции - " << position << endl << "Номер зачетки - " << numberz << endl << "Текущий ММР - " << mmr << endl;
}


Registration::~Registration()
{
}
