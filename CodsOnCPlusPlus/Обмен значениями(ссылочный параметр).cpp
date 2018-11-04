#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
	int i, j;
	i = 10;
	j = 20;

	cout << "Исходные значения переменных i и j = " << i << " " << j << endl;
	swap(i,j);
	cout << "Значение переменных i и j после обмена = " << i << " " << j << endl;
	return 0;
}


void swap(int &x, int&y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
