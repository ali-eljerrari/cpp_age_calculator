#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // Get current time
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now); // Convert to local time

    // Get the full year
    int year = localTime->tm_year + 1900;

    cout << "Current year is: " << year << endl;

    int birthdate = 1990;

    cout << "Birthdate year is: " << birthdate << endl;

    int currentdate = year;

    cout << "Calculations will be based on: " << currentdate << " - " << birthdate << " = " << currentdate - birthdate << endl;

    cout << "My age is: " << currentdate - birthdate << endl;
    return 0;
}
