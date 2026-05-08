#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

public:
    // Function to input student details
    void inputDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks of Subject 1: ";
        cin >> marks1;

        cout << "Enter Marks of Subject 2: ";
        cin >> marks2;

        cout << "Enter Marks of Subject 3: ";
        cin >> marks3;
    }

    // Function to calculate total marks
    int calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks 1     : " << marks1 << endl;
        cout << "Marks 2     : " << marks2 << endl;
        cout << "Marks 3     : " << marks3 << endl;
        cout << "Total Marks : " << calculateTotal() << endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}
