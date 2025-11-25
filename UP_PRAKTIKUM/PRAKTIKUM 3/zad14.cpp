//14. Да се напише програма, която приема цяло число и отпечатва дали е степен на 2 - ката.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Not a power of 2!\n";
        return 0;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1)
        cout << "a power of 2\n";
    else
        cout << "Not a power of 2!\n";
}