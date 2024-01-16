//Name: Shaked Federman
//TZ: 207304692
//Course: 80-515-01

//targil1_1.cpp. This program calculates the arrival time of a flight.

#include <iostream>
#include <cstdlib>
using namespace std;

int const
    SECONDS_IN_MINUTE = 60,
    MINUTES_IN_HOUR = 60;

int main()
{
    //variables declarations
    int hour, minute, second, hourD, minuteD, secondD;

    cout << "Welcome to the flight arrival calculator!\n";

    //user input
    cout << "Enter flight takeoff:\n";
    cin >> hour >> minute >> second;

    cout << "Enter flight duration:\n";
    cin >> hourD >> minuteD >> secondD;

    //calculations
    second += secondD;
    minute += second / SECONDS_IN_MINUTE;
    second %= SECONDS_IN_MINUTE;

    minute += minuteD;
    hour += minute / MINUTES_IN_HOUR;    
    minute %= MINUTES_IN_HOUR;
   
    hour += hourD;

    //output
    cout << "Flight arrival is:\n" << hour << ":" << minute << ":" << second << endl;

    system("pause");
    return 0;
}
