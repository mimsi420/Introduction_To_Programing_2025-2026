//8. Да се състави програма, която по въведено естествено число N намира и 
// отпечатва всички тройки естествени числа a, b и c,
//не по - големи от N, които могат да бъдат страни на правоъгълен триъгълник.

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a natural number: ";
	cin >> n;

	cout << "The natural three number combinations with numbers not greater than " << n 
		<< ", that can form a triangle are:\n";

	for (int a = 1; a <= n; ++a)
	{
		for (int b = 1; b <= n; ++b)
		{
			for (int c = 1; c <= n; ++c)
			{
				if (((a * a + b * b) == c * c) && (a <= b) && (b < c))
				{
					cout << "(" << a << " , " << b << " , " << c << ")\n";
				}
			}
		}
	}
}