#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Vector
{

public:
	int x1, y1, x2, y2;
	Vector(int x1, int y1, int x2, int y2)//конструктор
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}
	void set()
	{
		cout << "Введите X и Y вектора №1:";
		cin >> x1 >> y1;
		cout << "Введите X и Y вектора №2:";
		cin >> x2 >> y2;

	}

	void get()
	{
		cout << "Вектор №1:" << "(" << x1 << "," << y1 << ")" << endl;
		cout << "Вектор №2:" << "(" << x2 << "," << y2 << ")" << endl;
	}

	void modul()
	{
		cout << "Модуль вектора №1:" << sqrt(x1*x1 + y1 * y1) << endl;
		cout << "Модуль вектора №2:" << sqrt(x2*x2 + y2 * y2) << endl;
	}

	void sum()
	{
		cout << "Сумма:" << "(" << x1 + x2 << "," << y1 + y2 << ")" << endl;
	}

	void dif()
	{
		cout << "Разность:" << "(" << x1 - x2 << "," << y1 - y2 << ")" << endl;
	}
	~Vector() {};//деструктор 
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Vector a(2, 7, 9, 5);
	//a.set();
	a.get();
	a.modul();
	a.sum();
	a.dif();

	system("pause");
	return 0;
}