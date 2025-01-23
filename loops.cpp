#include <iostream>
#include <string>
#include <random>
#include <chrono>

using namespace std;

int main() {
    // generate random number
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distribution(1,100);
    int number = distribution(generator);

    // initalize variables
    int guess{0}, tries{0};
    bool correct{false};

    cout << "I've picked a random number from 1 to 100, try to guess it." << endl;

    while (!correct) {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > number)
            cout << "Too high" << endl;
        else if (guess < number)
            cout << "Too low" << endl;
        else if (guess == number) {
            cout << "You found it in " << tries << " guesses!" << endl;
            correct = true; }
    }
}
