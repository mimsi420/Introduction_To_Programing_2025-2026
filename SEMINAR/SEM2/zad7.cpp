//** Задача 7 :**
//Да се напише програма, която при подадени радиус r и двумерна точка(х, у) 
//проверява дали точката се намира вътре / извън или по контура на окръжност с център(0, 0).

#include <iostream>

using namespace std;

int main()
{
	double r = 1,
		x = 0,
		y = 0;

	if (r > 0)
	{
		cout << "Enter radius: \n";
		cin >> r;
		cout << "Enter point coordinates (x y): \n";
		cin >> x >> y;

		if ((x * x + y * y) > r * r)
		{
			cout << "Point is outside the circle.\n";
		}
		else if ((x*x + y*y) == r*r)
		{
			cout << "Point is on the circle.\n";
		}
		else
		{
			cout << "Point is inside the circle.\n";
		}
	}
	else
	{
		cout << "Radius can't be negative.\n";
	}
}