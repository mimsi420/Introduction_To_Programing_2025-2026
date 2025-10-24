//6. Напишете програма, която намира корените на квадратно уравнение. <br / >
//За целта потребителя да въведе коефицентите на уравнението - *a*, * b*, и* c* . <br / >
//при уравнение с вид * a \ * x ^ 2 + b \ * x + c = 0 * . <br / >

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double a, b, c;
//	cout << "ax^2 + bx + c = 0 SOLVER\nEnter coefficients a, b and c: ";
//	cin >> a >> b >> c;
//
//	double D = b * b - 4 * a * c;
//	if (D > 0)
//	{
//		double x1 = ((-b + sqrt(D)) / 2 * a);
//		double x2 = ((-b - sqrt(D)) / 2 * a);
//
//		cout << "Two real roots found. x1 = " << x1 << " and x2 = " << x2 << "\n";
//	}
//	else if (D == 0)
//	{
//		double x = (-b / (2 * a));
//		cout << "One real root found. x = " << x << "\n";
//	}
//	else
//	{
//		cout << "No real roots found.\n";
//	}
//}