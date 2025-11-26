//#### Напишете програма, която чете цяло число** N** в интервала[1, 1000], после** N** цели числа и вика 
//следните функции върху масив от тези числа.
//
// **3.** Напишете функция, която масив от цели числа и индекс и премахва числото, което се намира на този индекс.

#include <iostream>
using namespace std;

const int MAX = 1000;

void removeAt(int arr[], int &n, int &index)
{
	if (index < 0 || index >= n)
		return;

	for (int i = index; i < n-1; ++i)
	{
		arr[i] = arr[i + 1];
	}

	--n;
}

int main()
{
	int N;
	cout << "Enter an integer (1-1000): ";
	cin >> N;

	if (N < 1 || N > 1000)
	{
		cout << "Invalid N!\n";
		return 0;
	}

	int arr[MAX];

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	int index;
	cin >> index;

	removeAt(arr, N, index);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
}