//** Задача 6:**Напишете програма, която приема естествено число и връща дали числото е просто.

#include <iostream>

using namespace std;

int main()
{
	int num;
	bool hasDiv = false;

	cout << "Enter a natural number: ";
	cin >> num; //7

	if (num <= 1)
	{
		cout << "Not a prime number.";
	}
	else {
		for (int i = 2; i < num; i++) // 2 3 4 5 6 
		{
			if (num % i == 0) // 7 % 2 = 1; 7 % 3 = 1 ...
			{
				hasDiv = true;
				break;
			}
		}

		cout << (hasDiv ? "Not prime" : "Prime");
	}
}