//13. Да се напише програма, която приема 2 числa - a и b и отпечатва всички прости числа в интервала[a, b].

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "enter two integers: ";
	cin >> a >> b;
	
	cout << "The prime numbers between " << a << " and " << b << " are:\n";

	for (int num = a; num <= b; ++num)
	{ 
		if (num < 2)
			continue;

		bool isPrime = true;

		for (int div = 2; div < num; ++div) // 2 3 4 5 6 
		{
			if (num % div == 0) // 7 % 2 = 1; 7 % 3 = 1 ...
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			cout << num << " ";
		}
	}
}