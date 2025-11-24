//3. Напишете програма, която по въведено цяло положително число, извежда квадратът 
// на това число, но в обратен ред, като водещите нули се игнорират.

#include <iostream>
using namespace std;

int main()
{
	int x, reversed = 0;
	cout << "Enter a positive integer: ";
	cin >> x;

	int xSquared = x*x;

	do {
		reversed = reversed * 10 + (xSquared % 10);
		xSquared /= 10;
	} while (xSquared > 0);

	cout << reversed;
}