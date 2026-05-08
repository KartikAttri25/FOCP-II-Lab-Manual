#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    // Function to input dimensions
    void inputDimensions()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    // Function to calculate area
    float calculateArea()
    {
        return length * width;
    }

    // Function to calculate perimeter
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }

    // Function to display results
    void displayResult()
    {
        cout << "\n----- Rectangle Details -----" << endl;
        cout << "Length     : " << length << endl;
        cout << "Width      : " << width << endl;
        cout << "Area       : " << calculateArea() << endl;
        cout << "Perimeter  : " << calculatePerimeter() << endl;
    }
};

int main()
{
    Rectangle r;

    r.inputDimensions();
    r.displayResult();

    return 0;
}
