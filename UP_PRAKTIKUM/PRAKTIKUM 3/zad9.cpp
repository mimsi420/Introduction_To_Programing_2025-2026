//9. Напишете програма, която иска от потребителя вход цифра N[2; 9] и символ S.
// Програмата да извежда фигура съставена от символа във вид на ромб, както е показано на примерите.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	char symb;
//
//	cout << "Enter a number between 2 and 9: ";
//	cin >> n;
//	cout << "Enter a symbol: ";
//	cin >> symb;
//
//	if (n >= 2 && n <= 9)
//	{
//		for (int row = 1; row <= n; ++row)
//		{
//			for (int spaces = 1; spaces <= n - row; ++spaces)
//			{
//				cout << ' ';
//			}
//			
//			for (int symbols = 1; symbols <= 2 * row - 1; ++symbols)
//			{
//				cout << symb;
//			}
//
//			cout << "\n";
//		}
//
//		for (int row = n - 1; row >= 1; --row)
//		{
//			for (int spaces = 1; spaces <= n - row; ++spaces)
//			{
//				cout << ' ';
//			}
//
//			for (int symbols = 1; symbols <= 2 * row - 1; ++symbols)
//			{
//				cout << symb;
//			}
//			
//			cout << "\n";
//		}
//	}
//	else
//	{
//		cout << "Enter a valid input!";
//	}
//}