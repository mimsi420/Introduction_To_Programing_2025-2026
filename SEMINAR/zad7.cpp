//** Задача 7:**
//Въвежда се цяло число n - n лева.Да се изведе на конзолата как може да се разпределят по банкноти, така че да имаме минимален брой банкноти.
//В условието приемаме, че имаме банкноти от 1 и 2 лева.

#include <iostream>
using namespace std;
int main() 
{
	int bgnSum;
	cout << "Enter an integer amount of BGN: ";
	cin >> bgnSum;
	int countOf100 = bgnSum / 100;
	int countOf50 = (bgnSum % 100) / 50;
	int countOf20 = (bgnSum % 50) / 20;
	int countOf10 = (bgnSum % 20) / 10;
	int countOf5 = (bgnSum % 10) / 5;
	int countOf2 = (bgnSum % 5) / 2;
	int countOf1 = (bgnSum % 2) / 1;

	cout << "You can have: \n" << countOf100 << " x 100lv \n" << countOf50 << " x 50lv \n" << countOf20
		<< " x 20lv \n" << countOf10 << " x 10lv \n" << countOf5 << " x 5lv \n" 
		<< countOf2 << " x 2lv \n" << countOf1 << " x 1lv \n";
}