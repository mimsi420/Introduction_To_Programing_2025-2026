//9. Да се въведат от конзолата коефициенти за квадратното уравнение ax2 + bx + c.Да се намерят корените на уравнението.<br / >
//**Mоже да се използва <cmath>(math.h) sqrt * *<br / >

#include <iostream>
using namespace std;

int main() {
	double a = 0, b = 0, c = 0;

	cout << "(ax2 + bx + c) SOLVER \n Give a coefficient for a: \n";
	cin >> a;
	cout << "\n Give a coefficient for b: \n";
	cin >> b;
	cout << "\n Give a coefficient for c: \n";
	cin >> c;

	double D = (b * b) - (4 * a * c);
	double x1 = (-b + sqrt(D)) / (2 * a);
	double x2 = (-b - sqrt(D)) / (2 * a);

	cout << "The roots of (" << a << "x^2 + " << b << "x + " << c << ") are: \n" << x1 << "\n" << x2 << "\n";
}