#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
#include<cmath>

using namespace std;

class Complex
{

public:
	double Re, Im;
	Complex()
	{
		cout << "Введите действительную часть: " << endl;
		cin >> Re;
		cout << "Введите мнимую часть: " << endl;
		cin >> Im;

	}
	Complex(const Complex &other)
	{
		this->Re = other.Re;
		this->Im = other.Im;
	}
	~Complex() {};
	void set_c()
	{
		cout << "Введите действительную часть: " << endl;
		cin >> Re;
		cout << "Введите мнимую часть: " << endl;
		cin >> Im;
	}
	string get_c()
	{
		return to_string(Re) + "+" + to_string(Im) + "i";
	}
	double modul()
	{
		return sqrt(Re*Re + Im * Im);
	}
	double arg()
	{
		return atan(Im / Re);
	}
	friend istream& operator>> (std::istream &in, Complex &point)
	{
		cout << "Введите действительную часть: " << endl;
		in >> point.Re;
		cout << "Введите мнимую часть: " << endl;
		in >> point.Im;


		return in;
	}
	friend ostream& operator<< (std::ostream &out, const Complex &point)
	{

		out << point.Re << "+i*" << point.Im;

		return out;
	}
	bool operator < (Complex &other)
	{
		if (this->modul() < other.modul())return true;
		else return false;
	}
	bool operator >(Complex &other)
	{
		if (this->modul() > other.modul())
		{

			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator ==(Complex &other)
	{
		if (this->modul() == other.modul())return true;
		else return false;
	}
	Complex& operator ++()
	{
		this->Re++;
		return *this;
	}
	Complex& operator --()
	{
		this->Re--;
		return *this;
	}

};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Complex a;
	Complex b = a;
	cout << "a: " << a << endl;
	cout << "b=a: " << b << endl;
	cin >> a;
	cout << "a-измененное: " << a << endl;
	cout << "Модуль a: " << a.modul() << endl;
	cout << "Аргумент a: " << a.arg() << endl;
	cout << "a++: " << ++a << endl;
	cout << "a--: " << --a << endl;

	if (a > b)
	{
		cout << "a > b" << endl;
	}

	else if (a < b)
	{
		cout << "a < b" << endl;
	}
	else if (a == b)
	{
		cout << "a = b";
	}
	system("pause");
	return 0;
}