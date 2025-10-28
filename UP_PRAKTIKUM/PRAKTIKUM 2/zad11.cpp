//11. Да се въведат от конзолата 3 цифри и да се изведе най - голямото число, което може да се получи, 
// ако тези цифри са единици, десетици и стотици.

#include <iostream>
using namespace std;

int main() 
{
	int num1, num2, num3, maxNum;

	cout << "Enter three digits: \n";
	cin >> num1 >> num2 >> num3;

	int num123 = (num1 * 100) + (num2 * 10) + num3,
		num132 = (num1 * 100) + (num3 * 10) + num2,
		num213 = (num2 * 100) + (num1 * 10) + num3,
		num231 = (num2 * 100) + (num3 * 10) + num1,
		num312 = (num3 * 100) + (num1 * 10) + num2,
		num321 = (num3 * 100) + (num2 * 10) + num1;

	if ((num1 <= 9 && num1 >= 0) && (num2 <= 9 && num2 >= 0) && (num3 <= 9 && num3 >= 9))
	{
		num123 >= num132 ? maxNum = num123 : maxNum = num132;
		num213 >= num231 ? maxNum = num213 : maxNum = num231;
	}
}