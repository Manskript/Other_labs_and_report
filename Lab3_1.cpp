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
		cout << "������� ���:";
		cin >> name;

		cout << "������� �������:";
		cin >> surname;

		cout << "�������:";
		cin >> age;

	}
	void show()
	{
		cout << "���� ����� " << surname << " " << name << " ��� " << age << endl;
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