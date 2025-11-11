//11. Да се въведат от конзолата 3 цифри и да се изведе най - голямото число, което може да се получи, 
// ако тези цифри са единици, десетици и стотици.

#include <iostream>
using namespace std;

int main() 
{
	int num1, num2, num3;

	cout << "Enter three digits: \n";
	cin >> num1 >> num2 >> num3;

	int num123 = (num1 * 100) + (num2 * 10) + num3,
		num132 = (num1 * 100) + (num3 * 10) + num2,
		num213 = (num2 * 100) + (num1 * 10) + num3,
		num231 = (num2 * 100) + (num3 * 10) + num1,
		num312 = (num3 * 100) + (num1 * 10) + num2,
		num321 = (num3 * 100) + (num2 * 10) + num1;

	if ((num1 <= 9 && num1 >= 0) && (num2 <= 9 && num2 >= 0) && (num3 <= 9 && num3 >= 0))
	{
		int maxNum = num123;
		if (num132 > maxNum) maxNum = num132;
		if (num213 > maxNum) maxNum = num213;
		if (num231 > maxNum) maxNum = num231;
		if (num312 > maxNum) maxNum = num312;
		if (num321 > maxNum) maxNum = num321;
		
		cout << "The largest number is: " << maxNum;
	}
	else {
		cout << "Invalid input! Please enter digits between 0 and 9.";
	}
}