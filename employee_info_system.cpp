#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    double monthlySalary;

public:
    // Function to input employee details
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }

    // Function to calculate annual salary
    double calculateAnnualSalary()
    {
        return monthlySalary * 12;
    }

    // Function to display employee details
    void displayDetails()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Annual Salary : " << calculateAnnualSalary() << endl;
    }
};

int main()
{
    Employee e;

    e.inputDetails();
    e.displayDetails();

    return 0;
}
