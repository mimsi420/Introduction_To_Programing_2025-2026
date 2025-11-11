//12. Да се прочетат от конзолата 2 числа - ден и месец от годината.
//Да се изведе следващия ден (ако се приеме, че годината не е високосна).

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int day, month, daysInMonth;
//	cout << "Enter day and month: ";
//	cin >> day >> month;
//
//	switch (month)
//	{
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			daysInMonth = 31;
//			break;
//		case 4: case 6: case 9: case 11:
//			daysInMonth = 30;
//			break;
//		case 2:
//			daysInMonth = 28;
//			break;
//		default:
//			cout << "Invalid month!\n";
//			return 1;
//	}
//	
//	if (++day < daysInMonth)
//	{
//		cout << "Next day is: " << day << "." << month << "\n";
//	}
//	else
//	{
//		day = 1;
//		month == 12 ? month = 1 : month++;
//
//		cout << "Next day is: " << day << "." << month << "\n";
//	}
//}