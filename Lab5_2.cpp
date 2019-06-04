#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Vector
{
	double x;
	double y;

public:
	Vector() : x(0), y(0) {}

	Vector(double x, double y) : x(x), y(y) {};

	Vector(const Vector& v);

	Vector operator= (const Vector& v);

	friend Vector operator+ (const Vector& v1, const Vector& v2);

	friend Vector operator- (const Vector& v1, const Vector& v2);

	friend const bool operator== (const Vector& v1, const Vector& v2);

	friend const istream& operator>> (istream& in, Vector& v);

	friend const ostream& operator<< (ostream& out, const Vector& v);

};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите X и Y:";
	Vector v1;
	cin >> v1;
	Vector v2 = v1;

	if (v1 == v2)
	{
		cout << "Сумма v1 и v2:" << v1 + v2;
	}
	cout << endl;


	system("pause");
	return 0;
}
Vector::Vector(const Vector& v)
{
	x = v.x;
	y = v.y;

}

Vector Vector::operator= (const Vector& v)
{
	return Vector(v.x, v.y);
}

Vector operator+ (const Vector& v1, const Vector& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y);
}

Vector operator- (const Vector& v1, const Vector& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y);
}

const bool operator== (const Vector& v1, const Vector& v2)
{
	return (v1.x == v2.x) && (v1.y == v2.y);
}

const istream& operator>> (istream& in, Vector& v)
{
	in >> v.x >> v.y;
	return in;
}

const ostream& operator<< (ostream& out, const Vector& v)
{
	out << v.x << " " << v.y;
	return out;
}