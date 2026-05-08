#include <iostream>
using namespace std;

class Temperature
{
private:
    float celsius;

public:
    // Function to input temperature in Celsius
    void inputTemperature()
    {
        cout << "Enter Temperature in Celsius: ";
        cin >> celsius;
    }

    // Function to convert Celsius to Fahrenheit
    float convertToFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }

    // Function to display result
    void displayResult()
    {
        cout << "\n----- Temperature Conversion -----" << endl;
        cout << "Celsius    : " << celsius << " °C" << endl;
        cout << "Fahrenheit : " << convertToFahrenheit() << " °F" << endl;
    }
};

int main()
{
    Temperature t;

    t.inputTemperature();
    t.displayResult();

    return 0;
}
