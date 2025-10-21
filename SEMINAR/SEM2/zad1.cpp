// Задача 1:Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.

#include <iostream>
using namespace std;

int main() {
	int dayInt;

	cout << "Enter a number (1-7): ";
	cin >> dayInt;

	if (dayInt > 1 && dayInt < 7 ) 
	{
		switch (dayInt) {
		case 1:
			cout << "Monday\n";
			break;
		case 2:
			cout << "Tuesday\n"; \
				break;
		case 3:
			cout << "Wednesday\n";
			break;
		case 4:
			cout << "Thursday\n";
			break;
		case 5:
			cout << "Friday\n";
			break;
		case 6:
			cout << "Saturday\n";
			break;
		case 7:
			cout << "Sunday\n";
			break;
		}
	}
	else
	{
		cout << "Invalid input! Please enter a number between 1 and 7.\n";
	}
}