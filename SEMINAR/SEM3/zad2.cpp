//** Задача 2:**Да се напише програма, която приема цяло положително число, обръща го и го увеличава с 1. < br / >

#include <iostream>
using namespace std;

int main()
{
	int num, reversedNum = 0;

	cout << "Enter a positive integer: \n";
	cin >> num;

	if (num >= 0)
	{
		for (num; num != 0; num = num / 10)
		{
			reversedNum = reversedNum * 10 + num % 10;
		}

		reversedNum++;
		cout << "The reversed number 1 plus 1 is : " << reversedNum << "\n";
	}
	else
	{
		cout << "The number is not positive or is not an integer.\n";
	}
}