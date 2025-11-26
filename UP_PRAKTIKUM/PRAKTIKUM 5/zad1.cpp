//#### Напишете програма, която чете цяло число** N** в интервала[1, 1000], после** N** цели числа и вика 
//следните функции върху масив от тези числа.
//
//** 1. * *Да се напише функция, която приема масив от цели числа и размера му и връща средната 
//стойност от елементите му и числото, което е най - близо до тази средна стойност.

#include <iostream>
using namespace std;

const int MAX = 1000;

void analyzeArray(const int arr[], int n, double &average, int &closest)
{
	long long sum = 0;

	for (int i = 0; i < n; ++i)
		sum += arr[i];

	average = (double)sum / n;

	closest = arr[0];
	double bestDist = (arr[0] - average) * (arr[0] - average);

	for (int i = 1; i < n; ++i)
	{
		double dist = (arr[i] - average) * (arr[i] - average);

		if (dist < bestDist)
		{
			bestDist = dist;
			closest = arr[i];
		}
	}
}

int main()
{
	int N;

	cout << "Enter an integer (1-1000): ";
	cin >> N;

	if (N < 1 || N > 1000)
	{
		cout << "Invalid N!";
		return 0;
	}

	int arr[MAX];

	double avg;
	int closest;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	analyzeArray(arr, N, avg, closest);

	cout << "The average of the numbers you entered is " << avg << " and the closest number from the ones you entered is: " << closest;

	return 0;
}