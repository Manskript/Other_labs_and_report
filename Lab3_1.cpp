#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
using namespace std;

class Child
{
private:
	string name;
	string surname;
	int age;
public:
	void set()
	{
		cout << "Введите имя:";
		cin >> name;

		cout << "Введите фамилию:";
		cin >> surname;

		cout << "Возраст:";
		cin >> age;

	}
	void show()
	{
		cout << "Меня зовут " << surname << " " << name << " мне " << age << endl;
	}

};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Child a;
	a.set();
	a.show();

	Child b;
	b.set();
	b.show();

	system("pause");
	return 0;
}