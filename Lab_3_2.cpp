#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles
{

public:
	string brand;
	double size_h;
	double size_w;
	void set()
	{
		cout << "Введите бренд:";
		cin >> brand;

		cout << "Введите длину:";
		cin >> size_h;

		cout << "Введите ширину:";
		cin >> size_w;

	}
	void getData()
	{
		cout << brand << " размер " << size_h << " x " << size_w << endl;
	}

};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Tiles a, b;
	a.set();
	b.set();
	cout << "Кафель №1:";
	a.getData();
	cout << "Кафель №2:";
	b.getData();

	system("pause");
	return 0;
}