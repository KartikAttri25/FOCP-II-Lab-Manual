#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, n;
    int sumPerfect = 0;
    double sumArmstrong = 0;

    cout << "Enter a number: ";
    cin >> num;

    //Perfect Number
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumPerfect += i;
        }
    }

    if (sumPerfect == num)
        cout << num << " is a Perfect number.\n";
    else
        cout << num << " is not a Perfect number.\n";

    //Armstrong Number
    temp = num;
    n = 0;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    sumArmstrong = 0;

    while (temp != 0) {
        digit = temp % 10;
        sumArmstrong += pow(digit, n);
        temp /= 10;
    }

    if (sumArmstrong == num)
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";

    return 0;
}