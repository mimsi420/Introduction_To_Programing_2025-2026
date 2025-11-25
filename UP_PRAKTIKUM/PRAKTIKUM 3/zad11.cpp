//Напишете програма, която при въведено число n > 3 извежда редица от числата на Фибоначи ненадвишаващи n.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, nextNum = 0, secondToLast = 2, last = 3;
//	cout << "Enter an integer bigger than 3: ";
//	cin >> n;
//
//	if (n > 3)
//	{
//		cout << "1 1 2 3";
//		while (true)
//		{
//			nextNum = secondToLast + last;
//
//			if (nextNum > n) break;
//
//			cout << " " << nextNum;
//
//			secondToLast = last;
//			last = nextNum;
//		}
//	}
//	else
//	{
//		cout << "Enter valid inpit!";
//	}
//}