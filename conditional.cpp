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
/* int main() {
    int number;

    cout << "Enter a number between 2 and 100: ";
    cin >> number;

    if (number % 2 == 0 && number != 2)
        cout << "Your number is not prime." << endl;
    else if (number % 3 == 0 && number != 3)
        cout << "Your number is not prime." << endl;
    else if (number % 5 == 0 && number != 5)
        cout << "Your number is not prime." << endl;
    else if (number % 7 == 0 && number != 7)
        cout << "Your number is not prime." << endl;
    else if (number % 11 == 0 && number != 11)
        cout << "Your number is not prime." << endl;
    else
        cout << "Your number is prime." << endl;
} */

// Part 3
/*Write a program that asks the user to enter a single character and prints out whether it is one of the following:
Uppercase letter
Lowercase letter
Number
Other*/
/* int main() {
    char character;

    cout << "Enter your desired character: ";
    cin >> character;

    if (character >= 0x30 && character <= 0x39)
        cout << "Your character is a number." << endl;
    else if (character >= 0x41 && character <= 0x5A)
        cout << "Your character is a capital letter." << endl;
    else if (character >= 0x61 && character <= 0x7A)
        cout << "Your character is a lowercase letter." << endl;
    else
        cout << "Your character is not a letter or number." << endl;
} */

// Part 4
// Write a program that asks the user to enter a monetary amount in cents. 
// The program should print out how many quarters, dimes, nickles and pennies are needed to make that amount. 
// Further, when it prints things out it should make grammatical sense and not say things line “1 nickels”.
/* int main() {
    int money;
    int quarters, dimes, nickles, pennies;

    cout << "Enter your monetary amount in cents: ";
    cin >> money;

    quarters = money / 25;
    money = money - quarters *25;
    dimes = money / 10;
    money = money - dimes * 10;
    nickles = money / 5;
    money = money - nickles * 5;
    pennies = money;

    cout << "Your amount can be made with: " << endl;
    if (quarters == 1)
        cout << "1 quarter" << endl;
    else
        cout << quarters << " quarters" << endl;
    if (dimes == 1)
        cout << "1 dime" << endl;
    else
        cout << dimes << " dimes" << endl;
    if (nickles == 1)
        cout << "1 nickle" << endl;
    else
        cout << nickles << " nickles" << endl;
    if (pennies == 1)
        cout << "1 penny" << endl;
    else
        cout << pennies << " pennies" << endl;
} */