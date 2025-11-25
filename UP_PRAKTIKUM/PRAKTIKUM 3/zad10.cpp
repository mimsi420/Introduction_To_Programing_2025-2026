//10. Да се напише програма, която чете от конзолата 2 цели положилени числа 
// m и n и извежда всички перфектни числа в интервала[m, n].Перфектно е такова число N, 
// което е равно на сумата от своите по - малки делители(т.е.различни от самото число).

#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "Enter two positive integers: ";
	cin >> m >> n;

	if (n > 0 && m > 0 && m < n)
	{
		cout << "The perfect numbers in the [" << m << ", " << n << "] interval are:\n";
		for (int isPerfect = m; isPerfect <= n; ++isPerfect)
		{
			int sumDivs = 0;

			for (int div = 1; div < isPerfect; ++div)
			{
				if (isPerfect % div == 0)
				{
					sumDivs += div;
				}
			}

			if (isPerfect == sumDivs)
			{
				cout << isPerfect << " ";
			}
		}
	}
	else
	{
		cout << "Enter valid input! ";
	}
}