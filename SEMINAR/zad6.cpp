//** Задача 6:**Напишете програма, която въвежда две числа - a и b и извежда като резултат(a + b) ^ 4 - (a - b) ^ 2

#include <iostream>
using namespace std;

int main()
{
	double a = 0, b = 0;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	double result = ((a + b) * (a + b) * (a + b) * (a + b) - (a - b) * (a - b));
	cout << "Result is: " << result;
}