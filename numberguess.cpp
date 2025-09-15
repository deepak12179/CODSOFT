#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess the number between 1 and 100!" << endl;

    // Loop until user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
