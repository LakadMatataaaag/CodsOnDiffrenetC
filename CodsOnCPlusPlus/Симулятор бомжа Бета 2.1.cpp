/*
Добавлены бутылки. При каждом действии,связынным с бомжатничеством вы будете подбирать рандомное количество бутылок.
Бутылки можно сдавать. При сдаче одной бутылки вы получите 4 рубля. (Пункт в меню = 10)
*/


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

void checkobr(int obr, int jobd)
{
	if (obr == 0)
	{
		jobd = 0;
	}
	else if (obr == 1)
	{
		jobd = 1;
	}
	else if (obr == 2)
	{
		jobd = 2;
	}
	else if (obr == 3)
	{
		jobd = 3;
	}
	else if (obr == 4)
	{
		jobd = 4;
	}
	else if (obr == 5)
	{
		jobd = 5;
	}
	if (obr >= jobd)
	{
		jobd = obr;
	}
	else
	{
		obr = obr;
	}
}

void checkcar(int ac)
{
	if (ac == 1)
	{
		cout << "Велик" << endl;
	}
	else if (ac == 2)
	{
		cout << "ВАЗ" << endl;
	}
	else if (ac == 3)
	{
		cout << "БМВ" << endl;
	}
	else if (ac == 4)
	{
		cout << "Вертолет" << endl;
	}
	else
	{
		cout << "На ногах" << endl;
	}
}

void checkhouse(int bc)
{
	if (bc == 1)
	{
		cout << "Палатка" << endl;
	}
	else if (bc == 2)
	{
		cout << "Комната" << endl;
	}
	else if (bc == 3)
	{
		cout << "Квартира" << endl;
	}
	else if (bc == 4)
	{
		cout << "Офис" << endl;
	}
	else
	{
		cout << "Коробка" << endl;
	}
}

void checksocialstatus(int cc)
{
	if (cc == 1)
	{
		cout << "Депутат" << endl;
	}
	else if (cc == 2)
	{
		cout << "Министр обороны" << endl;
	}
	else if (cc == 3)
	{
		cout << "Министр финансов" << endl;
	}
	else if (cc == 4)
	{
		cout << "Президент" << endl;
	}
	else
	{
		cout << "Бомж" << endl;
	}
}


void translate(int *a, long *b)
{
	*b += (*a) * 4;
	*a = 0;
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

void generation(int *a)
{
	srand(time(0));
	*a += 1 + rand() % 10;
}


int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Симулятор бомжа by Eugene Shevchugov\n";
	int vision = 0;
	int trans = 0;
	int housestatus = 0;
	int socialstatus = 0;
	int jobdostup = 0;
	int dostup = 0;
	int education = 0;
	int switch2 = 0;
	int switch3 = 0;
	int switch4 = 0;
	int switch5 = 0;
	int switch6 = 0;
	int switch7 = 0;
	int switch8 = 0;
	int switch10 = 0;
	int health = 50;
	int golod = 50;
	int happy = 50;
	long money = 20000000;
	int bottles = 0;
	bool quit = true;
	int age = 18;
	while (quit)
	{
		cout << "1.Информация" << endl << "2.Еда и настроение" << endl << "3.Здоровье и спорт" << endl << "4.Бомжатничать и поборы" << endl << "5.Работа" << endl << "6.Учеба" << endl << "7.Недвижимость и транспорт" << endl << "8.Политика" << endl << "9.Выйти" << endl << "10.Перевод денег" << endl;
		int choice = 0;
		cin >> choice;
		switch (choice)
		{

		case 1:
		{
			system("cls");
			cout << "Информация:\nВозраст = " << age << endl;
			cout << "Транспорт = ";
			checkcar(trans);
			cout << "Недвижимость = ";
			checkhouse(housestatus);
			cout << "Статус = ";
			checksocialstatus(socialstatus);
			cout << "Бутылки = " << bottles << endl << endl;


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

					generation(&bottles);
					golod >= 90 ? golod = 100 : golod += 10;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 2:
				{
					if (money >= 100)
					{
						golod >= 80 ? golod = 100 : golod += 20;
						happy >= 95 ? happy = 100 : happy += 5;
						money -= 100;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
					generation(&bottles);
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
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
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 6:
					system("cls");
					switch3 = 1;
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
			cout << "1.Бомжатничать во дворе\n2.Бомжатничать в подземном переходе\n3.Бомжатничать у магазина\n4.Бомжатничать в центре\n\n5.Искать монеты на улице\n6.Наехать на собутыльника\n7.Таксовать на авто\n8.Ограбить прохожего\n9.Ограбить банк\n10.Выйти в меню\n";
			while (switch4 == 0)
			{
				checkparameters(golod, health, happy);
				int choice4 = 0;
				cin >> choice4;
				switch (choice4)
				{
				case 1:
				{
					generation(&bottles);
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}

				case 2:
				{
					generation(&bottles);
					health > 100 ? health = 100 : health -= 15;
					happy > 100 ? happy = 100 : happy -= 15;
					golod > 100 ? golod = 100 : golod -= 15;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 3:
				{
					generation(&bottles);
					health > 100 ? health = 100 : health -= 15;
					happy > 100 ? happy = 100 : happy -= 15;
					golod > 100 ? golod = 100 : golod -= 15;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 4:
				{
					generation(&bottles);
					health > 100 ? health = 100 : health -= 15;
					happy > 100 ? happy = 100 : happy -= 15;
					golod > 100 ? golod = 100 : golod -= 15;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 5:
				{
					generation(&bottles);
					money += 30;
					health > 100 ? health = 100 : health -= 10;
					happy > 100 ? happy = 100 : happy -= 10;
					golod > 100 ? golod = 100 : golod -= 10;
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 6:
				{
					if (trans == 1)
					{
						money += 40;
						generation(&bottles);
						health > 100 ? health = 100 : health -= 10;
						happy > 100 ? happy = 100 : happy -= 10;
						golod > 100 ? golod = 100 : golod -= 10;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Наехать на собутыльника можно только на велике!\n";
						continue;
					}
				}
				case 7:
				{
					if (trans >= 2)
					{
						money += 1000;
						health > 100 ? health = 100 : health -= 20;
						happy > 100 ? happy = 100 : happy -= 15;
						golod > 100 ? golod = 100 : golod -= 10;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Таксовать можно на Вазе и выше!\n";
						continue;
					}
				}
				case 8:
				{
					if (trans >= 3)
					{
						money += 6000;
						health > 100 ? health = 100 : health -= 20;
						happy > 100 ? happy = 100 : happy += 10;
						golod > 100 ? golod = 100 : golod -= 10;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Ограбить прохожего можно только на крутой тачке!\n";
						continue;
					}
				}
				case 9:
				{
					if (trans == 4)
					{
						money += 100000;
						health > 100 ? health = 100 : health -= 30;
						happy > 100 ? happy = 100 : happy += 15;
						golod > 100 ? golod = 100 : golod -= 20;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Ограбить банк можно только на вертолете!\n";
						continue;
					}
				}
				case 10:
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
			cout << "1.Мести дворы\n2.Мыть машины\n3.Работать сантехником\n4.Работать на заводе\n5.Работать в офисе\n6.Управлять компанией\n7.Заседать в правительстве\n8.Торговать оружием\n9.Распределять бюджет\n10.Управлять страной\n11.Выйти в меню\n";
			while (switch5 == 0)
			{
				checkparameters(golod, health, happy);
				int choice5 = 0;
				cin >> choice5;
				switch (choice5)
				{
				case 1:
				{
					dostup = 1;
					checkobr(education, jobdostup);
					if (education >= dostup)
					{
						money += 300;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не выучили таблицу умножения!\n";
						continue;
					}

				}
				case 2:
				{
					dostup = 1;
					checkobr(education, jobdostup);
					if (education >= dostup)
					{
						money += 400;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не выучили таблицу умножения!\n";
						continue;
					}

				}
				case 3:
				{
					dostup = 2;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 1)
					{
						money += 1500;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили школу или у вас нет палатки!\n";
						continue;
					}
				}
				case 4:
				{
					dostup = 2;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 1)
					{
						money += 3000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили школу или у вас нет палатки!\n";
						continue;
					}
				}
				case 5:
				{
					dostup = 3;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 2)
					{
						money += 7000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ПТУ или вы не снимаете квартиру!\n";
						continue;
					}
				}
				case 6:
				{
					dostup = 4;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 3)
					{
						money += 10000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ВУЗ или у вас нет квартиры!\n";
						continue;
					}
				}
				case 7:
				{
					dostup = 5;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 3 && socialstatus == 1)
					{
						money += 50000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ВУЗ за границей, у вас нет своего офиса или вы не депутат!\n";
						continue;
					}
				}
				case 8:
				{
					dostup = 5;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 3 && socialstatus == 2)
					{
						money += 70000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ВУЗ за границей, у вас нет своего офиса или вы не министр обороны!\n";
						continue;
					}
				}
				case 9:
				{
					dostup = 5;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 3 && socialstatus == 3)
					{
						money += 100000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ВУЗ за границей, у вас нет своего офиса или вы не министр финансов!\n";
						continue;
					}
				}
				case 10:
				{
					dostup = 5;
					checkobr(education, jobdostup);
					if (education >= dostup && housestatus >= 4 && socialstatus == 4)
					{
						money += 150000;
						health > 100 ? health = 100 : health -= 5;
						happy > 100 ? happy = 100 : happy -= 5;
						golod > 100 ? golod = 100 : golod -= 5;
						cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
						break;
					}
					else
					{
						cout << "Вы не закончили ВУЗ за границей, у вас нет своего офиса или вы не президент!\n";
						continue;
					}
				}
				case 11:
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
			switch6 = 0;
			system("cls");
			cout << "1.Выучить таблицу умножения(150р)\n2.Окончить школу(5000р)\n3.Окончить ПТУ(25000p)\n4.Окончить ВУЗ(200000р)\n5.Учиться за границей(1 млн Р)\n6.Выйти в меню\n";
			while (switch6 == 0)
			{
				checkparameters(golod, health, happy);
				int choice6 = 0;
				cin >> choice6;
				switch (choice6)
				{
				case 1:
				{


					if (money >= 150 && education < 1)
					{
						cout << "Вы выучили таблицу умножения!" << endl;
						education = 1;
						break;
					}
					else if (money < 150 || education == 1)
					{
						cout << "Нету денег или образование уже получено!" << endl;
						continue;
					}
					else if (education > 1)
					{
						cout << "У вас уже есть более крутое образование!" << endl;
						continue;
					}
				}
				case 2:
				{
					if (money >= 5000 && education < 2)
					{
						education = 2;
						cout << "Вы окончили школу!" << endl;
						break;
					}
					else if (money < 5000 || education == 2)
					{
						cout << "Нету денег или образование уже получено!" << endl;
						continue;
					}
					else if (education > 2)
					{
						cout << "У вас уже есть более крутое образование!" << endl;
						continue;
					}
				}
				case 3:
				{
					if (money >= 25000 && education < 3)
					{
						education = 3;
						cout << "Вы окончили ПТУ!" << endl;
						break;
					}
					else if (money < 25000 || education == 3)
					{
						cout << "Нету денег или образование уже получено!" << endl;
						continue;
					}
					else if (education > 3)
					{
						cout << "У вас уже есть более крутое образование!" << endl;
						continue;
					}
				}
				case 4:
				{
					if (money >= 200000 && education < 4)
					{
						education = 4;
						cout << "Вы окончили ВУЗ" << endl;
						break;
					}
					else if (money < 200000 || education == 4)
					{
						cout << "Нету денег или образование уже получено!" << endl;
						continue;
					}
					else if (education > 4)
					{
						cout << "У вас уже есть более крутое образование!" << endl;
						continue;
					}
				}
				case 5:
				{
					if (money >= 1000000 && education < 5)
					{
						education = 5;
						cout << "Вы окончили ВУЗ за границей" << endl;
						break;
					}
					else if (money < 1000000 || education == 5)
					{
						cout << "Нету денег или образование уже получено!" << endl;
						continue;
					}
					else if (education > 5)
					{
						cout << "У вас уже есть более крутое образование!" << endl;
						continue;
					}
				}
				case 6:
				{
					system("cls");
					switch6 = 1;
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
		case 7:
		{
			switch7 = 0;
			system("cls");
			cout << "1.Купить палатку(500р)\n2.Снять комнату(15000)\n3.Квартира(1 млн Р)\n4.Офис(2 млн Р)\n\n5.Велосипед(10000р)\n6.ВАЗ(20000р)\n7.БМВ(300000р)\n8.Вертолет(3 млн Р)\n9.Выйти в меню\n";
			while (switch7 == 0)
			{
				checkparameters(golod, health, happy);
				int choice7 = 0;
				cin >> choice7;
				switch (choice7)
				{
				case 1:
				{
					if (money >= 500 && housestatus < 1)
					{
						housestatus = 1;
						cout << "Вы успешно купили палатку!\n";
						break;
					}
					else if (money < 500 || housestatus == 1)
					{
						cout << "Нет денег или у вас уже есть палатка!\n";
						continue;
					}
					else if (housestatus > 1)
					{
						cout << "Вы уже владеете более крутым жильем!\n";
						continue;
					}
				}
				case 2:
				{
					if (money >= 15000 && housestatus < 2)
					{
						housestatus = 2;
						cout << "Вы успешно сняли комнату!\n";
						break;
					}
					else if (money < 15000 || housestatus == 2)
					{
						cout << "Нет денег или вы уже снимаете комнату!\n";
						continue;
					}
					else if (housestatus > 2)
					{
						cout << "Вы уже владеете более крутым жильем!\n";
						continue;
					}
				}
				case 3:
				{
					if (money >= 1000000 && housestatus < 3)
					{
						housestatus = 3;
						cout << "Вы успешно купили квартиру!\n";
						break;
					}
					else if (money < 1000000 || housestatus == 3)
					{
						cout << "Нет денег или у вас уже есть квартира!\n";
						continue;
					}
					else if (housestatus > 3)
					{
						cout << "Вы уже владеете более крутым жильем!\n";
						continue;
					}
				}
				case 4:
				{
					if (money >= 2000000 && housestatus < 4)
					{
						housestatus = 4;
						cout << "Вы успешно купили офис!\n";
						break;
					}
					else if (money < 2000000 || housestatus == 4)
					{
						cout << "Нет денег или у вас уже есть офис!\n";
						continue;
					}
					else if (housestatus > 4)
					{
						cout << "Вы уже владеете более крутым жильем!\n";
						continue;
					}
				}
				case 5:
				{
					if (money >= 10000 && trans < 1)
					{
						trans = 1;
						cout << "Вы успешно купили велосипед\n";
						break;
					}
					else if (money < 10000 || trans == 1)
					{
						cout << "Нет денег или вы уже владеете велосипедом!\n";
						continue;
					}
					else if (trans > 1)
					{
						cout << "Вы купили более крутой транспорт!\n";
						continue;
					}
				}
				case 6:
				{
					if (money >= 20000 && trans < 2)
					{
						trans = 2;
						cout << "Вы успешно купили ВАЗ\n";
						break;
					}
					else if (money < 20000 || trans == 2)
					{
						cout << "Нет денег или вы уже владеете ВАЗом!\n";
						continue;
					}
					else if (trans > 2)
					{
						cout << "Вы купили более крутой транспорт!\n";
						continue;
					}
				}
				case 7:
				{
					if (money >= 300000 && trans < 3)
					{
						trans = 3;
						cout << "Вы успешно купили БМВ\n";
						break;
					}
					else if (money < 300000 || trans == 3)
					{
						cout << "Нет денег или вы уже владеете БМВ!\n";
						continue;
					}
					else if (trans > 3)
					{
						cout << "Вы купили более крутой транспорт!\n";
						continue;
					}
				}
				case 8:
				{
					if (money >= 3000000 && trans < 4)
					{
						trans = 4;
						cout << "Вы успешно купили вертолет\n";
						break;
					}
					else if (money < 3000000 || trans == 4)
					{
						cout << "Нет денег или вы уже владеете вертолетом!\n";
						continue;
					}
					else if (trans > 4)
					{
						cout << "Вы купили более крутой транспорт!\n";
						continue;
					}
				}
				case 9:
				{
					system("cls");
					switch7 = 1;
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
		case 8:
		{
			switch8 = 0;
			system("cls");
			cout << "1.Стать депутатом(5млн)\n2.Министр Обороны(5млн)\n3.Министр Финансов(5млн)\n4.Баллотироваться в президенты(10млн)\n5.Выйти в меню\n";
			while (switch8 == 0)
			{
				checkparameters(golod, health, happy);
				int choice8 = 0;
				cin >> choice8;
				switch (choice8)
				{
				case 1:
				{
					if (money >= 5000000 && socialstatus < 1)
					{
						socialstatus = 1;
						cout << "Поздравляю! Теперь вы - депутат!\n";
						break;
					}
					else if (money < 5000000 || socialstatus == 1)
					{
						cout << "Нет денег или вы уже депутат!\n";
						continue;
					}
					else if (socialstatus > 1)
					{
						cout << "У вас более продвинутый статус в правительстве!\n";
						continue;
					}
				}
				case 2:
				{
					if (money >= 5000000 && socialstatus < 2)
					{
						socialstatus = 2;
						cout << "Поздравляю! Теперь вы - министр обороны!\n";
						break;
					}
					else if (money < 5000000 || socialstatus == 2)
					{
						cout << "Нет денег или вы уже министр обороны!\n";
						continue;
					}
					else if (socialstatus > 2)
					{
						cout << "У вас более продвинутый статус в правительстве!\n";
						continue;
					}
				}
				case 3:
				{
					if (money >= 5000000 && socialstatus < 3)
					{
						socialstatus = 3;
						cout << "Поздравляю! Теперь вы - министр финансов!\n";
						break;
					}
					else if (money < 5000000 || socialstatus == 3)
					{
						cout << "Нет денег или вы уже министр финансов!\n";
						continue;
					}
					else if (socialstatus > 3)
					{
						cout << "У вас более продвинутый статус в правительстве!\n";
						continue;
					}
				}
				case 4:
				{
					if (money >= 10000000 && socialstatus < 4)
					{
						socialstatus = 4;
						cout << "Поздравляю! Теперь вы - президент!\n";
						break;
					}
					else if (money < 10000000 || socialstatus == 4)
					{
						cout << "Нет денег или вы уже президент!\n";
						continue;
					}
					else if (socialstatus > 4)
					{
						cout << "У вас более продвинутый статус в правительстве!\n";
						continue;
					}
				}
				case 5:
				{
					system("cls");
					switch8 = 1;
					break;
				}
				default:
				{
					cout << "Пункта нет в меню\n";
					continue;
				}
				}
			}
			break;
		}
		case 9:
		{
			system("cls");
			exit(0);
		}
		case 10:
		{
			system("cls");
			switch10 = 0;
			cout << "1.Перевести бутылки в рубли\n2.Выход\n";
			while (switch10 == 0)
			{
				checkparameters(golod, health, happy);
				int choice10 = 0;
				cin >> choice10;
				switch (choice10)
				{
				case 1:
				{

					translate(&bottles, &money);
					cout << "Настроение - " << happy << endl << "Голод - " << golod << endl << "Здоровье - " << health << endl << "Деньги - " << money << endl << "Бутылки - " << bottles << endl;
					break;
				}
				case 2:
				{
					system("cls");
					switch10 = 1;
					break;
				}
				default:
				{
					cout << "Пункта нет в меню\n";
					continue;
				}
				}
			}
			break;
		}

		}
	}


	return 0;
}
