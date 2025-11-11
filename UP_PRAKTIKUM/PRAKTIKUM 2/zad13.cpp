//13. Да се състави програма, чрез която се въвежда 4-цифренo естествено число от интервала[1000...9999]. 
//От това число се формират 2 нови 2-цифрени числа.
//Първото число се формира от 1-та и 4-та цифра на въведеното число.
//Второто число се формира от 2-рa - 3-та цифра на въведеното число.
// На екрана да се изведе дали 1 - то ново число e по-малко < , равно = или по-голямо от 2-то число.\

#include <iostream>
using namespace std;

int main()
{
	int number, first, second, dig1, dig2, dig3, dig4;
	cout << "Enter a 4-digit natural number in the range [1000...9999]: ";
	cin >> number;

	dig1 = number / 1000; // 7689/1000 = 7
	dig2 = number / 100 % 10; // 7689/100 = 76 % 10 = 6
	dig3 = number / 10 % 10; // 7689/10 = 768 % 10 = 8
	dig4 = number % 10; // 7689 % 10 = 9

	first = dig1 * 10 + dig4; // 7*10 + 9 = 79
	second = dig2 * 10 + dig3; // 6*10 + 8 = 68

	if (first < second)
	{
		cout << "The FIRST number " << first << " is LESS than the SECOND number " << second << ".\n";
	}
	else if (first == second)
	{
		cout << "The FIRST number " << first << " is EQUAL to the SECOND number " << second << ".\n";
	}
	else
	{
		cout << "The FIRST number " << first << " is GREATER than the SECOND number " << second << ".\n";
	}
}