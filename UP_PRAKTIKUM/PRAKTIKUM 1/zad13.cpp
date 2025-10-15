//13. Напишете програма, която приема от входа две двойки реални числа, отговарящи на две точки в равнината.
//Да се отпечата растоянието между точките закръглено до 2 - рия знак след десетичната запетая.

#include <iostream>
using namespace std;

int main() {
	double Ax, Ay, Bx, By;
	cout << "Enter coordinates of A.\nx: ";
	cin >> Ax;
	cout << "y: ";
	cin >> Ay;
	cout << "\nEnter coordinates of B.\nx: ";
	cin >> Bx;
	cout << "y: ";
	cin >> By;
	
	cout << "Your points are: A(" << Ax << ", " << Ay << ") and B(" << Bx << ", " << By << ").\n";

	double dist = sqrt(((Ax - Bx) * (Ax - Bx)) + ((Ay - By) * (Ay - By)));

	dist = round(dist * 100) / 100;

	cout << "The distance between them is: " << dist << "\n";

}