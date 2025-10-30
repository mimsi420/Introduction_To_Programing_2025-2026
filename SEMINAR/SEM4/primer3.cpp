//** Задача 3:**Напишете функция, която приема неотрицателно число и връща дали числото е палиндром.

#include <iostream>

using namespace std;

int reverseNum(int n)
{
	int reversed = 0;
	while (n > 0)
	{
		int digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}
	
	return reversed;
}

bool isPalindrome(int num)
{
	return num == reverseNum(num);
}

int main()
{
	int number;

	cout << "Enter a non-negative integer: ";
	cin >> number;

	(isPalindrome(number) ?
		cout << "The number is a palindrome.\n" :
		cout << "The number is not a palindrome.\n");
}