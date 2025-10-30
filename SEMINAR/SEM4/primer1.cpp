//** Задача 1:**Въвежда се неотрицателно число n.Да се отпечатат всички двойки прости числа,
// които са във вида 6k - 1 и  6k + 1 за всяко k <= n.

//#include <iostream>
//
//using namespace std;
//
//bool isPrime(int num)
//{
//	if (num <= 1)
//		return false;
//	for (int i = 2; i * i <= num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	cout << "Enter a non-negative integer n: ";
//	cin >> n;
//	cout << "Prime pairs of the form 6k - 1 and 6k + 1 for k <= " << n << " are:\n";
//	for (int k = 0; k <= n; k++)
//	{
//		int num1 = 6 * k - 1;
//		int num2 = 6 * k + 1;
//		if (isPrime(num1) && isPrime(num2))
//		{
//			cout << "(" << num1 << ", " << num2 << ")\n";
//		}
//	}
//}