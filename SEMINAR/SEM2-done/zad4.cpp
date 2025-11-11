//** Задача 4 (Лице на фигура) : 
// **Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й.
// 
// Фигурите са четири вида : квадрат(s), правоъгълник(r), кръг(c) и триъгълник(triangle).
// 
// На първия ред на входа се чете вида на фигурата(square, rectangle, circle или triangle).

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char shape;
//	const double pi = 3.14159;
//	double a, b, r;
//
//	cout << "What's your shape? Square (s), Rectangle (r), Circle (c), Triangle (t)\n";
//	cin >> shape;
//
//	switch (shape)
//	{
//		case 's':
//			cout << "Enter the side length of your square: ";
//			cin >> a;
//			
//			cout << "The area of your square is: " << a * a << "\n";
//			break;
//
//		case 'r':
//			cout << "Enter the length and width of your rectangle: ";
//			cin >> a >> b;
//
//			cout << "The area of your rectangle is: " << a * b << "\n";
//			break;
//
//		case 'c':
//			cout << "Enter the radius of your circle: ";
//			cin >> r;
//
//			cout << "The area of your circle is: " << pi * r * r << "(" << r*r << " Pi)" << "\n";
//			break;
//
//		case 't':
//			cout << "Enter the base and height of your triangle: ";
//			cin >> a >> b;
//
//			cout << "The area of your triangle is: " << (a * b) / 2 << "\n";
//			break;
//
//		default:
//			cout << "Invalid shape type.\n";
//			break;
//	}
//}