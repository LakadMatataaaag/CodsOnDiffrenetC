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
#pragma once
class Registration
{
public:
	Registration();
	~Registration();
private:
	long numberz;
	int age;
	int mmr;
	int position;
public:
	Registration(string name, int position,long numberz, int age, int mmr);
	void Hello();
	void Print(string _string);
};

