//7. Да се напише програма, която чете от конзолата символ и, ако е малка буква, извежда съответната голяма, 
// ако е голяма буква, извежда съответната малка, а ако не е буква, да изведе съобщение за невалиден символ.

//#include <iostream>
//using namespace std;
//
//int main() {
//	char ch;
//	cout << "Enter a letter from the alphabet: ";
//	cin >> ch;
//	if (ch >= 'a' && ch <= 'z') 
//	{
//		char upperCh = ch - ('a' - 'A'); // all the lower- and uppercase letters have a fixed offset so this works for every char
//		cout << "Uppercase: " << upperCh << endl;
//	} 
//	else if (ch >= 'A' && ch <= 'Z') 
//	{
//		char lowerCh = ch + ('a' - 'A');
//		cout << "Lowercase: " << lowerCh << endl;
//	} 
//	else 
//	{
//		cout << "Invalid character" << endl;
//	}
//}