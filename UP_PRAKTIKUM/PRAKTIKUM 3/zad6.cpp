//6. Напишете проста игра, в която първо се въвежда цяло число в интервала[0; 100] 
// и в последствие се въвеждат цели числа (предположения), 
// като за всяко се казва дали е по - малко или по - голямо от първоначално ваведеното.
//Tова продължава до въвеждане на число, равно на първоначалното.
// Програмата да отпечата и броят направени предположения.

#include <iostream>
using namespace std;

int main()
{
	int num, guess, guessCount = 0;
	cout << "Enter an integer between 0 and 100: ";
	cin >> num;
	cout << "\n" << "\n" << "\n" << "\n" << "\n";

	if (num >= 0 && num <= 100)
	{
		cout << "Try to guess the entered integer: ";
		cin >> guess; guessCount++;

		while (guess != num)
		{
			if (guess > num)
			{
				cout << "\nYour guessed number is GREATER than the entered one. Try again!\nEnter a number: ";
			}
			if (guess < num)
			{
				cout << "\nYour guessed number is LESS than the entered one. Try again!\nEnter a number: ";
			}
			cin >> guess; guessCount++;
		}

		cout << "\nYou guessed the number in " << guessCount <<" guesses!\n";
	}
	else
	{
		cout << "Enter a valid number (0-100)!";
	}

}