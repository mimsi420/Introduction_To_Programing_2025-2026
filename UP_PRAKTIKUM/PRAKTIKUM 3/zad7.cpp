//7. Напишете програма, която иска от потребителя да въведе число N.
// На следващите N - 1 реда, ще бъдат въведени всички
//числа от 1 до N * *без едно * *.Програмата да изведе кое е пропуснатото число.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, entered, enteredSum = 0, missing = 0;
//	cout << "Enter an integer: ";
//	cin >> n;
//
//	int sum = (n * (n + 1) )/ 2;
//
//	cout << "Now enter " << n-1 << " numbers separated by enters: \n";
//
//	for (int i = 1; i < n; ++i)
//	{
//		cin >> entered;
//		enteredSum += entered;
//	}
//
//	missing = sum - enteredSum;
//
//	cout << "The missing number is: " << missing << "\n";
//}