//#### Напишете програма, която чете цяло число** N** в интервала[1, 1000], после** N** цели числа и вика 
//следните функции върху масив от тези числа.
//
// **2.** Да се напише функция, която приема масив от цели числа и връща минимума и максимума на числата.

//#include <iostream>
//using namespace std;
//
//const int MAX = 1000;
//
//void findMinMax(const int arr[], int n, int &minElement, int &maxElement)
//{
//	for (int i = 1; i < n; ++i)
//	{
//		if (arr[i] < minElement)
//			minElement = arr[i];
//
//		if (arr[i] > maxElement)
//			maxElement = arr[i];
//	}
//}
//
//int main()
//{
//	int N;
//	cout << "Enter an integer (1-1000): ";
//	cin >> N;
//
//	if (N < 1 || N > 1000)
//	{
//		cout << "Invalid N!";
//		return 0;
//	}
//
//	int arr[MAX];
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> arr[i];
//	}
//
//	int min = arr[0];
//	int max = arr[0];
//
//	findMinMax(arr, N, min, max);
//
//	cout << "Min = " << min << ", Max = " << max;
//}