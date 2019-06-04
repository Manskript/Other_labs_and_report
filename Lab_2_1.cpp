#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>

using namespace std;

double sum(double a, double b)
{
	return a + b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double dif(double a, double b)
{
	return a - b;
}

double division(double a, double b)
{
	return a / b;
}

double(*operation)(double a, double b);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b;
	cout << "Введите два числа" << endl;
	cin >> a >> b;

	int z;
	cout << "1-разность 2-сумма 3-произвдение 4-деление" << endl;
	cin >> z;

	switch (z)
	{
	case 1:
		operation = dif;
		cout << operation(a, b) << endl;
		break;
	case 2:
		operation = sum;
		cout << operation(a, b) << endl;
		break;
	case 3:
		operation = multiplication;
		cout << operation(a, b) << endl;
		break;
	case 4:
		if (b != 0)
		{
			operation = division;
			cout << operation(a, b) << endl;
		}
		else
		{
			cout << "error" << endl;
		}
	default:
		break;
	}

	system("pause");
	return 0;
}