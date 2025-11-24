//1. Да се напише програма, която приема естествено число n и изписва стълба от 1 до n

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter your number: ";
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		cout << "\n";
	}
}