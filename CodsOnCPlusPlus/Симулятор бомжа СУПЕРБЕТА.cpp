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



void checkparameters(int g, int he, int ha)
{
	if (g >= 100)
	{
		g = 100;
	}
	if (g <= 0)
	{
		cout << "Персонаж умер от голода" << endl;
		exit(0);
	}
	if (he >= 100)
	{
		he = 100;
	}
	if (he <= 0)
	{
		cout << "Персонаж умер плохого состояние здоровья" << endl;
		exit(0);
	}
	if (ha >= 100)
	{
		ha = 100;
	}
	if (ha <= 0)
	{
		cout << "Персонаж умер от депрессии" << endl;
		exit(0);
	}
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
	cout << "Симулятор бомжа by Eugene Shevchugov\n";
	int switch2 = 0;
	int switch3 = 0;
	int switch4 = 0;
	int switch5 = 0;
	int health = 50;
	int golod = 50;
	int happy = 50;
	int money = 200;
	int bottles = 0;
	bool quit = true;
	int transport = 0;
	string ts;
	if (transport == 0)
	{
		ts = "На ногах";
	}
	else if (transport == 1)
	{
		ts = "На велике";
	}
	else if (transport == 2)
	{
		ts = "Лада гранта";
	}
	else if (transport == 3)
	{
		ts = "БМВ";
	}
	else if (transport == 4)
	{
		ts = "Вертолет";
	}
	int age = 18;
	while (quit)
	{
		cout << "1.Информация" << endl << "2.Еда и настроение" << endl << "3.Здоровье и спорт" << endl << "4.Бомжатничать и поборы" << endl << "5.Работа" << endl << "6.Учеба" << endl << "7.Недвижимость и транспорт" << endl << "8.Бизнес" << endl << "9.Политика" << endl;
		int choice = 0;
		cin >> choice;
		switch (choice)
		{

		case 1: // НЕДВИЖИМОСТЬ РЕЙТИНГ И СТАТУС И БУТЫЛКИ
		{
			system("cls");
			cout << "Информация:\nВозраст = " << age << "\nТранспорт = " << ts << endl << endl;
			break;
		}
		case 2:
		{
			switch2 = 0;
			system("cls");
			cout << "1.Пожрать на помойке" << endl << "2.Хот-Дог(100р)" << endl << "3.Кафе(500р)" << endl << "4.Закупиться в магазине(3000р)" << endl << "5.В меню" << endl;
			while (switch2 == 0)
			{
				checkparameters(golod, health, happy);
				int choice2 = 0;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
				{

					bottles += 2;
					golod >= 90 ? golod = 100 : golod += 10;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 2:
				{
					if (money >= 100)
					{
						golod >= 80 ? golod = 100 : golod += 20;
						happy >= 95 ? happy = 100 : happy += 5;
						money -= 100;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					}
					else
					{
						cout << "Нету денег!" << endl;
						continue;
					}
					break;
				}
				case 3:
				{
					if (money >= 500)
					{
						golod >= 70 ? golod = 100 : golod += 30;
						health >= 75 ? health = 100 : health += 15;
						happy >= 95 ? happy = 100 : happy += 5;
						money -= 500;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
						break;
					}
					else
					{
						cout << "Нету денег!" << endl;
						continue;
					}
				}
				case 4:
				{
					if (money >= 3000)
					{
						golod >= 60 ? golod = 100 : golod += 40;
						health > 100 ? health = 100 : health -= 10;
						happy >= 90 ? happy = 100 : happy += 10;
						money -= 3000;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
						break;
					}
					else
					{
						cout << "Нету денег!" << endl;

						continue;
					}
				}
				case 5:
					system("cls");
					switch2 = 1;
					break;
				default:
				{
					cout << "Пункта нет в меню" << endl;
					break;
				}
				}
			}
			break;

		}
		case 3:
		{
			switch3 = 0;
			system("cls");
			cout << "1.Таблетки с помойки" << endl << "2.Полечиться у бабки(100p)" << endl << "3.Настоящий доктор(500p)" << endl << "4.Нормальная клиника(3000р)" << endl << endl << "5.Совершить пробежку" << endl << "6.Выход в меню" << endl;
			while (switch3 == 0)
			{
				checkparameters(golod, health, happy);
				int choice3 = 0;
				cin >> choice3;
				switch (choice3)
				{
				case 1:
				{
					health >= 90 ? health = 100 : health += 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					bottles += 2;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 2:
				{
					if (money >= 100)
					{
						money -= 100;
						health >= 80 ? health = 100 : health += 20;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
						break;
					}
					else
					{
						cout << "Нету денег!" << endl;
						continue;
					}
				}
				case 3:
				{
					if (money >= 500)
					{
						money -= 500;
						health >= 70 ? health = 100 : health += 30;
						happy >= 95 ? happy = 100 : happy += 5;
						golod >= 95 ? golod = 100 : golod += 5;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
						break;
					}
					else
					{
						cout << "Нету денег!" << endl;
						continue;
					}
				}
				case 4:
				{
					if (money >= 3000)
					{
						money -= 3000;
						health >= 50 ? health = 100 : health += 50;
						happy >= 75 ? happy = 100 : happy += 15;
						golod >= 75 ? golod = 100 : golod += 15;
						cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
						break;
					}
					else
					{
						cout << "Нету денег!" << endl;
						continue;
					}
				}

				case 5:
				{

					health >= 90 ? health = 100 : health += 10;
					happy >= 90 ? happy = 100 : happy += 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 6:
					system("cls");
					switch3 = 1;
					//switch2 = 1;
					break;
				default:
				{
					cout << "Пункта нет в меню" << endl;
					continue;
				}
				}
			}
			break;
		}
		case 4:
		{
			switch4 = 0;
			system("cls");
			cout << "1.Бомжатничать во дворе\n2.Бомжатничать в подземном переходе\n3.Бомжатничать у магазина\n4.Бомжатничать в центре\n5.Выход в меню\n";
			while (switch4 == 0)
			{
				checkparameters(golod, health, happy);
				int choice4 = 0;
				cin >> choice4;
				switch (choice4)
				{
				case 1:
				{
					bottles += 3;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}

				case 2:
				{
					bottles += 4;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 3:
				{
					bottles += 5;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 4:
				{
					bottles += 6;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 5:
				{
					system("cls");
					switch4 = 1;
					break;
				}
				default:
				{
					cout << "Пункта нет в меню" << endl;
					continue;
				}
				}
			}
			break;
		}
		case 5:
		{
			switch5 = 0;
			system("cls");
			cout << "1.Мести дворы\n2.Мыть машины\n3.Выход в меню\n";
			while (switch5 == 0)
			{
				checkparameters(golod, health, happy);
				int choice5 = 0;
				cin >> choice5;
				switch (choice5)
				{
				case 1:
				{
					money += 300;
					health > 100 ? health = 100 : health -= 5;
					happy > 100 ? happy = 100 : happy -= 5;
					golod > 100 ? golod = 100 : golod -= 5;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 2:
				{
					money += 400;
					health > 100 ? health = 100 : health -= 5;
					happy > 100 ? happy = 100 : happy -= 5;
					golod > 100 ? golod = 100 : golod -= 5;
					cout << "Настроение - " << happy << " Голод - " << golod << " Здоровье - " << health << " Деньги - " << money << endl;
					break;
				}
				case 3:
				{
					system("cls");
					switch5 = 1;
					break;
				}
				default:
				{
					cout << "Пункта нет в меню" << endl;
					continue;
				}
				}
			}
			break;
		}
		case 6:
		{
			system("cls");
			break;
		}
		}
	}


	return 0;
}
