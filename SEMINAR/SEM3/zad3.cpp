//** Задача 3:**Напишете програма, която приема цяло число и връща най - често срещаната цифра.
// Ако има няколко най - често срещани, то да се отпечата най - малката.

#include <iostream>
using namespace std;

int main()
{
	int num, max = 1, mostRepeated;
	int count1 = 0, count2 = 0, count3 = 0, 
		count4 = 0, count5 = 0, count6 = 0,
		count7 = 0, count8 = 0, count9 = 0,
		count0 = 0;

	cout << "Enter an integer: \n";
	cin >> num;

	for (num; num != 0; num = num / 10)
	{
		int digit = num % 10;
		switch (digit) {
			case 0: count0++; break;
			case 1: count1++; break;
			case 2: count2++; break;
			case 3: count3++; break;
			case 4: count4++; break;
			case 5: count5++; break;
			case 6: count6++; break;
			case 7: count7++; break;
			case 8: count8++; break;
			case 9: count9++; break;
		}
	}

	if (count0 > max)
	{
		max = count0;
		mostRepeated = 0;
	}
	if (count1 > max)
	{
		max = count1;
		mostRepeated = 1;
	}
	if (count2 > max) 
	{
		max = count2;
		mostRepeated = 2;
	}
	if (count3 > max)
	{
		max = count3;
		mostRepeated = 3;
	}
	if (count4 > max)
	{
		max = count4;
		mostRepeated = 4;
	}
	if (count5 > max)
	{
		mostRepeated = 5;
		max = count5;
	}
	if (count6 > max)
	{
		max = count6;
		mostRepeated = 6;
	}
	if (count7 > max)
	{
		max = count7;
		mostRepeated = 7;
	}
	if (count8 > max) 
	{
		max = count8;
		mostRepeated = 8;
	}
	if (count9 > max) 
	{
		max = count9;
		mostRepeated = 9;
	}

	cout << "The most frequent digit is: " << mostRepeated << "\nIt was repeated " << max << " times.\n";
}