//** Задача 1:**Въвежда се цяло число.Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> "Enter an integer: \n";
	cin >> num;
	cout << (num % 2 == 0);
}