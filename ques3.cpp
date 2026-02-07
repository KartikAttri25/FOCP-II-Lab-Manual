#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float temp, result;

    cout << "1 Fahrenheit to Celsius\n";
    cout << "2 Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << result << " °C";
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << result << " °F";
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}