#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretGrade, guess;
    int attempts = 0;
    char playAgain;

    srand(time(0));

    cout << "======================================" << endl;
    cout << "   MIRACLE GRADE GUESSING SYSTEM" << endl;
    cout << "======================================" << endl;

    do {

        secretGrade = rand() % 101;
        attempts = 0;

        cout << "\nI have selected a secret grade!" << endl;
        cout << "Try to guess it (0 - 100)" << endl;

        do {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;


            if (guess < 0 || guess > 100) {
                cout << "Invalid input! Enter between 0 and 100." << endl;
            }
            else if (guess > secretGrade) {
                cout << "Too High!" << endl;
            }
            else if (guess < secretGrade) {
                cout << "Too Low!" << endl;
            }
            else {
                cout << "\nCongratulations!" << endl;
                cout << "You guessed the miracle grade correctly!" << endl;
                cout << "Secret Grade = " << secretGrade << endl;
                cout << "Total Attempts = " << attempts << endl;


                if (attempts == 1) {
                    cout << "Performance: Genius Guess!" << endl;
                }
                else if (attempts <= 3) {
                    cout << "Performance: Excellent!" << endl;
                }
                else if (attempts <= 6) {
                    cout << "Performance: Good Job!" << endl;
                }
                else {
                    cout << "Performance: Keep Practicing!" << endl;
                }
            }

        } while (guess != secretGrade);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank you for using Miracle Grade Guessing System!" << endl;

    return 0;
}
