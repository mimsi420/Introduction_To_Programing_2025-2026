//** Задача 5:**Напишете програма, която приема две естествени числа и връща най - малкото им общо кратно.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num1, num2;
//
//	cout << "enter two natural numbers: \n";
//	cin >> num1 >> num2;
//
//	if (num1 == 0 || num2 == 0) {
//		cout << "Numbers must be non-zero.";
//		return 0;
//	}
//
//	int a = num1, b = num2, remainder;
//
//	do
//	{
//		remainder = a % b;
//		a = b;
//		b = remainder;
//	} while (b != 0);
//
//	int gcd = a;
//	long long lcm = (num1 * num2) / gcd;
//
//	cout << "LCM is: " << lcm;
//}

