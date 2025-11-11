//** Задача 5 (Време + 15 минути) : **
//Да се напише програма, която въвежда час и минути от 24 - часово денонощие и изчислява
//колко ще е часът след 15 минути.Резултатът да се отпечата във формат hh : mm.
//
//Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59.
//Часовете и минутите се изписват винаги с по две цифри, с водеща
//нула когато е необходимо

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int hour, minute;
//
//    cout << "Enter the desired time (hours 00-23): ";
//    cin >> hour;
//    cout << "Enter the desired time (minutes 00-59): ";
//    cin >> minute;
//
//    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59)
//    {
//        minute += 15;
//
//        if (minute >= 60)
//        {
//            hour += minute / 60;
//            minute = minute % 60;
//        }
//
//        if (hour >= 24)
//        {
//            hour = hour % 24;
//        }
//
//        cout << "The time after 15 minutes will be: ";
//
//        if (hour < 10)
//            cout << "0";
//        cout << hour << ":";
//
//        if (minute < 10)
//            cout << "0";
//        cout << minute << "\n";
//    }
//    else
//    {
//        cout << "Invalid input!\n";
//    }
//}