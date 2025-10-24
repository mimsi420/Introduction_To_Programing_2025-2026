//10. Напишете прост калкулатор, който поддържа операциите + , -, *, / на две реални числа. <br / >

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double num1, num2;
//	char op;
//
//	cout << "Enter 2 real numbers: \n";
//	cin >> num1 >> num2;
//
//	cout << "Enter operator (+, -, *, /): \n";
//	cin >> op;
//
//	switch (op)
//	{
//		case '+':
//			cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
//			break;
//		case '-':
//			cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
//			break;
//		case '*':
//			cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
//			break;
//		case '/':
//			if (num2 != 0)
//			{
//				cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
//			}
//			else
//			{
//				cout << "Error: Division by zero is not allowed.\n";
//			}
//	}
//}