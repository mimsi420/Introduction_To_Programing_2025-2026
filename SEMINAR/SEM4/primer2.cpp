//** Задача 2:**Напишете функция, която приема неотрицателно число n и връща числото обърнато

//#include <iostream>
//
//using namespace std;
//
//int reversedNum(int n) //567
//{
//	int reversed = 0;
//
//	while (n > 0)
//	{
//		int digit = n % 10; //7
//
//		reversed = reversed * 10 + digit; //0*10+7=7; 7*10+6=76; 76*10+5=765
//
//		n /= 10; //56; 5;0
//	}
//
//	return reversed;
//}
//
//int main()
//{
//	int num;
//
//	cout << "Enter a non-negative integer: ";
//	cin >> num;
//
//	cout << "The reversed number is: " << reversedNum(num) << "\n";
//
//	return 0;
//}