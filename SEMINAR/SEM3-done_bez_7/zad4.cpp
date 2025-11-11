//** Задача 4:**Напишете програма, която приема две естествени числа и връща най - големият им общ делител.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num1, num2, gcd = 1;
//
//	cout << "enter two natural numbers: \n";
//	cin >> num1 >> num2; // 16 24
//
//	if (num1 == 0 || num2 == 0) 
//	{
//		cout << "Numbers must be non-zero.";
//		return 0;
//	}
// 
//	do
//	{
//		gcd = num1 % num2; // 16 % 24 = 16;  24 % 16 = 8;   16 % 8 = 0
//		num1 = num2; // num1 = 24;   num1 = 16;   num1 = 8;
//		num2 = gcd; // num2 = 16;   num2 = 8;	num2 = 0;
//	} while (num2 != 0); // 16, 8, 0
//
//	gcd = num1; // gcd = 8
//
//	cout << "the greatest common divisor is : " << gcd << "\n";
//}