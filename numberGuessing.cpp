#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0)); 
    int target = rand() % 100 + 1; 
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100. Try to guess it!\n";

    while (guess != target) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < target) {
            cout << "Too low! Try again.\n";
        } else if (guess > target) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You have guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}