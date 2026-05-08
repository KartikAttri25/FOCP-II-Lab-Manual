#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    // Function to input book details
    void inputDetails()
    {
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Book Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }
};

int main()
{
    Book b;

    b.inputDetails();
    b.displayDetails();

    return 0;
}
