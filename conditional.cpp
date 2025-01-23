#include <iostream>
#include <string>

using namespace std;

// Part 1
// Write a program that asks the user to enter a number and then prints out whether the numbers is positive, negative, or zero.
/* int main() {
    int number;

    cout << "Enter your number: ";
    cin >> number;

    if (number < 0)
        cout << "Your number is negative." << endl;
    else if (number > 0)
        cout << "Your number is positive." << endl;
    else if (number == 0)
        cout << "Your number is zero." << endl;
} */

// Part 2
// Write a program that asks the user to enter a number between 2 and 100 and then prints out whether the number is prime or not. 
// (Hint: numbers under a hundred that aren’t prime have 2, 3, 5, 7 or 11 as a factor.)
int main() {
    int number;

    cout << "Enter a number between 2 and 100: ";
    cin >> number;

    if (number % 2 != 0 || number % 3 != 0 || number % 5 != 0 || number % 7 != 0 || number % 11 != 0)
        cout << "Your number is not prime." << endl;
    else
        cout << "Your number is prime." << endl;
}